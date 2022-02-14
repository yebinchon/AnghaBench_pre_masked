
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fragment_name ;
struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char const*,void const*,int) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;

int FUNC_4(DTBLOB_T *VAR_0, int VAR_1, int VAR_2,
                                   const char *VAR_3, const void *VAR_4,
                                   int VAR_5)
{
 char VAR_6[20];
 int VAR_7, VAR_8;
 int VAR_9;
 FUNC_3(VAR_6, sizeof(VAR_6), "fragment-%u", VAR_1);
 VAR_7 = FUNC_0(VAR_0->fdt, 0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_9 = FUNC_2(VAR_0->fdt, VAR_7, "target", VAR_2);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8 = FUNC_0(VAR_0->fdt, VAR_7, "__overlay__");
 if (VAR_8 < 0)
  return VAR_8;
 return FUNC_1(VAR_0->fdt, VAR_8, VAR_3, VAR_4, VAR_5);
}
