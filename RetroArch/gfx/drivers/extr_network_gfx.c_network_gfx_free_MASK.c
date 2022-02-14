
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fd; } ;
typedef TYPE_1__ network_video_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
   network_video_t *VAR_3 = (network_video_t*)VAR_2;

   if (VAR_0)
   {
      FUNC_1(VAR_0);
      VAR_0 = ((void*)0);
   }

   if (VAR_1)
   {
      FUNC_1(VAR_1);
      VAR_1 = ((void*)0);
   }

   FUNC_0();

   if (VAR_3->fd >= 0)
      FUNC_2(VAR_3->fd);

   if (VAR_3)
      FUNC_1(VAR_3);
}
