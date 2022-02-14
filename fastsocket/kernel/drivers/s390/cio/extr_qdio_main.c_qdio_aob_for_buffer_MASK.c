
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qdio_output_q {struct qaob** aobs; TYPE_1__* sbal_state; int use_cq; } ;
struct qaob {scalar_t__ user1; } ;
struct TYPE_2__ {scalar_t__ user; struct qaob* aob; int flags; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct qaob* FUNC_1 () ;
 unsigned long FUNC_2 (struct qaob*) ;

__attribute__((used)) static inline unsigned long FUNC_3(struct qdio_output_q *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3 = 0;

 if (!VAR_1->use_cq)
  goto out;

 if (!VAR_1->aobs[VAR_2]) {
  struct qaob *VAR_4 = FUNC_1();
  VAR_1->aobs[VAR_2] = VAR_4;
 }
 if (VAR_1->aobs[VAR_2]) {
  FUNC_0(VAR_1->sbal_state == ((void*)0));
  VAR_1->sbal_state[VAR_2].flags = VAR_0;
  VAR_1->sbal_state[VAR_2].aob = VAR_1->aobs[VAR_2];
  VAR_1->aobs[VAR_2]->user1 = (u64) VAR_1->sbal_state[VAR_2].user;
  VAR_3 = FUNC_2(VAR_1->aobs[VAR_2]);
  FUNC_0(VAR_3 & 0xFF);
 }

out:
 return VAR_3;
}
