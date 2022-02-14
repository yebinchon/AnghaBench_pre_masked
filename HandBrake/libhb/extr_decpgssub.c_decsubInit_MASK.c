
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int discard_subtitle; TYPE_6__* context; int * job; int last_pts; scalar_t__ seen_forced_sub; int list_pass; int list; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_15__ {TYPE_3__* subtitle; TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
typedef int hb_job_t ;
struct TYPE_11__ {int den; int num; } ;
struct TYPE_16__ {TYPE_1__ pkt_timebase; int * codec; } ;
struct TYPE_12__ {int den; int num; } ;
struct TYPE_13__ {TYPE_2__ timebase; } ;
typedef int AVDictionary ;
typedef TYPE_6__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 TYPE_6__* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int *,int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7( hb_work_object_t * VAR_2, hb_job_t * VAR_3 )
{
    AVCodec *VAR_4 = FUNC_2( VAR_0 );
    AVCodecContext *VAR_5 = FUNC_1( VAR_4 );
    VAR_5->codec = VAR_4;

    hb_work_private_t * VAR_6;
    VAR_6 = FUNC_3( 1, sizeof( hb_work_private_t ) );
    VAR_2->private_data = VAR_6;

    FUNC_5(&VAR_6->list);
    FUNC_5(&VAR_6->list_pass);
    VAR_6->discard_subtitle = 1;
    VAR_6->seen_forced_sub = 0;
    VAR_6->last_pts = VAR_1;
    VAR_6->context = VAR_5;
    VAR_5->pkt_timebase.num = VAR_2->subtitle->timebase.num;
    VAR_5->pkt_timebase.den = VAR_2->subtitle->timebase.den;
    VAR_6->job = VAR_3;


    AVDictionary * VAR_7 = ((void*)0);


    if (FUNC_4(VAR_6->context, VAR_4, &VAR_7, 0))
    {
        FUNC_0( &VAR_7 );
        FUNC_6("decsubInit: avcodec_open failed");
        return 1;
    }
    FUNC_0( &VAR_7 );


    return 0;
}
