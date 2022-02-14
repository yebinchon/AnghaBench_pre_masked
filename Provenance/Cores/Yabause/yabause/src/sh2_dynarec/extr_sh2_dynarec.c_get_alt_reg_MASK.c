
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

signed char FUNC_0(signed char VAR_2[],int VAR_3)
{
  int VAR_4;
  for (VAR_4=VAR_1-1;VAR_4>=0;VAR_4--) if(VAR_4!=VAR_0&&VAR_2[VAR_4]==VAR_3) return VAR_4;
  return -1;
}
