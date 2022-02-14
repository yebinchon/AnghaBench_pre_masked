
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swapfile {int swp_flags; int swp_queue; } ;
typedef int queue_entry_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct swapfile*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (struct swapfile*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(boolean_t VAR_9)
{
 struct swapfile *VAR_10 = ((void*)0);
 FUNC_3(&VAR_6);

 VAR_4 = VAR_3;

 FUNC_4(&VAR_6);
 VAR_10 = (struct swapfile*) FUNC_6(&VAR_5);

 while (FUNC_5(&VAR_5, (queue_entry_t)VAR_10) == VAR_0) {

  if ((VAR_10->swp_flags & VAR_1) && (VAR_9 == VAR_3 || FUNC_1(VAR_10))) {

   FUNC_2(!(VAR_10->swp_flags & VAR_2));
   FUNC_9(VAR_10);
  }
  VAR_10 = (struct swapfile*) FUNC_7(&VAR_10->swp_queue);
 }
 FUNC_3(&VAR_6);

 VAR_4 = VAR_0;
 FUNC_8((event_t) &VAR_4);

 if (FUNC_0() && !VAR_8)
  FUNC_8((event_t) &VAR_7);

 FUNC_4(&VAR_6);

}
