
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_2__ {int cause; int loc; int * diag; } ;
struct l3_process {TYPE_1__ para; } ;


 int VAR_0 ;
 int* FUNC_0 (int*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct l3_process *VAR_1, struct sk_buff *VAR_2) {
 u_char VAR_3, VAR_4=0;
 u_char *VAR_5;

 VAR_5 = VAR_2->data;
 VAR_1->para.cause = 31;
 VAR_1->para.loc = 0;
 if ((VAR_5 = FUNC_0(VAR_5, VAR_2->len, VAR_0, 0))) {
  VAR_5++;
  VAR_3 = *VAR_5++;
  if (VAR_3>30)
   return(1);
  if (VAR_3) {
   VAR_1->para.loc = *VAR_5++;
   VAR_3--;
  } else {
   return(2);
  }
  if (VAR_3 && !(VAR_1->para.loc & 0x80)) {
   VAR_3--;
   VAR_5++;
  }
  if (VAR_3) {
   VAR_1->para.cause = *VAR_5++;
   VAR_3--;
   if (!(VAR_1->para.cause & 0x80))
    return(3);
  } else
   return(4);
  while (VAR_3 && (VAR_4<6)) {
   VAR_1->para.diag[VAR_4++] = *VAR_5++;
   VAR_3--;
  }
 } else
  return(-1);
 return(0);
}
