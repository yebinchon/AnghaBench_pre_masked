
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int index; int preview_count; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_14__ {int * path; int list_title; } ;
struct TYPE_11__ {int state; } ;
struct TYPE_13__ {TYPE_6__ title_set; scalar_t__ scan_die; int scan_thread; int state_lock; TYPE_1__ state; } ;
typedef TYPE_3__ hb_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__*,char const*,int,TYPE_6__*,int,int,int ) ;
 int FUNC_12 (TYPE_2__**) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,char const*) ;

void FUNC_16( hb_handle_t * VAR_1, const char * VAR_2, int VAR_3,
              int VAR_4, int VAR_5, uint64_t VAR_6 )
{
    hb_title_t * VAR_7;


    if (VAR_1->title_set.path != ((void*)0) && !FUNC_15(VAR_1->title_set.path, VAR_2))
    {


        int VAR_8;
        for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_1->title_set.list_title); VAR_8++)
        {
            VAR_7 = FUNC_5(VAR_1->title_set.list_title, VAR_8);
            if (VAR_7->index == VAR_3)
            {




                if (VAR_4 < 0)
                {
                    VAR_4 = VAR_7->preview_count;
                }
                if (VAR_4 == VAR_7->preview_count)
                {

                    FUNC_7( VAR_1->state_lock );
                    VAR_1->state.state = VAR_0;
                    FUNC_13( VAR_1->state_lock );
                    return;
                }
            }
        }
    }
    if (VAR_4 < 0)
    {
        VAR_4 = 10;
    }

    VAR_1->scan_die = 0;


    FUNC_10( VAR_1 );
    while( ( VAR_7 = FUNC_5( VAR_1->title_set.list_title, 0 ) ) )
    {
        FUNC_6( VAR_1->title_set.list_title, VAR_7 );
        FUNC_12( &VAR_7 );
    }
    FUNC_0((char*)VAR_1->title_set.path);
    VAR_1->title_set.path = ((void*)0);


    const char *VAR_9 = FUNC_2();
    const char *VAR_10 = FUNC_3();
    FUNC_8("CPU: %s", VAR_9 != ((void*)0) ? VAR_9 : "");
    if (VAR_10 != ((void*)0))
    {
        FUNC_8(" - %s", VAR_10);
    }
    FUNC_8(" - logical processor count: %d", FUNC_1());
    FUNC_8( "hb_scan: path=%s, title_index=%d", VAR_2, VAR_3 );
    VAR_1->scan_thread = FUNC_11( VAR_1, &VAR_1->scan_die, VAR_2, VAR_3,
                                   &VAR_1->title_set, VAR_4,
                                   VAR_5, VAR_6 );
}
