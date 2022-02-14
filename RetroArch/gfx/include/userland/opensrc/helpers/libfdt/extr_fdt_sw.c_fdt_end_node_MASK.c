
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int * FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(void *VAR_3)
{
 fdt32_t *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (! VAR_4)
  return -VAR_1;

 *VAR_4 = FUNC_2(VAR_0);
 return 0;
}
