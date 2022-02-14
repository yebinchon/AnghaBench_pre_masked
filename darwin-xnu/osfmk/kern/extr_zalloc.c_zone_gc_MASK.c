
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* zone_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int options; } ;
struct TYPE_9__ {int all_free; } ;
struct TYPE_10__ {TYPE_1__ pages; int collectable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int VAR_7 ;

void
FUNC_12(boolean_t VAR_8)
{
 unsigned int VAR_9;
 zone_t VAR_10;
 unsigned int VAR_11;

 if (VAR_8) {
  FUNC_3();





 }

 FUNC_5(&VAR_7);

 FUNC_1()->options |= VAR_0;

 FUNC_8(&VAR_3);
 VAR_9 = VAR_4;
 FUNC_9(&VAR_3);

 if (VAR_5 & VAR_1)
  FUNC_4("zone_gc() starting...\n");

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_10 = &(VAR_6[VAR_11]);
  FUNC_0(VAR_10 != VAR_2);

  if (!VAR_10->collectable) {
   continue;
  }





  if (FUNC_7(&VAR_10->pages.all_free)) {
   continue;
  }

  FUNC_2(VAR_10);
 }

 FUNC_1()->options &= ~VAR_0;

 FUNC_6(&VAR_7);
}
