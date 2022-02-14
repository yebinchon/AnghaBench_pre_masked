
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int live; int mutex; } ;
struct ib_ucontext {int dummy; } ;


 struct ib_uobject* FUNC_0 (struct idr*,int,struct ib_ucontext*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_uobject*) ;

__attribute__((used)) static struct ib_uobject *FUNC_3(struct idr *VAR_0, int VAR_1,
      struct ib_ucontext *VAR_2)
{
 struct ib_uobject *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->mutex);
 if (!VAR_3->live) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
