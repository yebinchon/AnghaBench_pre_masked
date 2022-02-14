
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ waitq_lock_state_t ;
typedef scalar_t__ uint64_t ;
struct waitq_set {int wqset_id; } ;
struct waitq_link {int dummy; } ;
struct waitq {int dummy; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct waitq*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,struct waitq*) ;
 scalar_t__ FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*,int ,struct waitq_link*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq_set*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq_set*) ;
 int FUNC_9 (struct waitq_set*) ;
 int FUNC_10 (char*,void*,int ) ;
 struct waitq_link* FUNC_11 (int ) ;
 struct waitq_link* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (struct waitq_link*) ;

kern_return_t FUNC_14(struct waitq *VAR_4, struct waitq_set *VAR_5,
    waitq_lock_state_t VAR_6, uint64_t *VAR_7)
{
 kern_return_t VAR_8;
 struct waitq_link *VAR_9;
 int VAR_10 = (VAR_6 == VAR_2);

 if (!FUNC_7(VAR_4) || FUNC_2(VAR_4))
  FUNC_1("Invalid waitq: %p", VAR_4);

 if (!FUNC_9(VAR_5))
  return VAR_0;

 if (!VAR_7 || *VAR_7 == 0) {
  if (!FUNC_8(VAR_5)) {
   FUNC_5(VAR_5);
  }
 }

 FUNC_10("Link waitq %p to wqset 0x%llx",
  (void *)FUNC_0(VAR_4), VAR_5->wqset_id);
 if (VAR_7 && *VAR_7 != 0) {
  VAR_9 = FUNC_12(*VAR_7, VAR_3);

  *VAR_7 = 0;
 } else {
  VAR_9 = FUNC_11(VAR_3);
 }
 if (!VAR_9)
  return VAR_1;

 if (VAR_10) {
  FUNC_4(VAR_4);
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5->wqset_id, VAR_9);

 if (VAR_10) {
  FUNC_6(VAR_4);
 }

 FUNC_13(VAR_9);

 return VAR_8;
}
