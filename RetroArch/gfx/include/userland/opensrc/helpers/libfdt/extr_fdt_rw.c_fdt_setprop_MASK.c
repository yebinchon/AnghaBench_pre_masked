
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int data; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int,char const*,int,struct fdt_property**) ;
 int FUNC_2 (void*,int,char const*,int,struct fdt_property**) ;
 int FUNC_3 (int ,void const*,int) ;

int FUNC_4(void *VAR_1, int VAR_2, const char *VAR_3,
  const void *VAR_4, int VAR_5)
{
 struct fdt_property *VAR_6;
 int VAR_7;

 FUNC_0(VAR_1);

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_6);
 if (VAR_7 == -VAR_0)
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_6->data, VAR_4, VAR_5);
 return 0;
}
