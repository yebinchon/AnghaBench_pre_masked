
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int desc_types; int exec_units; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct talitos_private* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, __be32 VAR_1)
{
 struct talitos_private *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = (1 << FUNC_0(VAR_1) & VAR_2->desc_types) &&
       (1 << FUNC_1(VAR_1) & VAR_2->exec_units);

 if (FUNC_2(VAR_1))
  VAR_3 = VAR_3 && (1 << FUNC_2(VAR_1)
                & VAR_2->exec_units);

 return VAR_3;
}
