
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct waitq_set {scalar_t__ wqset_id; } ;
struct waitq {scalar_t__ waitq_set_id; } ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct waitq*) ;
 int VAR_6 ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq_set*) ;
 int FUNC_7 (struct waitq_set*) ;
 scalar_t__ FUNC_8 (int ,struct waitq*,scalar_t__,int ,void*,int ) ;

boolean_t FUNC_9(struct waitq *VAR_7, struct waitq_set *VAR_8)
{
 kern_return_t VAR_9 = VAR_5;
 uint64_t VAR_10;

 if (!FUNC_5(VAR_7))
  FUNC_1("Invalid waitq: %p", VAR_7);
 FUNC_0(!FUNC_2(VAR_7));

 if (!FUNC_7(VAR_8))
  return VAR_0;

 FUNC_3(VAR_7);

 if (!FUNC_6(VAR_8))
                goto out_unlock;

 VAR_10 = VAR_8->wqset_id;


 if (VAR_7->waitq_set_id == VAR_10) {
  FUNC_4(VAR_7);
  return VAR_2;
 }


 VAR_9 = FUNC_8(VAR_1, VAR_7, VAR_7->waitq_set_id,
         VAR_3, (void *)&VAR_10, VAR_6);

out_unlock:
 FUNC_4(VAR_7);
 return (VAR_9 == VAR_4);
}
