
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ hb_geometry_t ;
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
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_0(int VAR_12, hb_geometry_t VAR_13)
{
    switch (VAR_12)
    {
        case 131:
            return VAR_8;
        case 136:
            return VAR_3;
        case 133:
            return VAR_6;
        case 137:
            return VAR_2;
        case 130:
            return VAR_9;
        case 129:
            return VAR_10;
        case 128:
            return VAR_11;
        case 138:
            return VAR_1;
        case 139:
            return VAR_0;
        case 134:
            return VAR_5;
        case 135:
            return VAR_4;
        case 132:
            return VAR_7;
        default:
        {
            if ((VAR_13.width >= 1280 || VAR_13.height >= 720)||
                (VAR_13.width > 720 && VAR_13.height > 576 ))

                return VAR_3;
            else


                return VAR_9;
        }
    }
}
