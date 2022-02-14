
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int epsd; int last; int next; scalar_t__ didsecret; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int * VAR_5 ;

void FUNC_4(void)
{

    int VAR_6;
    int VAR_7;

    FUNC_3();


    FUNC_0();

    if ( VAR_1 != VAR_0)
    {
   if (VAR_4->epsd > 2)
 {
     FUNC_1();
     return;
 }

 VAR_7 = (VAR_4->last == 8) ? VAR_4->next - 1 : VAR_4->last;


 for (VAR_6=0 ; VAR_6<=VAR_7 ; VAR_6++)
     FUNC_2(VAR_6, &VAR_3);


 if (VAR_4->didsecret)
     FUNC_2(8, &VAR_3);


 if (VAR_2)
     FUNC_2(VAR_4->next, VAR_5);
    }


    if ( (VAR_1 != VAR_0)
  || VAR_4->next != 30)
 FUNC_1();

}
