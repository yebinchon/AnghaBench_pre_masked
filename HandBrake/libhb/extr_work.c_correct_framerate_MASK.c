
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {int num; double den; } ;
struct TYPE_7__ {double den; scalar_t__ num; } ;
struct TYPE_8__ {int cfr; TYPE_4__ vrate; TYPE_1__ orig_vrate; } ;
typedef TYPE_2__ hb_job_t ;
struct TYPE_9__ {scalar_t__ total_time; long long out_frame_count; } ;
typedef TYPE_3__ hb_interjob_t ;


 double FUNC_0 (double) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,double,int,double) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int*,int*,int*) ;

void FUNC_5( hb_interjob_t * VAR_1, hb_job_t * VAR_2 )
{
    if (VAR_1->total_time <= 0 || VAR_1->out_frame_count <= 0 ||
        VAR_2->cfr == 1)
    {


        return;
    }


    int64_t VAR_3, VAR_4;
    VAR_3 = VAR_1->out_frame_count * 90000LL;
    VAR_4 = VAR_1->total_time;
    FUNC_1(&VAR_3, &VAR_4, VAR_3, VAR_4, VAR_0);

    VAR_2->vrate.num = VAR_3;
    VAR_2->vrate.den = VAR_4;

    VAR_4 = FUNC_3(&VAR_2->vrate, 2.);
    if (VAR_4 > 0)
    {
        int VAR_5, VAR_6, VAR_7;
        FUNC_4(&VAR_5, &VAR_6, &VAR_7);
        VAR_2->vrate.num = VAR_7;
        VAR_2->vrate.den = VAR_4;
    }
    if (FUNC_0(((double)VAR_2->orig_vrate.num / VAR_2->orig_vrate.den) -
            ((double) VAR_2->vrate.num / VAR_2->vrate.den)) > 0.05)
    {
        FUNC_2("work: correcting framerate, %d/%d -> %d/%d",
               VAR_2->orig_vrate.num, VAR_2->orig_vrate.den,
               VAR_2->vrate.num, VAR_2->vrate.den);
    }
}
