
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int len; } ;


 int FUNC_0 (void const*,int) ;
 struct fdt_property* FUNC_1 (void const*,int) ;
 int FUNC_2 (int ) ;

const struct fdt_property *FUNC_3(const void *VAR_0,
            int VAR_1,
            int *VAR_2)
{
 int VAR_3;
 const struct fdt_property *VAR_4;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1)) < 0) {
  if (VAR_2)
   *VAR_2 = VAR_3;
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  *VAR_2 = FUNC_2(VAR_4->len);

 return VAR_4;
}
