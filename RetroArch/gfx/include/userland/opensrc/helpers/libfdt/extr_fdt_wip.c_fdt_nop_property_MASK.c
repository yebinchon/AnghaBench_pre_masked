
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int dummy; } ;


 int FUNC_0 (struct fdt_property*,int) ;
 struct fdt_property* FUNC_1 (void*,int,char const*,int*) ;

int FUNC_2(void *VAR_0, int VAR_1, const char *VAR_2)
{
 struct fdt_property *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (! VAR_3)
  return VAR_4;

 FUNC_0(VAR_3, VAR_4 + sizeof(*VAR_3));

 return 0;
}
