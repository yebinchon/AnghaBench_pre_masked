
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int key_in; scalar_t__ handshaked; TYPE_4__* stream; } ;
typedef TYPE_2__ RTMPEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int,int *,int) ;
 int FUNC_1 (TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    RTMPEContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;

    VAR_5->stream->flags |= VAR_2->flags & VAR_1;
    VAR_6 = FUNC_1(VAR_5->stream, VAR_3, VAR_4);
    VAR_5->stream->flags &= ~VAR_1;

    if (VAR_6 < 0 && VAR_6 != VAR_0)
        return VAR_6;

    if (VAR_5->handshaked && VAR_6 > 0) {

        FUNC_0(&VAR_5->key_in, VAR_3, VAR_3, VAR_6, ((void*)0), 1);
    }

    return VAR_6;
}
