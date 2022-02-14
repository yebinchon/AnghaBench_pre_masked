
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void const* data; int nameoff; } ;


 int FUNC_0 (int ) ;
 struct fdt_property* FUNC_1 (void const*,int,int*) ;
 char* FUNC_2 (void const*,int ) ;

const void *FUNC_3(const void *VAR_0, int VAR_1,
      const char **VAR_2, int *VAR_3)
{
 const struct fdt_property *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 if (VAR_2)
  *VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_4->nameoff));
 return VAR_4->data;
}
