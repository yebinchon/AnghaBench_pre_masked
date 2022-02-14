
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_set {int wqset_id; } ;
struct waitq {int dummy; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct waitq*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*,struct waitq_set*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq_set*) ;
 int FUNC_8 (char*,void*,int ) ;

kern_return_t FUNC_9(struct waitq *VAR_2, struct waitq_set *VAR_3)
{
 kern_return_t VAR_4 = VAR_1;

 FUNC_1(FUNC_7(VAR_3));





 if (!FUNC_6(VAR_2))
  return VAR_0;

 FUNC_8("unlink waitq %p from set 0x%llx",
  (void *)FUNC_0(VAR_2), VAR_3->wqset_id);

 FUNC_1(!FUNC_2(VAR_2));

 FUNC_3(VAR_2);

 VAR_4 = FUNC_4(VAR_2, VAR_3);

 FUNC_5(VAR_2);
 return VAR_4;
}
