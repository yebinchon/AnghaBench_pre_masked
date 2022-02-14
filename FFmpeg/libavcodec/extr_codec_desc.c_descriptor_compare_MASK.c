
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    enum AVCodecID VAR_2 = *(const enum AVCodecID *) VAR_0;
    const AVCodecDescriptor *VAR_3 = VAR_1;

    return VAR_2 - VAR_3->id;
}
