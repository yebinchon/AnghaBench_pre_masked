
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last; int first; } ;
typedef TYPE_1__ cliprange_t ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_1
( int VAR_2,
  int VAR_3 )
{
    cliprange_t* VAR_4;
    cliprange_t* VAR_5;



    VAR_5 = VAR_1;
    while (VAR_5->last < VAR_2-1)
 VAR_5++;

    if (VAR_2 < VAR_5->first)
    {
 if (VAR_3 < VAR_5->first-1)
 {


     FUNC_0 (VAR_2, VAR_3);
     VAR_4 = VAR_0;
     VAR_0++;

     while (VAR_4 != VAR_5)
     {
  *VAR_4 = *(VAR_4-1);
  VAR_4--;
     }
     VAR_4->first = VAR_2;
     VAR_4->last = VAR_3;
     return;
 }


 FUNC_0 (VAR_2, VAR_5->first - 1);

 VAR_5->first = VAR_2;
    }


    if (VAR_3 <= VAR_5->last)
 return;

    VAR_4 = VAR_5;
    while (VAR_3 >= (VAR_4+1)->first-1)
    {

 FUNC_0 (VAR_4->last + 1, (VAR_4+1)->first - 1);
 VAR_4++;

 if (VAR_3 <= VAR_4->last)
 {


     VAR_5->last = VAR_4->last;
     goto crunch;
 }
    }


    FUNC_0 (VAR_4->last + 1, VAR_3);

    VAR_5->last = VAR_3;



  crunch:
    if (VAR_4 == VAR_5)
    {

 return;
    }


    while (VAR_4++ != VAR_0)
    {

 *++VAR_5 = *VAR_4;
    }

    VAR_0 = VAR_5+1;
}
