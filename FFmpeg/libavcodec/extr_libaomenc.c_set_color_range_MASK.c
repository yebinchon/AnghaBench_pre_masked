
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int aom_color_range_t ;
struct TYPE_5__ {int color_range; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_4)
{
    aom_color_range_t VAR_5;
    switch (VAR_4->color_range) {
    case 128:
    case 129: VAR_5 = VAR_1; break;
    case 130: VAR_5 = VAR_0; break;
    default:
        FUNC_0(VAR_4, VAR_3, "Unsupported color range (%d)\n",
               VAR_4->color_range);
        return;
    }

    FUNC_1(VAR_4, VAR_2, VAR_5);
}
