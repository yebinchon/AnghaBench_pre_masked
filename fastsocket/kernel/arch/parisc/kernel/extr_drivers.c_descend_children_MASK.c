
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recurse_struct {int obj; scalar_t__ (* fn ) (struct device*,int ) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct recurse_struct*,int (*) (struct device*,void*)) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device * VAR_0, void * VAR_1)
{
 struct recurse_struct * VAR_2 = (struct recurse_struct *)VAR_1;

 if (VAR_2->fn(VAR_0, VAR_2->obj))
  return 1;
 else
  return FUNC_0(VAR_0, VAR_2, FUNC_2);
}
