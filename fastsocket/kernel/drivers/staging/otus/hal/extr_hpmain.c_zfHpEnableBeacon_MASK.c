
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {int ibssBcnEnabled; int ibssBcnInterval; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_8, u16_t VAR_9, u16_t VAR_10, u16_t VAR_11, u8_t VAR_12)
{
    u32_t VAR_13;

    FUNC_2(VAR_8);


    FUNC_0(VAR_8, VAR_2, 0);

    FUNC_0(VAR_8, VAR_1, VAR_0);

    VAR_13 = VAR_10;

    VAR_13 |= (((u32_t) VAR_11) << 16);

    if (VAR_9 == VAR_5)
    {

        VAR_13 |= 0x1000000;
    }
    else if (VAR_9 == VAR_6)
    {
        VAR_13 |= 0x2000000;

  if ( VAR_12 )
  {
   VAR_13 |= 0x4000000;
  }
  ((struct zsHpPriv*)VAR_7->hpPrivate)->ibssBcnEnabled = 1;
        ((struct zsHpPriv*)VAR_7->hpPrivate)->ibssBcnInterval = VAR_13;
    }
    FUNC_0(VAR_8, VAR_4, (VAR_10-6)<<16);


    FUNC_0(VAR_8, VAR_3, VAR_13);
    FUNC_1(VAR_8);
}
