
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_13__ {double den; scalar_t__ num; } ;
struct TYPE_14__ {int* crop; TYPE_3__ par; TYPE_2__* title; int * list_attachment; } ;
typedef TYPE_4__ hb_job_t ;
struct TYPE_15__ {int renderer; int ssaTrack; int ssa; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_16__ {TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_filter_object_t ;
struct TYPE_17__ {scalar_t__ type; int size; int data; int name; } ;
typedef TYPE_7__ hb_attachment_t ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_12__ {TYPE_1__ geometry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,double) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,double) ;
 int FUNC_7 (int ,char const*,char const*,int,int *,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,double) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 TYPE_7__* FUNC_16 (int *,int) ;
 int FUNC_17 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_18( hb_filter_object_t * VAR_4, hb_job_t * VAR_5 )
{
    hb_filter_private_t * VAR_6 = VAR_4->private_data;

    VAR_6->ssa = FUNC_1();
    if ( !VAR_6->ssa ) {
        FUNC_14( "decssasub: libass initialization failed\n" );
        return 1;
    }


    FUNC_11( VAR_6->ssa, VAR_3, ((void*)0) );


    hb_list_t * VAR_7 = VAR_5->list_attachment;
    int VAR_8;
    for ( VAR_8 = 0; VAR_8 < FUNC_15(VAR_7); VAR_8++ )
    {
        hb_attachment_t * VAR_9 = FUNC_16( VAR_7, VAR_8 );

        if ( VAR_9->type == VAR_2 ||
             VAR_9->type == VAR_1 )
        {
            FUNC_0(
                VAR_6->ssa,
                VAR_9->name,
                VAR_9->data,
                VAR_9->size );
        }
    }

    FUNC_5( VAR_6->ssa, 1 );
    FUNC_12( VAR_6->ssa, ((void*)0) );

    VAR_6->renderer = FUNC_3( VAR_6->ssa );
    if ( !VAR_6->renderer ) {
        FUNC_17( "decssasub: renderer initialization failed\n" );
        return 1;
    }

    FUNC_13( VAR_6->renderer, 0 );
    FUNC_9( VAR_6->renderer, VAR_0 );
    FUNC_6( VAR_6->renderer, 1.0 );
    FUNC_10( VAR_6->renderer, 1.0 );




    const char *VAR_10 = ((void*)0);
    const char *VAR_11 = "Arial";


    FUNC_7( VAR_6->renderer, VAR_10, VAR_11, 1, ((void*)0), 1 );


    VAR_6->ssaTrack = FUNC_2( VAR_6->ssa );
    if ( !VAR_6->ssaTrack ) {
        FUNC_17( "decssasub: ssa track initialization failed\n" );
        return 1;
    }

    int VAR_12 = VAR_5->title->geometry.height - VAR_5->crop[0] - VAR_5->crop[1];
    int VAR_13 = VAR_5->title->geometry.width - VAR_5->crop[2] - VAR_5->crop[3];
    FUNC_8( VAR_6->renderer, VAR_13, VAR_12);

    double VAR_14 = (double)VAR_5->par.num / VAR_5->par.den;
    FUNC_4( VAR_6->renderer, 1, VAR_14 );

    return 0;
}
