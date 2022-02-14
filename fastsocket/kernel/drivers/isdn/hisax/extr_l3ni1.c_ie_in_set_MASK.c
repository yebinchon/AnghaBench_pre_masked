
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct l3_process {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct l3_process *VAR_0, u_char VAR_1, int *VAR_2) {
 int VAR_3 = 1;

 while (*VAR_2 != -1) {
  if ((*VAR_2 & 0xff) == VAR_1) {
   if (VAR_1 & 0x80)
    return(-VAR_3);
   else
    return(VAR_3);
  }
  VAR_3++;
  VAR_2++;
 }
 return(0);
}
