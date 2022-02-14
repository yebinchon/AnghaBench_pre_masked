
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_9__ {int size; int pts; int * data; } ;
struct TYPE_7__ {TYPE_4__ packet_info; TYPE_5__* parser; int context; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_8__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
struct TYPE_10__ {int pts; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,int **,int*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(hb_work_object_t * VAR_1)
{
    hb_work_private_t * VAR_2 = VAR_1->private_data;
    uint8_t * VAR_3 = ((void*)0);
    int VAR_4 = 0;
    int64_t VAR_5 = VAR_0;

    do
    {
        if (VAR_2->parser)
        {
            FUNC_0(VAR_2->parser, VAR_2->context, &VAR_3, &VAR_4,
                                   ((void*)0), 0,
                                   VAR_0, VAR_0, 0 );
            VAR_5 = VAR_2->parser->pts;
        }

        if (VAR_3 != ((void*)0) && VAR_4 > 0)
        {
            VAR_2->packet_info.data = VAR_3;
            VAR_2->packet_info.size = VAR_4;
            VAR_2->packet_info.pts = VAR_5;

            FUNC_1(VAR_2, &VAR_2->packet_info);
        }
    } while (VAR_3 != ((void*)0) && VAR_4 > 0);
}
