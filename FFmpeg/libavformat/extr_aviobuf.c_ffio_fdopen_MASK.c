
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* h; } ;
typedef TYPE_2__ uint8_t ;
struct TYPE_17__ {int max_packet_size; int flags; TYPE_1__* prot; int min_packet_size; scalar_t__ is_streamed; scalar_t__ protocol_blacklist; scalar_t__ protocol_whitelist; } ;
typedef TYPE_3__ URLContext ;
struct TYPE_18__ {int direct; int max_packet_size; int * av_class; int short_seek_get; int seekable; int read_seek; int read_pause; int min_packet_size; void* protocol_blacklist; void* protocol_whitelist; } ;
struct TYPE_15__ {scalar_t__ url_read_seek; } ;
typedef TYPE_2__ AVIOInternal ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int,int,TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_5__**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_7(AVIOContext **VAR_13, URLContext *VAR_14)
{
    AVIOInternal *VAR_15 = ((void*)0);
    uint8_t *VAR_16 = ((void*)0);
    int VAR_17, VAR_18;

    VAR_18 = VAR_14->max_packet_size;
    if (VAR_18) {
        VAR_17 = VAR_18;
    } else {
        VAR_17 = VAR_5;
    }
    VAR_16 = FUNC_2(VAR_17);
    if (!VAR_16)
        return FUNC_0(VAR_4);

    VAR_15 = FUNC_3(sizeof(*VAR_15));
    if (!VAR_15)
        goto fail;

    VAR_15->h = VAR_14;

    *VAR_13 = FUNC_5(VAR_16, VAR_17, VAR_14->flags & VAR_1,
                            VAR_15, VAR_7, VAR_12, VAR_10);
    if (!*VAR_13)
        goto fail;

    (*VAR_13)->protocol_whitelist = FUNC_4(VAR_14->protocol_whitelist);
    if (!(*VAR_13)->protocol_whitelist && VAR_14->protocol_whitelist) {
        FUNC_6(VAR_13);
        goto fail;
    }
    (*VAR_13)->protocol_blacklist = FUNC_4(VAR_14->protocol_blacklist);
    if (!(*VAR_13)->protocol_blacklist && VAR_14->protocol_blacklist) {
        FUNC_6(VAR_13);
        goto fail;
    }
    (*VAR_13)->direct = VAR_14->flags & VAR_0;

    (*VAR_13)->seekable = VAR_14->is_streamed ? 0 : VAR_2;
    (*VAR_13)->max_packet_size = VAR_18;
    (*VAR_13)->min_packet_size = VAR_14->min_packet_size;
    if(VAR_14->prot) {
        (*VAR_13)->read_pause = VAR_8;
        (*VAR_13)->read_seek = VAR_9;

        if (VAR_14->prot->url_read_seek)
            (*VAR_13)->seekable |= VAR_3;
    }
    (*VAR_13)->short_seek_get = VAR_11;
    (*VAR_13)->av_class = &VAR_6;
    return 0;
fail:
    FUNC_1(&VAR_15);
    FUNC_1(&VAR_16);
    return FUNC_0(VAR_4);
}
