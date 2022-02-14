
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ video_fullscreen; } ;
struct TYPE_8__ {TYPE_1__ bools; } ;
struct TYPE_7__ {int (* poll ) (int ) ;} ;
struct TYPE_6__ {int (* set_nonblock_state ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int const) ;

__attribute__((used)) static void FUNC_6(const int VAR_7)
{
   FUNC_5(VAR_7);

   if (VAR_2 && VAR_2->poll)
      VAR_2->poll(VAR_3);
   FUNC_0(VAR_0, (void*)(intptr_t)-1);
}
