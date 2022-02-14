
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_12__ {int* die; TYPE_2__** current_job; int * error; int * jobs; } ;
typedef TYPE_1__ hb_work_t ;
typedef int hb_list_t ;
struct TYPE_13__ {int* die; int * done_error; int * h; int sequence_id; int * json; } ;
typedef TYPE_2__ hb_job_t ;
typedef int hb_handle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (int *,TYPE_2__*,int *) ;
 int FUNC_9 (int *,int *) ;
 TYPE_2__* FUNC_10 (int *,int *) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 TYPE_2__* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19( void * VAR_1 )
{
    hb_work_t * VAR_2 = VAR_1;
    hb_job_t * VAR_3;

    time_t VAR_4 = FUNC_18(((void*)0));
    FUNC_16("Starting work at: %s", FUNC_2(FUNC_17(&VAR_4)));
    FUNC_16( "%d job(s) to process", FUNC_12( VAR_2->jobs ) );

    while( !*VAR_2->die && ( VAR_3 = FUNC_14( VAR_2->jobs, 0 ) ) )
    {
        hb_handle_t * VAR_5 = VAR_3->h;

        FUNC_15( VAR_2->jobs, VAR_3 );
        hb_list_t * VAR_6 = FUNC_13();





        if (VAR_3->json != ((void*)0))
        {
            FUNC_5(1, "json job:\n%s", VAR_3->json);


            FUNC_0(VAR_3, 0, 0);

            FUNC_9(VAR_3->h, VAR_3->json);


            hb_job_t *VAR_7 = FUNC_10(VAR_3->h, VAR_3->json);
            if (VAR_7 == ((void*)0))
            {
                FUNC_7(&VAR_3);
                FUNC_11(&VAR_6);
                *VAR_2->error = VAR_0;
                *VAR_2->die = 1;
                break;
            }
            VAR_7->h = VAR_3->h;
            VAR_7->sequence_id = VAR_3->sequence_id;
            FUNC_7(&VAR_3);
            VAR_3 = VAR_7;
        }
        FUNC_8(VAR_3->h, VAR_3, VAR_6);
        FUNC_7(&VAR_3);

        int VAR_8, VAR_9;
        VAR_8 = FUNC_12(VAR_6);
        for (VAR_9 = 0; VAR_9 < VAR_8 && !*VAR_2->die; VAR_9++)
        {
            VAR_3 = FUNC_14(VAR_6, VAR_9);
            VAR_3->die = VAR_2->die;
            VAR_3->done_error = VAR_2->error;
            *(VAR_2->current_job) = VAR_3;
            FUNC_0(VAR_3, VAR_9 + 1, VAR_8);
            FUNC_3( VAR_3 );
        }
        FUNC_1(VAR_3);
        *(VAR_2->current_job) = ((void*)0);


        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        {
            VAR_3 = FUNC_14(VAR_6, VAR_9);
            FUNC_7(&VAR_3);
        }
        FUNC_11(&VAR_6);



        FUNC_6(VAR_5);
    }

    VAR_4 = FUNC_18(((void*)0));
    FUNC_16("Finished work at: %s", FUNC_2(FUNC_17(&VAR_4)));
    FUNC_4( VAR_2 );
}
