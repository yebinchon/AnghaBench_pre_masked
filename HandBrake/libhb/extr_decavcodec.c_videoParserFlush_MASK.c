
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int64_t ;
struct TYPE_7__ {int size; void* dts; void* pts; int * data; } ;
struct TYPE_8__ {TYPE_1__ packet_info; TYPE_6__* parser; int context; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_9__ {int frame_count; TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_10__ {void* dts; void* pts; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ,int **,int*,int *,int ,void*,void*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(hb_work_object_t * VAR_2)
{
    hb_work_private_t * VAR_3 = VAR_2->private_data;
    int VAR_4;
    uint8_t * VAR_5 = ((void*)0);
    int VAR_6 = 0;
    int64_t VAR_7 = VAR_0;
    int64_t VAR_8 = VAR_0;

    do
    {
        if (VAR_3->parser)
        {
            FUNC_0(VAR_3->parser, VAR_3->context, &VAR_5, &VAR_6,
                                   ((void*)0), 0,
                                   VAR_0, VAR_0, 0 );
            VAR_7 = VAR_3->parser->pts;
            VAR_8 = VAR_3->parser->dts;
        }

        if (VAR_5 != ((void*)0) && VAR_6 > 0)
        {
            VAR_3->packet_info.data = VAR_5;
            VAR_3->packet_info.size = VAR_6;
            VAR_3->packet_info.pts = VAR_7;
            VAR_3->packet_info.dts = VAR_8;

            VAR_4 = FUNC_1(VAR_2);
            if (VAR_4 != VAR_1)
            {
                break;
            }
            VAR_2->frame_count++;
        }
    } while (VAR_5 != ((void*)0) && VAR_6 > 0);
}
