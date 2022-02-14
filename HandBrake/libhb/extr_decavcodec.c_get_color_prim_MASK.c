
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int den; } ;
typedef TYPE_1__ hb_rational_t ;
struct TYPE_6__ {int width; int height; } ;
typedef TYPE_2__ hb_geometry_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(int VAR_10, hb_geometry_t VAR_11, hb_rational_t VAR_12)
{
    switch (VAR_10)
    {
        case 135:
            return VAR_2;
        case 136:
            return VAR_1;
        case 137:
            return VAR_3;
        case 132:
        case 131:
            return VAR_9;
        case 134:
            return VAR_4;
        case 130:
            return VAR_6;
        case 129:
            return VAR_7;
        case 128:
            return VAR_8;
        case 133:
            return VAR_5;
        case 138:
            return VAR_0;
        default:
        {
            if ((VAR_11.width >= 1280 || VAR_11.height >= 720)||
                (VAR_11.width > 720 && VAR_11.height > 576 ))

                return VAR_2;
            else if (VAR_12.den == 1080000)

                return VAR_3;
            else

                return VAR_9;
        }
    }
}
