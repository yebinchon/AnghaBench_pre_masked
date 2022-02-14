
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {scalar_t__ pt; int codec_type; int codec_id; int enc_name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 TYPE_1__* VAR_1 ;

enum AVCodecID FUNC_1(const char *VAR_2, enum AVMediaType VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_1[VAR_4].pt >= 0; VAR_4++)
        if (!FUNC_0(VAR_2, VAR_1[VAR_4].enc_name) && (VAR_3 == VAR_1[VAR_4].codec_type))
            return VAR_1[VAR_4].codec_id;

    return VAR_0;
}
