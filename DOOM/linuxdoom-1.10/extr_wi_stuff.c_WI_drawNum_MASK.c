
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_2
( int VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6 )
{

    int VAR_7 = FUNC_0(VAR_1[0]->width);
    int VAR_8;
    int VAR_9;

    if (VAR_6 < 0)
    {
 if (!VAR_5)
 {

     VAR_6 = 1;
 }
 else
 {

     VAR_6 = 0;
     VAR_9 = VAR_5;

     while (VAR_9)
     {
  VAR_9 /= 10;
  VAR_6++;
     }
 }
    }

    VAR_8 = VAR_5 < 0;
    if (VAR_8)
 VAR_5 = -VAR_5;


    if (VAR_5 == 1994)
 return 0;


    while (VAR_6--)
    {
 VAR_3 -= VAR_7;
 FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1[ VAR_5 % 10 ]);
 VAR_5 /= 10;
    }


    if (VAR_8)
 FUNC_1(VAR_3-=8, VAR_4, VAR_0, VAR_2);

    return VAR_3;

}
