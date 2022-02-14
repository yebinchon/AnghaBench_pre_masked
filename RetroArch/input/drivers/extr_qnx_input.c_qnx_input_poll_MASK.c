
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qnx_input_t ;
typedef int bps_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
   qnx_input_t *VAR_2 = (qnx_input_t*)VAR_1;


   while(1)
   {
      bps_event_t *VAR_3 = ((void*)0);
      int VAR_4 = FUNC_1(&VAR_3, 0);

      if(VAR_4 == VAR_0)
      {
         int VAR_5;

         if (!VAR_3)
            break;

         VAR_5 = FUNC_0(VAR_3);
         if (VAR_5 == FUNC_2())
            FUNC_3(VAR_2, VAR_3);
         else if (VAR_5 == FUNC_5())
            FUNC_4(VAR_2, VAR_3);
      }
   }
}
