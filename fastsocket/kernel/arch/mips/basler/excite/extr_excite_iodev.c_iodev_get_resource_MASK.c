
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 struct resource const* FUNC_0 (struct platform_device*,unsigned int,char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;

__attribute__((used)) static const struct resource *
FUNC_2(struct platform_device *VAR_0, const char *VAR_1,
       unsigned int VAR_2)
{
 char VAR_3[80];
 if (FUNC_1(VAR_3, sizeof VAR_3, "%s_0", VAR_1) >= sizeof VAR_3)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
