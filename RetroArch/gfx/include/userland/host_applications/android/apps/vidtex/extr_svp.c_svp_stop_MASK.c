
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int created; int video_output; scalar_t__ connection; int thread; int sema; int timer; int wd_timer; } ;
typedef TYPE_1__ SVP_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(SVP_T *VAR_2)
{
   FUNC_5(&VAR_2->wd_timer);
   FUNC_5(&VAR_2->timer);


   if (VAR_2->created & VAR_0)
   {
      FUNC_2(VAR_2, VAR_1);
      FUNC_3(&VAR_2->sema);
      FUNC_4(&VAR_2->thread, ((void*)0));
      VAR_2->created &= ~VAR_0;
   }

   if (VAR_2->connection)
   {
      FUNC_0(VAR_2->connection);
   }

   FUNC_1(VAR_2->video_output);
}
