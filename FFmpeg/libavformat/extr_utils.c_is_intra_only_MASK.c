
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ type; int props; } ;
typedef TYPE_1__ AVCodecDescriptor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(enum AVCodecID VAR_2)
{
    const AVCodecDescriptor *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3)
        return 0;
    if (VAR_3->type == VAR_0 && !(VAR_3->props & VAR_1))
        return 0;
    return 1;
}
