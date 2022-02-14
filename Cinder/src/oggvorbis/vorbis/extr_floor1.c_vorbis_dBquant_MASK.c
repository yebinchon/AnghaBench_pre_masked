
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const float *VAR_0){
  int VAR_1= *VAR_0*7.3142857f+1023.5f;
  if(VAR_1>1023)return(1023);
  if(VAR_1<0)return(0);
  return VAR_1;
}
