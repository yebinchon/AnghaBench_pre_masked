
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_3(void)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    for (VAR_8=0;VAR_8<VAR_0;VAR_8++)
    {
 if (VAR_7[VAR_8].x != -1)
 {


     VAR_11 = 5;
     VAR_12 = 6;
     VAR_9 = FUNC_0(VAR_7[VAR_8].x);
     VAR_10 = FUNC_1(VAR_7[VAR_8].y);
     if (VAR_9 >= VAR_4 && VAR_9 <= VAR_3 - VAR_11 && VAR_10 >= VAR_5 && VAR_10 <= VAR_2 - VAR_12)
  FUNC_2(VAR_9, VAR_10, VAR_1, VAR_6[VAR_8]);
 }
    }

}
