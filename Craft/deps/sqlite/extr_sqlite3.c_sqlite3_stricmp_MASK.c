
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0(const char *VAR_1, const char *VAR_2){
  register unsigned char *VAR_3, *VAR_4;
  VAR_3 = (unsigned char *)VAR_1;
  VAR_4 = (unsigned char *)VAR_2;
  while( *VAR_3!=0 && VAR_0[*VAR_3]==VAR_0[*VAR_4]){ VAR_3++; VAR_4++; }
  return VAR_0[*VAR_3] - VAR_0[*VAR_4];
}
