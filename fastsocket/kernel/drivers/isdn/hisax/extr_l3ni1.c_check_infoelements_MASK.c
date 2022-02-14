
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct l3_process {int debug; int st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct l3_process*,int,int*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct l3_process *VAR_6, struct sk_buff *VAR_7, int *VAR_8)
{
 int *VAR_9 = VAR_8;
 u_char VAR_10;
 u_char *VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 u_char VAR_20 = 0;
 u_char VAR_21 = 0;
 u_char VAR_22 = 1;

 VAR_11 = VAR_7->data;

 VAR_11++;
 VAR_13 = (*VAR_11++) & 0xf;
 VAR_11 += VAR_13;
 VAR_10 = *VAR_11++;
 VAR_15 = 0;
 while ((VAR_11 - VAR_7->data) < VAR_7->len) {
  if ((*VAR_11 & 0xf0) == 0x90) {
   VAR_21 = VAR_20;
   VAR_20 = *VAR_11 & 7;
   if (*VAR_11 & 0x08)
    VAR_22 = 0;
   else
    VAR_22 = 1;
   if (VAR_6->debug & VAR_4)
    FUNC_2(VAR_6->st, "check IE shift%scodeset %d->%d",
     VAR_22 ? " locking ": " ", VAR_21, VAR_20);
   VAR_11++;
   continue;
  }
  if (!VAR_20) {
   if ((VAR_14 = FUNC_1(VAR_6, *VAR_11, VAR_9))) {
    if (VAR_14 > 0) {
     if (VAR_14 < VAR_15)
      VAR_16++;
     else
      VAR_15 = VAR_14;
    }
   } else {
    if (FUNC_1(VAR_6, *VAR_11, VAR_5))
     VAR_18++;
    else
     VAR_19++;
   }
  }
  VAR_12 = *VAR_11++;
  if (VAR_12 & 0x80) {
   VAR_13 = 1;
  } else {
   VAR_13 = *VAR_11++;
   VAR_11 += VAR_13;
   VAR_13 += 2;
  }
  if (!VAR_20 && (VAR_13 > FUNC_0(VAR_12)))
   VAR_17++;
  if (!VAR_22) {
   if (VAR_6->debug & VAR_4)
    FUNC_2(VAR_6->st, "check IE shift back codeset %d->%d",
     VAR_20, VAR_21);
   VAR_20 = VAR_21;
   VAR_22 = 1;
  }
 }
 if (VAR_18 | VAR_19 | VAR_17 | VAR_16) {
  if (VAR_6->debug & VAR_4)
   FUNC_2(VAR_6->st, "check IE MT(%x) %d/%d/%d/%d",
    VAR_10, VAR_18, VAR_19, VAR_17, VAR_16);
  if (VAR_18)
   return(VAR_0);
  if (VAR_19)
   return(VAR_3);
  if (VAR_17)
   return(VAR_1);
  if (VAR_16)
   return(VAR_2);
 }
 return(0);
}
