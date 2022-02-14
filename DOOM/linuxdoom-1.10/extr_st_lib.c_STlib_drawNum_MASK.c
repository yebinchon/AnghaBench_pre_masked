
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int* num; int x; int oldnum; scalar_t__ y; TYPE_2__** p; } ;
typedef TYPE_1__ st_number_t ;
typedef int boolean ;
struct TYPE_6__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,scalar_t__,int ,int,int,int,scalar_t__,int ) ;
 int FUNC_3 (int,scalar_t__,int ,TYPE_2__*) ;
 TYPE_2__* VAR_3 ;

void
FUNC_4
( st_number_t* VAR_4,
  boolean VAR_5 )
{

    int VAR_6 = VAR_4->width;
    int VAR_7 = *VAR_4->num;

    int VAR_8 = FUNC_1(VAR_4->p[0]->width);
    int VAR_9 = FUNC_1(VAR_4->p[0]->height);
    int VAR_10 = VAR_4->x;

    int VAR_11;

    VAR_4->oldnum = *VAR_4->num;

    VAR_11 = VAR_7 < 0;

    if (VAR_11)
    {
 if (VAR_6 == 2 && VAR_7 < -9)
     VAR_7 = -9;
 else if (VAR_6 == 3 && VAR_7 < -99)
     VAR_7 = -99;

 VAR_7 = -VAR_7;
    }


    VAR_10 = VAR_4->x - VAR_6*VAR_8;

    if (VAR_4->y - VAR_2 < 0)
 FUNC_0("drawNum: n->y - ST_Y < 0");

    FUNC_2(VAR_10, VAR_4->y - VAR_2, VAR_0, VAR_8*VAR_6, VAR_9, VAR_10, VAR_4->y, VAR_1);


    if (VAR_7 == 1994)
 return;

    VAR_10 = VAR_4->x;


    if (!VAR_7)
 FUNC_3(VAR_10 - VAR_8, VAR_4->y, VAR_1, VAR_4->p[ 0 ]);


    while (VAR_7 && VAR_6--)
    {
 VAR_10 -= VAR_8;
 FUNC_3(VAR_10, VAR_4->y, VAR_1, VAR_4->p[ VAR_7 % 10 ]);
 VAR_7 /= 10;
    }


    if (VAR_11)
 FUNC_3(VAR_10 - 8, VAR_4->y, VAR_1, VAR_3);
}
