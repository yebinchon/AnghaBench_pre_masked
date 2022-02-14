
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

int FUNC_0(int VAR_5)
{
  if((VAR_5 < 0) || (VAR_5 >= 0x80))
    return VAR_0;
  return (VAR_4[VAR_5] & (VAR_2|VAR_3|VAR_1));
}
