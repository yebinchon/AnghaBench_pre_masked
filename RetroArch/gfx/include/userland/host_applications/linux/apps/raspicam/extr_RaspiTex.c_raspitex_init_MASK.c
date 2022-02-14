
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_10__ {int completed_sem; int start_sem; } ;
struct TYPE_11__ {int scene_id; TYPE_1__ capture; scalar_t__ verbose; } ;
typedef TYPE_2__ RASPITEX_STATE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

int FUNC_12(RASPITEX_STATE *VAR_5)
{
   VCOS_STATUS_T VAR_6;
   int VAR_7;
   FUNC_4();

   FUNC_6("RaspiTex", VAR_1);
   FUNC_7(VAR_1,
                      VAR_5->verbose ? VAR_2 : VAR_3);
   FUNC_8("%s", VAR_0);

   VAR_6 = FUNC_9(&VAR_5->capture.start_sem,
                                  "glcap_start_sem", 1);
   if (VAR_6 != VAR_4)
      goto error;

   VAR_6 = FUNC_9(&VAR_5->capture.completed_sem,
                                  "glcap_completed_sem", 0);
   if (VAR_6 != VAR_4)
      goto error;

   switch (VAR_5->scene_id)
   {
   case 131:
      VAR_7 = FUNC_2(VAR_5);
      break;
   case 133:
      VAR_7 = FUNC_0(VAR_5);
      break;
   case 130:
      VAR_7 = FUNC_3(VAR_5);
      break;
   case 128:
      VAR_7 = FUNC_11(VAR_5);
      break;
   case 132:
      VAR_7 = FUNC_1(VAR_5);
      break;
   case 129:
      VAR_7 = FUNC_10(VAR_5);
      break;
   default:
      VAR_7 = -1;
      break;
   }
   if (VAR_7 != 0)
      goto error;

   return 0;

error:
   FUNC_5("%s: failed", VAR_0);
   return -1;
}
