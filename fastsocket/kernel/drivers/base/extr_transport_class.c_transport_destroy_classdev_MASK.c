
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_class {scalar_t__ remove; } ;
struct device {int dummy; } ;
struct attribute_container {int class; } ;


 scalar_t__ VAR_0 ;
 struct transport_class* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct attribute_container *VAR_1,
          struct device *VAR_2,
          struct device *VAR_3)
{
 struct transport_class *VAR_4 = FUNC_0(VAR_1->class);

 if (VAR_4->remove != VAR_0)
  FUNC_1(VAR_3);
}
