
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linecount; scalar_t__ floorheight; int ** lines; } ;
typedef TYPE_1__ sector_t ;
typedef int line_t ;
typedef scalar_t__ fixed_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;

fixed_t
FUNC_2
( sector_t* VAR_2,
  int VAR_3 )
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    line_t* VAR_7;
    sector_t* VAR_8;
    fixed_t VAR_9 = VAR_3;


    fixed_t VAR_10[VAR_0];

    for (VAR_4=0, VAR_5=0 ;VAR_4 < VAR_2->linecount ; VAR_4++)
    {
 VAR_7 = VAR_2->lines[VAR_4];
 VAR_8 = FUNC_1(VAR_7,VAR_2);

 if (!VAR_8)
     continue;

 if (VAR_8->floorheight > VAR_9)
     VAR_10[VAR_5++] = VAR_8->floorheight;


 if ( VAR_5 >= VAR_0 )
 {
     FUNC_0( VAR_1,
       "Sector with more than 20 adjoining sectors\n" );
     break;
 }
    }


    if (!VAR_5)
 return VAR_3;

    VAR_6 = VAR_10[0];


    for (VAR_4 = 1;VAR_4 < VAR_5;VAR_4++)
 if (VAR_10[VAR_4] < VAR_6)
     VAR_6 = VAR_10[VAR_4];

    return VAR_6;
}
