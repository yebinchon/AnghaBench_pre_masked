
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {scalar_t__ halReInit; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int*,int,int ,int ) ;
 int FUNC_1 (int *) ;

u32_t FUNC_2(zdev_t* VAR_5)
{
    u32_t VAR_6[1];
    u16_t VAR_7;
 FUNC_1(VAR_5);

 if ( ((struct zsHpPriv*)VAR_4->hpPrivate)->halReInit )
 {
     return 1;
 }


    VAR_6[0] = 0 | (VAR_0 << 8);
    VAR_7 = FUNC_0(VAR_5, VAR_6, 4, VAR_2, 0);


    VAR_6[0] = 0 | (VAR_1 << 8);
    VAR_7 = FUNC_0(VAR_5, VAR_6, 4, VAR_3, 0);

    return VAR_7;
}
