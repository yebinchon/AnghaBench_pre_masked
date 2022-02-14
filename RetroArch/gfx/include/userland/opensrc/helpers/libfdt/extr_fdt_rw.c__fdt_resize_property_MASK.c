
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int len; int data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 struct fdt_property* FUNC_3 (void*,int,char const*,int*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, int VAR_1, const char *VAR_2,
    int VAR_3, struct fdt_property **VAR_4)
{
 int VAR_5;
 int VAR_6;

 *VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (! (*VAR_4))
  return VAR_5;

 if ((VAR_6 = FUNC_1(VAR_0, (*VAR_4)->data, FUNC_0(VAR_5),
          FUNC_0(VAR_3))) != 0)
  return VAR_6;

 (*VAR_4)->len = FUNC_2(VAR_3);
 return 0;
}
