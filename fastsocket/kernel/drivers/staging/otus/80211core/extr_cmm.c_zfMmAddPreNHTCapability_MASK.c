
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_11__ {int Length; } ;
struct TYPE_12__ {int * Byte; TYPE_4__ Data; } ;
struct TYPE_13__ {TYPE_5__ HTCap; } ;
struct TYPE_8__ {int Length; } ;
struct TYPE_9__ {int * Byte; TYPE_1__ Data; } ;
struct TYPE_10__ {TYPE_2__ HTCap; } ;
struct TYPE_14__ {scalar_t__ wlanMode; TYPE_6__ sta; TYPE_3__ ap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t* VAR_3, zbuf_t* VAR_4, u16_t VAR_5)
{

    u16_t VAR_6;

    FUNC_1(VAR_3);


    FUNC_0(VAR_3, VAR_4, VAR_5++, VAR_1);

    if ( VAR_2->wlanMode == VAR_0 )
    {

        FUNC_0(VAR_3, VAR_4, VAR_5++, VAR_2->ap.HTCap.Data.Length);


        for (VAR_6 = 0; VAR_6 < 26; VAR_6++)
        {
            FUNC_0(VAR_3, VAR_4, VAR_5++, VAR_2->ap.HTCap.Byte[VAR_6+2]);
        }
    }
    else
    {

        FUNC_0(VAR_3, VAR_4, VAR_5++, VAR_2->sta.HTCap.Data.Length);


        for (VAR_6 = 0; VAR_6 < 26; VAR_6++)
        {
            FUNC_0(VAR_3, VAR_4, VAR_5++, VAR_2->sta.HTCap.Byte[VAR_6+2]);
        }
    }

    return VAR_5;
}
