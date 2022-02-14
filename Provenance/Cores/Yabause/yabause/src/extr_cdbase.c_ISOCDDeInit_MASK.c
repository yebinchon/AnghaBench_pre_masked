
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int session_num; TYPE_1__* session; } ;
struct TYPE_3__ {int track_num; scalar_t__ file_id; struct TYPE_3__* track; int * fp; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void) {
   int VAR_1, VAR_2, VAR_3;
   if (VAR_0.session)
   {
      for (VAR_1 = 0; VAR_1 < VAR_0.session_num; VAR_1++)
      {
         if (VAR_0.session[VAR_1].track)
         {
            for (VAR_2 = 0; VAR_2 < VAR_0.session[VAR_1].track_num; VAR_2++)
            {
               if (VAR_0.session[VAR_1].track[VAR_2].fp)
               {
                  FUNC_0(VAR_0.session[VAR_1].track[VAR_2].fp);


                  for (VAR_3 = VAR_2+1; VAR_3 < VAR_0.session[VAR_1].track_num; VAR_3++)
                  {
                     if (VAR_0.session[VAR_1].track[VAR_2].file_id == VAR_0.session[VAR_1].track[VAR_3].file_id)
                        VAR_0.session[VAR_1].track[VAR_3].fp = ((void*)0);
                  }
               }
            }
            FUNC_1(VAR_0.session[VAR_1].track);
         }
      }
      FUNC_1(VAR_0.session);
   }
}
