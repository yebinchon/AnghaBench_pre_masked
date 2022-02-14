
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int nameoff; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,int ,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void const*,int) ;
 struct fdt_property* FUNC_3 (void const*,int,int*) ;
 int FUNC_4 (void const*,int) ;

const struct fdt_property *FUNC_5(const void *VAR_1,
          int VAR_2,
          const char *VAR_3,
          int VAR_4, int *VAR_5)
{
 for (VAR_2 = FUNC_2(VAR_1, VAR_2);
      (VAR_2 >= 0);
      (VAR_2 = FUNC_4(VAR_1, VAR_2))) {
  const struct fdt_property *VAR_6;

  if ((VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5)) == 0) {
   VAR_2 = -VAR_0;
   break;
  }
  if (FUNC_0(VAR_1, FUNC_1(VAR_6->nameoff),
       VAR_3, VAR_4))
   return VAR_6;
 }

 if (VAR_5)
  *VAR_5 = VAR_2;
 return ((void*)0);
}
