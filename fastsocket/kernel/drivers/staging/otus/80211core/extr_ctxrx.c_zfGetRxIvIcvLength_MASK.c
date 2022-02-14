
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct zsAdditionInfo {int dummy; } ;
struct TYPE_6__ {int* encryMode; } ;
struct TYPE_7__ {int* encryMode; TYPE_2__ wds; TYPE_1__* staTable; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ ap; } ;
struct TYPE_5__ {int encryMode; } ;




 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (int *,int*) ;
 size_t FUNC_1 (struct zsAdditionInfo*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

void FUNC_4(zdev_t* VAR_6, zbuf_t* VAR_7, u8_t VAR_8, u16_t* VAR_9,
                        u16_t* VAR_10, struct zsAdditionInfo* VAR_11)
{
    u16_t VAR_12;
    u8_t VAR_13;

    FUNC_2(VAR_6);

    *VAR_9 = 0;
    *VAR_10 = 0;

    VAR_13 = FUNC_1(VAR_11);

    if ( VAR_5->wlanMode == VAR_2 )
    {
        if (VAR_8 < VAR_0)
        {
            if (( VAR_5->ap.encryMode[VAR_8] == 128 ) ||
                    ( VAR_5->ap.encryMode[VAR_8] == 130 ) ||
                    ( VAR_5->ap.encryMode[VAR_8] == 129 ))
            {
                *VAR_9 = 4;
                *VAR_10 = 4;
            }
            else
            {
                u16_t VAR_14;
                u16_t VAR_15[3];

                VAR_15[0] = FUNC_3(VAR_6, VAR_7, VAR_4);
                VAR_15[1] = FUNC_3(VAR_6, VAR_7, VAR_4+2);
                VAR_15[2] = FUNC_3(VAR_6, VAR_7, VAR_4+4);


                if ((VAR_14 = FUNC_0(VAR_6, VAR_15)) != 0xffff)
                {
                    if (VAR_5->ap.staTable[VAR_14].encryMode == 131)
                    {
                        *VAR_9 = 8;
                        *VAR_10 = 4;
                    }
                    else if (VAR_5->ap.staTable[VAR_14].encryMode == 133)
                    {
                        *VAR_9 = 8;
                        *VAR_10 = 8;

                    }







                }
            }

            if ((VAR_12 = VAR_8 - 0x20) >= VAR_1)
            {
                VAR_12 = 0;
            }

            switch (VAR_5->ap.wds.encryMode[VAR_12])
   {
   case 128:
   case 130:
   case 129:
                *VAR_9 = 4;
                *VAR_10 = 4;
    break;
   case 131:
                *VAR_9 = 8;
                *VAR_10 = 4;
    break;
   case 133:
                *VAR_9 = 8;
                *VAR_10 = 0;
    break;






   }
        }
    }
 else if ( VAR_5->wlanMode == VAR_3)
    {

        switch (VAR_13)
  {
        case 128:
        case 130:
        case 129:
            *VAR_9 = 4;
            *VAR_10 = 4;
   break;
  case 131:
            *VAR_9 = 8;
            *VAR_10 = 4;
   break;
  case 133:
            *VAR_9 = 8;
            *VAR_10 = 0;
   break;





  }
    }
    else
    {
        if ( (VAR_13 == 128)||
             (VAR_13 == 130)||
             (VAR_13 == 129) )
        {
            *VAR_9 = 4;
            *VAR_10 = 4;
        }
        else if ( VAR_13 == 131 )
        {
            *VAR_9 = 8;
            *VAR_10 = 4;
        }
        else if ( VAR_13 == 133 )
        {
            *VAR_9 = 8;
            *VAR_10 = 8;
        }







    }
}
