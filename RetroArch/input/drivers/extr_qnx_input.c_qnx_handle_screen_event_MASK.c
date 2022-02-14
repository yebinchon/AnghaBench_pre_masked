
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int screen_event_t ;
typedef int screen_device_t ;
struct TYPE_11__ {TYPE_7__* devices; } ;
typedef TYPE_1__ qnx_input_t ;
typedef int bps_event_t ;
struct TYPE_12__ {int id; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,void**) ;

__attribute__((used)) static void FUNC_11(qnx_input_t *VAR_4, bps_event_t *VAR_5)
{
   int VAR_6;
   screen_event_t VAR_7 = FUNC_7(VAR_5);

   FUNC_9(VAR_7, VAR_3, &VAR_6);

   switch(VAR_6)
   {
      case 128:
      case 129:
      case 130:
         FUNC_6(VAR_4, VAR_7, VAR_6);
         break;
      case 131:
         FUNC_5(VAR_4, VAR_7, VAR_6);
         break;
      default:
         break;
   }
}
