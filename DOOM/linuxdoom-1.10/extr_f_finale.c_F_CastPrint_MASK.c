
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (int) ;

void FUNC_3 (char* VAR_3)
{
    char* VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;


    VAR_4 = VAR_3;
    VAR_8 = 0;

    while (VAR_4)
    {
 VAR_5 = *VAR_4++;
 if (!VAR_5)
     break;
 VAR_5 = FUNC_2(VAR_5) - VAR_1;
 if (VAR_5 < 0 || VAR_5> VAR_0)
 {
     VAR_8 += 4;
     continue;
 }

 VAR_7 = FUNC_0 (VAR_2[VAR_5]->width);
 VAR_8 += VAR_7;
    }


    VAR_6 = 160-VAR_8/2;
    VAR_4 = VAR_3;
    while (VAR_4)
    {
 VAR_5 = *VAR_4++;
 if (!VAR_5)
     break;
 VAR_5 = FUNC_2(VAR_5) - VAR_1;
 if (VAR_5 < 0 || VAR_5> VAR_0)
 {
     VAR_6 += 4;
     continue;
 }

 VAR_7 = FUNC_0 (VAR_2[VAR_5]->width);
 FUNC_1(VAR_6, 180, 0, VAR_2[VAR_5]);
 VAR_6+=VAR_7;
    }

}
