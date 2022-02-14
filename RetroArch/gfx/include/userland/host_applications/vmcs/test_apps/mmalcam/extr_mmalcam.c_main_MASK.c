
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCOS_THREAD_ATTR_T ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_3__ {int zero_copy; scalar_t__ init_result; int init_sem; int encoder_stats; scalar_t__ uri; int render_stats; int camera_num; int focus_test; int bit_rate; int vformat; int layer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int,char const**) ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char*,int *,int ,TYPE_1__*) ;
 int FUNC_14 (int *,int *) ;

int FUNC_15(int VAR_15, const char **VAR_16)
{
   VCOS_THREAD_ATTR_T VAR_17;
   VCOS_STATUS_T VAR_18;
   int VAR_19 = 0;

   FUNC_8("mmalcam", VAR_6);
   FUNC_2("MMAL Camera Test App\n");
   FUNC_3(VAR_5, VAR_14);

   VAR_9.layer = VAR_8;
   VAR_9.vformat = VAR_2;
   VAR_9.zero_copy = 1;
   VAR_9.bit_rate = VAR_0;
   VAR_9.focus_test = VAR_4;
   VAR_9.camera_num = VAR_1;

   if(FUNC_6(VAR_15, VAR_16))
   {
      VAR_19 = -1;
      goto error;
   }

   VAR_18 = FUNC_9(&VAR_9.init_sem, "mmalcam-init", 0);
   FUNC_7(VAR_18 == VAR_7);

   FUNC_12(&VAR_17);
   if (FUNC_13(&VAR_10, "mmal camcorder", &VAR_17, VAR_13, &VAR_9) != VAR_7)
   {
      FUNC_0("Thread creation failure");
      VAR_19 = -2;
      goto error;
   }

   FUNC_11(&VAR_9.init_sem);
   if (VAR_9.init_result != VAR_3)
   {
      FUNC_0("Initialisation failed: %d", VAR_9.init_result);
      VAR_19 = (int)VAR_9.init_result;
      goto error;
   }

   if (VAR_11 != 0)
   {
      FUNC_4(VAR_11);
      VAR_12 = 1;
   }

error:
   FUNC_1("Waiting for camcorder thread to terminate");
   FUNC_14(&VAR_10, ((void*)0));

   FUNC_5("Render", &VAR_9.render_stats);
   if (VAR_9.uri)
      FUNC_5("Encoder", &VAR_9.encoder_stats);

   FUNC_10(&VAR_9.init_sem);
   return VAR_19;
}
