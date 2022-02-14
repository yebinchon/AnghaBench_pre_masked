
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_4__ {int codec_type; scalar_t__ enc_name; } ;
typedef TYPE_1__ RTPDynamicProtocolHandler ;


 int FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__* FUNC_1 (void**) ;

const RTPDynamicProtocolHandler *FUNC_2(const char *VAR_0,
                                                       enum AVMediaType VAR_1)
{
    void *VAR_2 = 0;
    const RTPDynamicProtocolHandler *VAR_3;
    while ((VAR_3 = FUNC_1(&VAR_2))) {
        if (VAR_3->enc_name &&
            !FUNC_0(VAR_0, VAR_3->enc_name) &&
            VAR_1 == VAR_3->codec_type)
            return VAR_3;
    }
    return ((void*)0);
}
