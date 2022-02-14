
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int buf_size; int buf; } ;
typedef TYPE_1__ AVProbeData ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_0)
{
    enum AVCodecID VAR_1;
    return FUNC_0 (VAR_0->buf, VAR_0->buf_size, &VAR_1);
}
