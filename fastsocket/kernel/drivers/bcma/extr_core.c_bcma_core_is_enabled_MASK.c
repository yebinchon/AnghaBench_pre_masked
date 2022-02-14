
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_device*,int ) ;

bool FUNC_1(struct bcma_device *VAR_5)
{
 if ((FUNC_0(VAR_5, VAR_0) & (VAR_1 | VAR_2))
     != VAR_1)
  return 0;
 if (FUNC_0(VAR_5, VAR_3) & VAR_4)
  return 0;
 return 1;
}
