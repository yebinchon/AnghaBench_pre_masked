
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
struct device_node {int dummy; } ;


 int const* FUNC_0 (struct device_node*,char const*,int*) ;

__attribute__((used)) static u32 FUNC_1(struct device_node *VAR_0, const char *VAR_1, u32 VAR_2)
{
 const u32 *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_3 && VAR_4 >= 4)
  return *VAR_3;
 return VAR_2;
}
