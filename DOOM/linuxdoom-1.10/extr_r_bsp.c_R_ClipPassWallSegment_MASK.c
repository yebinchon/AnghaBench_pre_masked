
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last; int first; } ;
typedef TYPE_1__ cliprange_t ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1
( int VAR_1,
  int VAR_2 )
{
    cliprange_t* VAR_3;



    VAR_3 = VAR_0;
    while (VAR_3->last < VAR_1-1)
 VAR_3++;

    if (VAR_1 < VAR_3->first)
    {
 if (VAR_2 < VAR_3->first-1)
 {

     FUNC_0 (VAR_1, VAR_2);
     return;
 }


 FUNC_0 (VAR_1, VAR_3->first - 1);
    }


    if (VAR_2 <= VAR_3->last)
 return;

    while (VAR_2 >= (VAR_3+1)->first-1)
    {

 FUNC_0 (VAR_3->last + 1, (VAR_3+1)->first - 1);
 VAR_3++;

 if (VAR_2 <= VAR_3->last)
     return;
    }


    FUNC_0 (VAR_3->last + 1, VAR_2);
}
