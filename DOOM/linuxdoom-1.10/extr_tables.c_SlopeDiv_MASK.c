
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0
( unsigned VAR_1,
  unsigned VAR_2)
{
    unsigned VAR_3;

    if (VAR_2 < 512)
 return VAR_0;

    VAR_3 = (VAR_1<<3)/(VAR_2>>8);

    return VAR_3 <= VAR_0 ? VAR_3 : VAR_0;
}
