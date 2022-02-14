
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int ref; struct ib_ucontext* context; } ;
struct ib_ucontext {int dummy; } ;


 int VAR_0 ;
 struct ib_uobject* FUNC_0 (struct idr*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ib_uobject *FUNC_4(struct idr *VAR_1, int VAR_2,
      struct ib_ucontext *VAR_3)
{
 struct ib_uobject *VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {
  if (VAR_4->context == VAR_3)
   FUNC_1(&VAR_4->ref);
  else
   VAR_4 = ((void*)0);
 }
 FUNC_3(&VAR_0);

 return VAR_4;
}
