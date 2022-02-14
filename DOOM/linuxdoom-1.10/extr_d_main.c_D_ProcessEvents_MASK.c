
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int event_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_3 (void)
{
    event_t* VAR_6;


    if ( ( VAR_5 == VAR_1 )
  && (FUNC_2("map01")<0) )
      return;

    for ( ; VAR_4 != VAR_2 ; VAR_4 = (++VAR_4)&(VAR_0-1) )
    {
 VAR_6 = &VAR_3[VAR_4];
 if (FUNC_1 (VAR_6))
     continue;
 FUNC_0 (VAR_6);
    }
}
