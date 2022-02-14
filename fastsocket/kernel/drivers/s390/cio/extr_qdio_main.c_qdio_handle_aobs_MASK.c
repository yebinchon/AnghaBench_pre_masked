
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sbal_state; struct qaob** aobs; } ;
struct TYPE_6__ {TYPE_2__ out; } ;
struct qdio_q {TYPE_3__ u; } ;
struct qaob {int dummy; } ;
struct TYPE_4__ {int * aob; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*,int,unsigned char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct qdio_q *VAR_3, int VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_3)) {
  int VAR_6;
  int VAR_7 = VAR_4;
  unsigned char VAR_8 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   FUNC_2(VAR_3, VAR_7, &VAR_8, 0);
   if (VAR_8 == VAR_2) {
    struct qaob *VAR_9 = VAR_3->u.out.aobs[VAR_7];
    if (VAR_9 == ((void*)0))
     continue;

    FUNC_0(VAR_3->u.out.sbal_state == ((void*)0));
    VAR_3->u.out.sbal_state[VAR_7].flags |=
     VAR_0;
    VAR_3->u.out.aobs[VAR_7] = ((void*)0);
   } else if (VAR_8 == VAR_1) {
    FUNC_0(VAR_3->u.out.sbal_state == ((void*)0));
    VAR_3->u.out.sbal_state[VAR_7].aob = ((void*)0);
   }

   VAR_7 = FUNC_3(VAR_7);
  }
 }
}
