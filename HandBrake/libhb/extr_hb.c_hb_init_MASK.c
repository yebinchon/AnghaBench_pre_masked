
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hb_interjob_t ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {void* list_title; } ;
struct TYPE_9__ {int pause_date; int main_thread; scalar_t__ die; void* interjob; void* pause_lock; TYPE_2__ state; void* state_lock; void* jobs; TYPE_1__ title_set; int system_sleep_opaque; scalar_t__ id; } ;
typedef TYPE_3__ hb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int VAR_2 ;
 void* FUNC_1 () ;
 void* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,TYPE_3__*,int ) ;
 int VAR_3 ;

hb_handle_t * FUNC_7( int VAR_4 )
{
    hb_handle_t * VAR_5 = FUNC_0( sizeof( hb_handle_t ), 1 );


    FUNC_4(VAR_5, VAR_4);

    VAR_5->id = VAR_2++;


    VAR_5->system_sleep_opaque = FUNC_5();

 VAR_5->title_set.list_title = FUNC_1();
    VAR_5->jobs = FUNC_1();

    VAR_5->state_lock = FUNC_2();
    VAR_5->state.state = VAR_1;

    VAR_5->pause_lock = FUNC_2();
    VAR_5->pause_date = -1;

    VAR_5->interjob = FUNC_0( sizeof( hb_interjob_t ), 1 );


    FUNC_3( "hb_init: starting libhb thread" );
    VAR_5->die = 0;
    VAR_5->main_thread = FUNC_6( "libhb", VAR_3, VAR_5,
                                     VAR_0 );

    return VAR_5;
}
