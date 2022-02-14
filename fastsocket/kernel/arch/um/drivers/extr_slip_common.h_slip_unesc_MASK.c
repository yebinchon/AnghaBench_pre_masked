
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned char VAR_0, unsigned char *VAR_1, int *VAR_2,
                             int *VAR_3)
{
 int VAR_4;

 switch(VAR_0){
 case 131:
  *VAR_3 = 0;
  VAR_4=*VAR_2;
  *VAR_2=0;
  return(VAR_4);
 case 130:
  *VAR_3 = 1;
  return(0);
 case 128:
  if(*VAR_3){
   *VAR_3 = 0;
   VAR_0 = 130;
  }
  break;
 case 129:
  if(*VAR_3){
   *VAR_3 = 0;
   VAR_0 = 131;
  }
  break;
 }
 VAR_1[(*VAR_2)++] = VAR_0;
 return(0);
}
