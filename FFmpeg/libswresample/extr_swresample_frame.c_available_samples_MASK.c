
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* linesize; int channel_layout; int format; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(AVFrame *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0->format);
    int VAR_2 = VAR_0->linesize[0] / VAR_1;

    if (FUNC_2(VAR_0->format)) {
        return VAR_2;
    } else {
        int VAR_3 = FUNC_1(VAR_0->channel_layout);
        return VAR_2 / VAR_3;
    }
}
