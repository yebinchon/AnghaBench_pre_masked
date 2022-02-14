
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {void* object; } ;
struct ib_ucontext {int dummy; } ;


 struct ib_uobject* FUNC_0 (struct idr*,int,struct ib_ucontext*,int) ;

__attribute__((used)) static void *FUNC_1(struct idr *VAR_0, int VAR_1, struct ib_ucontext *VAR_2,
     int VAR_3)
{
 struct ib_uobject *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return VAR_4 ? VAR_4->object : ((void*)0);
}
