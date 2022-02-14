
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int id; } ;


 struct resource const* FUNC_0 (struct platform_device*,unsigned long,char*) ;
 int FUNC_1 (char*,int,char*,char const*,int) ;

__attribute__((used)) static inline const struct resource *
FUNC_2(struct platform_device *VAR_0, unsigned long VAR_1,
    const char *VAR_2)
{
 char VAR_3[80];

 if (FUNC_1(VAR_3, sizeof VAR_3, "%s_%u", VAR_2, VAR_0->id) >= sizeof VAR_3)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
