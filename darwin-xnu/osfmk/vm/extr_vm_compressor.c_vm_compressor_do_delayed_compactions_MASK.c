
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ c_busy; int c_lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

void
FUNC_9(boolean_t VAR_9)
{
 c_segment_t VAR_10;
 int VAR_11 = 0;
 boolean_t VAR_12 = VAR_2;



 FUNC_1(VAR_6, VAR_3);


 while (!FUNC_7(&VAR_7) && VAR_12 == VAR_2) {

  VAR_10 = (c_segment_t)FUNC_8(&VAR_7);

  FUNC_5(&VAR_10->c_lock);

  if (VAR_10->c_busy) {

   FUNC_6(VAR_6);
   FUNC_3(VAR_10);
   FUNC_5(VAR_6);

   continue;
  }
  FUNC_0(VAR_10);

  FUNC_2(VAR_10, VAR_4, VAR_2, VAR_4);

  if (VAR_5 && (VAR_11++ > VAR_1)) {

   if ((VAR_9 == VAR_4 || FUNC_4() == VAR_4) && VAR_8 < VAR_0)
    VAR_12 = VAR_4;

   VAR_11 = 0;
  }
  FUNC_5(VAR_6);
 }
}
