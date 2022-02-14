
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_store_type {int module; } ;


 struct dm_exception_store_type* FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct dm_exception_store_type *FUNC_4(const char *VAR_1)
{
 struct dm_exception_store_type *VAR_2;

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && !FUNC_3(VAR_2->module))
  VAR_2 = ((void*)0);

 FUNC_2(&VAR_0);

 return VAR_2;
}
