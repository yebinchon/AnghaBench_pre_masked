
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int * VAR_3 ;
 int FUNC_2 (int *,unsigned int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

int FUNC_3(struct sys_device *VAR_7)
{
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++)
  FUNC_1(VAR_6[VAR_8], VAR_2 + (VAR_8*4));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  FUNC_1(VAR_4[VAR_8], VAR_0 + (VAR_8*4));

 FUNC_2(VAR_3, FUNC_0(VAR_3));
 FUNC_1(VAR_5, VAR_1);

 return 0;
}
