
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_13__ {int flags; int data; int size; } ;
struct TYPE_12__ {scalar_t__ freq; int avctx; TYPE_2__* parser; } ;
struct TYPE_11__ {TYPE_1__* parser; } ;
struct TYPE_10__ {int (* split ) (int ,int,int) ;} ;
typedef TYPE_3__ RemoveExtradataContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVBSFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_4, AVPacket *VAR_5)
{
    RemoveExtradataContext *VAR_6 = VAR_4->priv_data;

    int VAR_7;

    VAR_7 = FUNC_0(VAR_4, VAR_5);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_6->parser && VAR_6->parser->parser->split) {
        if (VAR_6->freq == VAR_1 ||
            (VAR_6->freq == VAR_3 && !(VAR_5->flags & VAR_0)) ||
            (VAR_6->freq == VAR_2 && VAR_5->flags & VAR_0)) {
            int VAR_8 = VAR_6->parser->parser->split(VAR_6->avctx, VAR_5->data, VAR_5->size);
            VAR_5->data += VAR_8;
            VAR_5->size -= VAR_8;
        }
    }

    return 0;
}
