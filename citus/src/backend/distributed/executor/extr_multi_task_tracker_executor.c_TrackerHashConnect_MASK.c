
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ TrackerStatus ;
typedef int TaskTracker ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (long) ;

__attribute__((used)) static void
FUNC_5(HTAB *VAR_3)
{
 uint32 VAR_4 = (uint32) FUNC_1(VAR_3);
 uint32 VAR_5 = 0;


 while (VAR_5 < VAR_4)
 {
  TaskTracker *VAR_6 = ((void*)0);
  HASH_SEQ_STATUS VAR_7;
  long VAR_8 = 0;


  VAR_5 = 0;
  FUNC_2(&VAR_7, VAR_3);

  VAR_6 = (TaskTracker *) FUNC_3(&VAR_7);
  while (VAR_6 != ((void*)0))
  {
   TrackerStatus VAR_9 = FUNC_0(VAR_6);
   if (VAR_9 == VAR_1 ||
    VAR_9 == VAR_2)
   {
    VAR_5++;
   }

   VAR_6 = (TaskTracker *) FUNC_3(&VAR_7);
  }


  VAR_8 = VAR_0 * 1000L;
  FUNC_4(VAR_8);
 }
}
