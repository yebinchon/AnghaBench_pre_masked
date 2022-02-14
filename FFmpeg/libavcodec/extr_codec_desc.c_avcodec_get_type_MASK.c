
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ AVCodecDescriptor ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

enum AVMediaType FUNC_1(enum AVCodecID VAR_1)
{
    const AVCodecDescriptor *VAR_2 = FUNC_0(VAR_1);
    return VAR_2 ? VAR_2->type : VAR_0;
}
