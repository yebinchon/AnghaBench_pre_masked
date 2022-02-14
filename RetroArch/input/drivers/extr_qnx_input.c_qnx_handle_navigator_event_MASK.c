
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qnx_input_t ;
typedef int navigator_window_state_t ;
typedef int bps_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(
      qnx_input_t *VAR_4, bps_event_t *VAR_5)
{
   navigator_window_state_t VAR_6;
   bps_event_t *VAR_7 = ((void*)0);

   switch (FUNC_0(VAR_5))
   {
      case 133:
         switch(FUNC_4(VAR_5))
         {
            case 135:
               FUNC_3(1, VAR_2, 0, 0, VAR_3);
               FUNC_3(0, VAR_2, 0, 0, VAR_3);
               break;
            case 132:
            case 134:
               break;
            default:
               break;
         }
         break;
      case 136:
         FUNC_2(VAR_0, ((void*)0));
         break;
      case 129:
         switch(FUNC_5(VAR_5))
         {
            case 128:
            case 130:
               while(1)
               {
                  unsigned VAR_8;


                  FUNC_1(&VAR_7, -1);
                  VAR_8 = FUNC_0(VAR_7);

                  if(VAR_8 == 129)
                  {
                     if(FUNC_5(VAR_7) == 131)
                        break;
                  }
                  else if(VAR_8 == 137)
                     goto shutdown;
               }
               break;
            case 131:
               break;
         }
         break;
     case 137:
        goto shutdown;
      default:
         break;
   }

   return;

   togglemenu:
       FUNC_2(VAR_0, ((void*)0));
       return;
   shutdown:
       FUNC_6(VAR_1, ((void*)0));
       return;
}
