
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ left_setid; scalar_t__ right_setid; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct waitq_link {TYPE_2__ wql_link; TYPE_1__ wql_setid; } ;
struct waitq {scalar_t__ waitq_set_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct waitq_link* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct waitq_link*) ;
 int FUNC_4 (struct waitq_link*) ;
 scalar_t__ FUNC_5 (struct waitq_link*) ;

__attribute__((used)) static inline int FUNC_6(struct waitq *VAR_4,
       uint64_t VAR_5,
       struct waitq_link *VAR_6,
       struct waitq_link *VAR_7,
       struct waitq_link *VAR_8)
{
 uint64_t *VAR_9 = &VAR_4->waitq_set_id;
 if (*VAR_9 == VAR_6->wql_setid.id) {
  if (!VAR_7 && !VAR_8) {

   FUNC_3(VAR_6);
   FUNC_1("S1, L+R");
   *VAR_9 = 0;
   return VAR_2;
  } else if (!VAR_7 || VAR_7->wql_setid.id == VAR_5) {





   *VAR_9 = VAR_8 ? VAR_8->wql_setid.id : 0;
   FUNC_3(VAR_6);
   FUNC_1("S1, L");
   return VAR_7 ? VAR_3 : VAR_2;
  } else if (!VAR_8 || VAR_8->wql_setid.id == VAR_5) {





   *VAR_9 = VAR_7 ? VAR_7->wql_setid.id : 0;
   FUNC_3(VAR_6);
   FUNC_1("S1, R");
   return VAR_8 ? VAR_3 : VAR_2;
  }
 }





 FUNC_0(VAR_7 || VAR_8);
 if (VAR_7 && FUNC_5(VAR_7) == VAR_0) {
  uint64_t VAR_10, VAR_11;
  struct waitq_link *VAR_12, *VAR_13;
  FUNC_0(VAR_7->wql_setid.id != VAR_5);
  VAR_10 = VAR_7->wql_link.left_setid;
  VAR_11 = VAR_7->wql_link.right_setid;
  VAR_12 = FUNC_2(VAR_10);
  VAR_13 = FUNC_2(VAR_11);
  if (!VAR_12 && !VAR_13) {




   FUNC_3(VAR_7);
   FUNC_1("S2, Ll+Lr");
   return VAR_2;
  } else if (!VAR_12 || VAR_10 == VAR_5) {

   VAR_6->wql_link.left_setid = VAR_11;
   FUNC_3(VAR_7);
   FUNC_4(VAR_12);
   FUNC_4(VAR_13);
   FUNC_1("S2, Ll");
   return VAR_12 ? VAR_3 : VAR_2;
  } else if (!VAR_13 || VAR_11 == VAR_5) {

   VAR_6->wql_link.left_setid = VAR_10;
   FUNC_3(VAR_7);
   FUNC_4(VAR_13);
   FUNC_4(VAR_12);
   FUNC_1("S2, Lr");
   return VAR_13 ? VAR_3 : VAR_2;
  }
  FUNC_4(VAR_12);
  FUNC_4(VAR_13);
 }

 if (VAR_8 && FUNC_5(VAR_8) == VAR_0) {
  uint64_t VAR_14, VAR_15;
  struct waitq_link *VAR_16, *VAR_17;
  FUNC_0(VAR_8->wql_setid.id != VAR_5);
  VAR_14 = VAR_8->wql_link.left_setid;
  VAR_15 = VAR_8->wql_link.right_setid;
  VAR_16 = FUNC_2(VAR_14);
  VAR_17 = FUNC_2(VAR_15);
  if (!VAR_16 && !VAR_17) {




   FUNC_3(VAR_8);
   FUNC_1("S2, Rl+Rr");
   return VAR_2;
  } else if (!VAR_16 || VAR_14 == VAR_5) {

   VAR_6->wql_link.right_setid = VAR_15;
   FUNC_3(VAR_8);
   FUNC_4(VAR_16);
   FUNC_4(VAR_17);
   FUNC_1("S2, Rl");
   return VAR_16 ? VAR_3 : VAR_2;
  } else if (!VAR_17 || VAR_15 == VAR_5) {

   VAR_6->wql_link.right_setid = VAR_14;
   FUNC_3(VAR_8);
   FUNC_4(VAR_16);
   FUNC_4(VAR_17);
   FUNC_1("S2, Rr");
   return VAR_17 ? VAR_3 : VAR_2;
  }
  FUNC_4(VAR_16);
  FUNC_4(VAR_17);
 }

 return VAR_1;
}
