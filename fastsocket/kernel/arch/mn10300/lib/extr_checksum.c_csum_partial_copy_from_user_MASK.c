
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __wsum ;


 int VAR_0 ;
 int FUNC_0 (void*,void const*,int) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,int ,int) ;

__wsum FUNC_3(const void *VAR_1, void *VAR_2,
       int VAR_3, __wsum VAR_4,
       int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_2 + VAR_3 - VAR_6, 0, VAR_6);
  *VAR_5 = -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
