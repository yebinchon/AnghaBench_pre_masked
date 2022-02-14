
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int first_image; } ;
typedef TYPE_1__ FITSContext ;
typedef TYPE_2__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0)
{
    FITSContext *VAR_1 = VAR_0->priv_data;
    VAR_1->first_image = 1;
    return 0;
}
