
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* queue_entry_t ;
typedef TYPE_2__* pv_hashed_entry_t ;
struct TYPE_11__ {int options; } ;
struct TYPE_9__ {void* next; } ;
struct TYPE_10__ {TYPE_1__ qlink; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 TYPE_3__* FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((noreturn))
void
FUNC_7(void)
{
 pv_hashed_entry_t VAR_18;
 pv_hashed_entry_t VAR_19;
 pv_hashed_entry_t VAR_20;
 int VAR_21;
 unsigned VAR_22;


 FUNC_3()->options |= VAR_3;

 for (;;) {

  while (VAR_14 < VAR_15) {
   VAR_21 = 0;
   VAR_19 = VAR_20 = VAR_0;

   for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++) {
    VAR_18 = (pv_hashed_entry_t) FUNC_6(VAR_16);
    VAR_18->qlink.next = (queue_entry_t)VAR_19;
    VAR_19 = VAR_18;

    if (VAR_20 == VAR_0)
     VAR_20 = VAR_18;
    VAR_21++;
   }
   VAR_6 += VAR_21;
   FUNC_1(VAR_19, VAR_20, VAR_21);
  }

  VAR_21 = 0;
  VAR_19 = VAR_20 = VAR_0;

  if (VAR_12 < VAR_17) {
   for (VAR_22 = 0; VAR_22 < VAR_11; VAR_22++) {
    VAR_18 = (pv_hashed_entry_t) FUNC_6(VAR_16);

    VAR_18->qlink.next = (queue_entry_t)VAR_19;
    VAR_19 = VAR_18;

    if (VAR_20 == VAR_0)
     VAR_20 = VAR_18;
    VAR_21++;
   }
   VAR_10 += VAR_21;
   FUNC_0(VAR_19, VAR_20, VAR_21);
  }


  if (VAR_8) {
   VAR_8 = 0;
   FUNC_5(&VAR_9);
  }



  if (VAR_14 < VAR_15)
   continue;

  FUNC_2(&VAR_4, VAR_2);
  VAR_5 = 0;
  FUNC_4(VAR_1);
  VAR_7++;
 }
}
