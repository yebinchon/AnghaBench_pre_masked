
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* ctx; } ;
struct TYPE_10__ {size_t file_index; TYPE_3__* st; TYPE_1__* decoded_frame; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {int url; } ;
struct TYPE_7__ {int flags; scalar_t__ decode_error_flags; } ;
typedef TYPE_4__ InputStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_5__** VAR_5 ;

__attribute__((used)) static void FUNC_2(InputStream *VAR_6, int *VAR_7, int VAR_8)
{
    if (*VAR_7 || VAR_8<0)
        VAR_3[VAR_8<0] ++;

    if (VAR_8 < 0 && VAR_4)
        FUNC_1(1);

    if (*VAR_7 && VAR_6) {
        if (VAR_6->decoded_frame->decode_error_flags || (VAR_6->decoded_frame->flags & VAR_0)) {
            FUNC_0(((void*)0), VAR_4 ? VAR_1 : VAR_2,
                   "%s: corrupt decoded frame in stream %d\n", VAR_5[VAR_6->file_index]->ctx->url, VAR_6->st->index);
            if (VAR_4)
                FUNC_1(1);
        }
    }
}
