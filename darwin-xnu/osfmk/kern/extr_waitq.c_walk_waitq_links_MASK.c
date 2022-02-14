
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* wql_callback_func ) (struct waitq*,void*,struct waitq_link*) ;
typedef scalar_t__ uint64_t ;
struct waitq {scalar_t__ waitq_set_id; } ;
struct waitq_set {scalar_t__ wqset_id; struct waitq wqset_q; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {struct waitq_set* wql_set; } ;
struct TYPE_4__ {scalar_t__ left_setid; scalar_t__ right_setid; } ;
struct waitq_link {TYPE_3__ wql_setid; TYPE_2__ wql_wqs; TYPE_1__ wql_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct waitq*) ;
 scalar_t__ FUNC_2 (struct waitq_set*) ;
 int FUNC_3 (struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;
 struct waitq_link* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct waitq_link*) ;
 int FUNC_7 (struct waitq_link*) ;

__attribute__((used)) static __attribute__((noinline))
int FUNC_8(int VAR_6, struct waitq *VAR_7,
       uint64_t VAR_8, int VAR_9,
       void *VAR_10, wql_callback_func VAR_11)
{
 struct waitq_link *VAR_12;
 uint64_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_8);


 if (!VAR_12)
  return VAR_5;

 VAR_8 = VAR_13 = 0;
 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14 == VAR_3) {
  VAR_8 = VAR_12->wql_link.left_setid;
  VAR_13 = VAR_12->wql_link.right_setid;
 }







 if (VAR_9 == VAR_2 || VAR_9 == VAR_14) {

  int VAR_15 = VAR_11(VAR_7, VAR_10, VAR_12);
  if (VAR_15 != VAR_5) {
   FUNC_6(VAR_12);
   return VAR_15;
  }
 }

 if (VAR_14 == VAR_4 &&
     (VAR_6 == VAR_0 ||
      VAR_6 == VAR_1)) {





  struct waitq_set *VAR_16 = VAR_12->wql_wqs.wql_set;
  int VAR_17 = VAR_5;
  int VAR_18 = 0;
  uint64_t VAR_19 = 0;

  if (FUNC_2(VAR_16) && VAR_6 == VAR_0) {
   FUNC_0(!FUNC_1(&VAR_16->wqset_q));
   FUNC_3(VAR_16);
   VAR_18 = 1;
  }





  if (VAR_16->wqset_id != VAR_12->wql_setid.id) {

   if (VAR_18) {
    FUNC_4(VAR_16);
   }
   FUNC_6(VAR_12);
   return VAR_5;
  }

  VAR_19 = VAR_16->wqset_q.waitq_set_id;

  if (VAR_19 > 0)
   VAR_17 = FUNC_8(VAR_6, &VAR_16->wqset_q,
            VAR_19, VAR_9, VAR_10, VAR_11);
  if (VAR_18) {
   FUNC_4(VAR_16);
  }
  if (VAR_17 != VAR_5) {
   FUNC_6(VAR_12);
   return VAR_17;
  }
 }

 FUNC_6(VAR_12);


 if (VAR_8) {
  int VAR_20 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_20 != VAR_5)
   return VAR_20;
 }


 if (VAR_13)
  return FUNC_8(VAR_6, VAR_7, VAR_13, VAR_9, VAR_10, VAR_11);

 return VAR_5;
}
