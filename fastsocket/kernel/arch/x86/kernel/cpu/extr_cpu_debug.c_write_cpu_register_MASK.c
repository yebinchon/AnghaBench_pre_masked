
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpu_private {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (struct cpu_private*,int ) ;

__attribute__((used)) static int FUNC_2(struct cpu_private *VAR_2, const char *VAR_3)
{
 int VAR_4 = -VAR_1;
 u64 VAR_5;

 VAR_4 = FUNC_0(VAR_3, 0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;


 if (VAR_2->type < VAR_0)
  return FUNC_1(VAR_2, VAR_5);

 return VAR_4;
}
