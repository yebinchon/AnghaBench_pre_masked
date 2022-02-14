
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int data; int size; } ;
struct TYPE_11__ {TYPE_3__ packet_info; int context; TYPE_2__* parser; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_12__ {int extradata_size; int * extradata; } ;
struct TYPE_9__ {TYPE_1__* parser; } ;
struct TYPE_8__ {int (* split ) (int ,int ,int ) ;} ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3( hb_work_private_t * VAR_1, AVCodecContext * VAR_2 )
{





    if (VAR_2->extradata == ((void*)0))
    {
        if (VAR_1->parser == ((void*)0) || VAR_1->parser->parser == ((void*)0) ||
            VAR_1->parser->parser->split == ((void*)0))
        {
            return 0;
        }
        else
        {
            int VAR_3;
            VAR_3 = VAR_1->parser->parser->split(VAR_1->context, VAR_1->packet_info.data,
                                             VAR_1->packet_info.size);
            if (VAR_3 > 0)
            {
                VAR_2->extradata_size = VAR_3;
                VAR_2->extradata =
                                FUNC_0(VAR_3 + VAR_0);
                if (VAR_2->extradata == ((void*)0))
                    return 1;
                FUNC_1(VAR_2->extradata, VAR_1->packet_info.data, VAR_3);
                return 0;
            }
        }
        return 1;
    }

    return 0;
}
