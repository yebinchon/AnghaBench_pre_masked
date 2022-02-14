
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int episode; int name2; int name1; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;

void FUNC_3(void)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_9 = 1;

    if (VAR_3 == VAR_5)
 VAR_9 = 2;
    else
 if ( VAR_3 == VAR_2 )
     VAR_9 = 3;

    for (VAR_8 = 0,VAR_7 = 0;VAR_7 < VAR_0;VAR_7++)
    {
 if (!VAR_1[VAR_7].episode)
 {
     VAR_4 = VAR_8/2;
     VAR_6[VAR_8] = -1;
     break;
 }

 if (VAR_1[VAR_7].episode <= VAR_9)
 {
     VAR_6[VAR_8++] = FUNC_2(VAR_1[VAR_7].name1);
     VAR_6[VAR_8++] = FUNC_2(VAR_1[VAR_7].name2);
 }
    }
}
