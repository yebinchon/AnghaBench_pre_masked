
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct l3_process {int debug; int st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct l3_process *VAR_2, struct sk_buff *VAR_3) {
 u_char *VAR_4;

 VAR_4 = VAR_3->data;
 if ((VAR_4 = FUNC_0(VAR_4, VAR_3->len, VAR_0, 0))) {
  VAR_4++;
  if (*VAR_4 != 1) {
   if (VAR_2->debug & VAR_1)
    FUNC_1(VAR_2->st, "wrong chid len %d", *VAR_4);
   return (-2);
  }
  VAR_4++;
  if (*VAR_4 & 0x60) {
   if (VAR_2->debug & VAR_1)
    FUNC_1(VAR_2->st, "wrong chid %x", *VAR_4);
   return (-3);
  }
  return(*VAR_4 & 0x3);
 } else
  return(-1);
}
