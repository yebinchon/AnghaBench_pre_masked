
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_4__ {int static_payload_id; int codec_type; } ;
typedef TYPE_1__ RTPDynamicProtocolHandler ;


 TYPE_1__* FUNC_0 (void**) ;

const RTPDynamicProtocolHandler *FUNC_1(int VAR_0,
                                                     enum AVMediaType VAR_1)
{
    void *VAR_2 = 0;
    const RTPDynamicProtocolHandler *VAR_3;
    while ((VAR_3 = FUNC_0(&VAR_2))) {
        if (VAR_3->static_payload_id && VAR_3->static_payload_id == VAR_0 &&
            VAR_1 == VAR_3->codec_type)
            return VAR_3;
    }
    return ((void*)0);
}
