
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int damagecount; int* powers; int bonuscount; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;

void FUNC_2(void)
{

    int VAR_11;
    byte* VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_13 = VAR_7->damagecount;

    if (VAR_7->powers[VAR_9])
    {

   VAR_14 = 12 - (VAR_7->powers[VAR_9]>>6);

 if (VAR_14 > VAR_13)
     VAR_13 = VAR_14;
    }

    if (VAR_13)
    {
 VAR_11 = (VAR_13+7)>>3;

 if (VAR_11 >= VAR_1)
     VAR_11 = VAR_1-1;

 VAR_11 += VAR_5;
    }

    else if (VAR_7->bonuscount)
    {
 VAR_11 = (VAR_7->bonuscount+7)>>3;

 if (VAR_11 >= VAR_0)
     VAR_11 = VAR_0-1;

 VAR_11 += VAR_4;
    }

    else if ( VAR_7->powers[VAR_8] > 4*32
       || VAR_7->powers[VAR_8]&8)
 VAR_11 = VAR_3;
    else
 VAR_11 = 0;

    if (VAR_11 != VAR_10)
    {
 VAR_10 = VAR_11;
 VAR_12 = (byte *) FUNC_1 (VAR_6, VAR_2)+VAR_11*768;
 FUNC_0 (VAR_12);
    }

}
