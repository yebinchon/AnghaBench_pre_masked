
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_2__* purgeable_q_t ;
typedef enum purgeable_q_type { ____Placeholder_purgeable_q_type } purgeable_q_type ;
struct TYPE_11__ {scalar_t__ debug_count_objects; int * objq; } ;
struct TYPE_10__ {scalar_t__ purgable; scalar_t__ purgeable_when_ripe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__* FUNC_11 (TYPE_2__*,int,int ) ;
 int VAR_10 ;
 int FUNC_12 (TYPE_2__*) ;

void
FUNC_13(void)
{
 enum purgeable_q_type VAR_11;
 int VAR_12;
 vm_object_t VAR_13;
 unsigned int VAR_14;
 uint32_t VAR_15;

 VAR_14 = 0;
 VAR_15 = 0;

restart:
 FUNC_3(&VAR_10);

 for (VAR_11 = VAR_5; VAR_11 < VAR_4; VAR_11++) {
  purgeable_q_t VAR_16;

  VAR_16 = &VAR_9[VAR_11];







  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   while (!FUNC_6(&VAR_16->objq[VAR_12])) {
    VAR_13 = FUNC_11(VAR_16, VAR_12, VAR_1);
    if (VAR_13 == VAR_6) {
     FUNC_4(&VAR_10);
     FUNC_5(VAR_15++);
     goto restart;
    }

    FUNC_4(&VAR_10);



    if (VAR_13->purgeable_when_ripe) {
     FUNC_9();
     FUNC_12(VAR_16);
     FUNC_10();
    }

    (void) FUNC_7(VAR_13, 0);
    FUNC_2(VAR_13->purgable == VAR_7);


    FUNC_8(VAR_13);
    VAR_14++;
    goto restart;
   }
   FUNC_2(VAR_16->debug_count_objects >= 0);
  }
 }
 FUNC_0((FUNC_1(VAR_0, VAR_3)),
         VAR_14,
         0,
         VAR_8,
         0,
         0);
 FUNC_4(&VAR_10);
 return;
}
