
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_set {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct waitq_set*,int,int *,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct waitq_set*) ;

struct waitq_set *FUNC_4(int VAR_2, void *VAR_3)
{
 struct waitq_set *VAR_4;

 VAR_4 = (struct waitq_set *)FUNC_2(VAR_1);
 if (!VAR_4)
  FUNC_0("Can't allocate a new waitq set from zone %p", VAR_1);

 kern_return_t VAR_5;
 VAR_5 = FUNC_1(VAR_4, VAR_2, ((void*)0), VAR_3);
 if (VAR_5 != VAR_0) {
  FUNC_3(VAR_1, VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
