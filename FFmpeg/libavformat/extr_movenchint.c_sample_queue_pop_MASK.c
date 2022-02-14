
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; scalar_t__ own_data; } ;
struct TYPE_5__ {int len; TYPE_3__* samples; } ;
typedef TYPE_1__ HintSampleQueue ;
typedef int HintSample ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(HintSampleQueue *VAR_0)
{
    if (VAR_0->len <= 0)
        return;
    if (VAR_0->samples[0].own_data)
        FUNC_0(&VAR_0->samples[0].data);
    VAR_0->len--;
    FUNC_1(VAR_0->samples, VAR_0->samples + 1, sizeof(HintSample)*VAR_0->len);
}
