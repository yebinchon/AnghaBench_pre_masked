
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_3__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int * FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 TYPE_1__** VAR_9 ;
 int FUNC_4 (int *,int *,int) ;
 int ** VAR_10 ;
 int FUNC_5 (int) ;

void FUNC_6 (void)
{
    byte* VAR_11;
    byte* VAR_12;

    int VAR_13,VAR_14,VAR_15;
    int VAR_16;
    char* VAR_17;
    int VAR_18;
    int VAR_19;
    int VAR_20;


    VAR_11 = FUNC_3 ( VAR_7 , VAR_2);
    VAR_12 = VAR_10[0];

    for (VAR_14=0 ; VAR_14<VAR_3 ; VAR_14++)
    {
 for (VAR_13=0 ; VAR_13<VAR_4/64 ; VAR_13++)
 {
     FUNC_4 (VAR_12, VAR_11+((VAR_14&63)<<6), 64);
     VAR_12 += 64;
 }
 if (VAR_4&63)
 {
     FUNC_4 (VAR_12, VAR_11+((VAR_14&63)<<6), VAR_4&63);
     VAR_12 += (VAR_4&63);
 }
    }

    FUNC_2 (0, 0, VAR_4, VAR_3);


    VAR_19 = 10;
    VAR_20 = 10;
    VAR_17 = VAR_8;

    VAR_16 = (VAR_6 - 10)/VAR_5;
    if (VAR_16 < 0)
 VAR_16 = 0;
    for ( ; VAR_16 ; VAR_16-- )
    {
 VAR_18 = *VAR_17++;
 if (!VAR_18)
     break;
 if (VAR_18 == '\n')
 {
     VAR_19 = 10;
     VAR_20 += 11;
     continue;
 }

 VAR_18 = FUNC_5(VAR_18) - VAR_1;
 if (VAR_18 < 0 || VAR_18> VAR_0)
 {
     VAR_19 += 4;
     continue;
 }

 VAR_15 = FUNC_0 (VAR_9[VAR_18]->width);
 if (VAR_19+VAR_15 > VAR_4)
     break;
 FUNC_1(VAR_19, VAR_20, 0, VAR_9[VAR_18]);
 VAR_19+=VAR_15;
    }

}
