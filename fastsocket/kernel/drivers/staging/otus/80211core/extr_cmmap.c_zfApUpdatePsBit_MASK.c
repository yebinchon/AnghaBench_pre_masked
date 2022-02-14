
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_4__ {int wdsBitmap; int** macAddr; } ;
struct TYPE_5__ {TYPE_1__ wds; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int *,int*,int*,int*,int,int*) ;
 int FUNC_1 (int *,int ,int*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;

u16_t FUNC_5(zdev_t* VAR_6, zbuf_t* VAR_7, u8_t* VAR_8, u8_t* VAR_9)
{
    u16_t VAR_10;
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13[3];
    u16_t VAR_14[1];
    u16_t VAR_15;

    FUNC_2(VAR_6);

    VAR_13[0] = FUNC_4(VAR_6, VAR_7, 10);
    VAR_13[1] = FUNC_4(VAR_6, VAR_7, 12);
    VAR_13[2] = FUNC_4(VAR_6, VAR_7, 14);

    if ((FUNC_3(VAR_6, VAR_7, 1) & 0x3) != 3)
    {

        VAR_14[0] = FUNC_4(VAR_6, VAR_7, 4);

        VAR_12 = (FUNC_3(VAR_6, VAR_7, 1) & 0x10) >> 4;

        VAR_11 = FUNC_0(VAR_6, VAR_13, &VAR_10, VAR_8, VAR_12, VAR_9);


        if ((VAR_11 == 0xffff) || (VAR_10 != VAR_2))
        {
            if ((VAR_14[0]&0x1)==0)
            {
                FUNC_1(VAR_6, VAR_4, VAR_13, 0x7,
                        0, 0);
            }

            return VAR_0;
        }
    }
    else
    {

        for (VAR_15=0; VAR_15<VAR_1; VAR_15++)
        {
            if ((VAR_5->ap.wds.wdsBitmap & (1<<VAR_15)) != 0)
            {
                if ((VAR_13[0] == VAR_5->ap.wds.macAddr[VAR_15][0])
                        && (VAR_13[1] == VAR_5->ap.wds.macAddr[VAR_15][1])
                        && (VAR_13[2] == VAR_5->ap.wds.macAddr[VAR_15][2]))
                {
                    *VAR_8 = 0x20 + VAR_15;
                    break;
                }
            }
        }
    }
    return VAR_3;
}
