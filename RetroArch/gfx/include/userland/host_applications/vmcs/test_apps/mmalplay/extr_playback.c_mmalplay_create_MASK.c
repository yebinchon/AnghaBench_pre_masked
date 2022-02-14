
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef int connections ;
struct TYPE_21__ {int output_num; } ;
struct TYPE_20__ {char const* uri; unsigned int num; unsigned int connection_num; TYPE_15__* connection; int reader_audio; int reader_video; TYPE_2__ options; int event; } ;
struct TYPE_19__ {int flags; int in; int out; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_COMPONENT_T ;
typedef TYPE_1__ MMALPLAY_T ;
typedef TYPE_2__ MMALPLAY_OPTIONS_T ;
typedef TYPE_1__ MMALPLAY_CONNECTIONS_T ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_15__) ;
 int * FUNC_7 (TYPE_1__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int *,char*,int) ;

MMALPLAY_T *FUNC_14(const char *VAR_6, MMALPLAY_OPTIONS_T *VAR_7, MMAL_STATUS_T *VAR_8)
{
   MMAL_STATUS_T VAR_9 = VAR_4, VAR_10, VAR_11, VAR_12;
   MMALPLAY_T *VAR_13;
   MMAL_COMPONENT_T *VAR_14;
   MMALPLAY_CONNECTIONS_T VAR_15;
   unsigned int VAR_16;

   FUNC_0("%s", VAR_6);

   if (VAR_8) *VAR_8 = VAR_2;


   VAR_13 = FUNC_4(sizeof(MMALPLAY_T));
   if (!VAR_13)
      return ((void*)0);
   FUNC_5(VAR_13, 0, sizeof(*VAR_13));
   FUNC_5(&VAR_15, 0, sizeof(VAR_15));
   if (FUNC_13(&VAR_13->event, "MMALTest", 1) != VAR_5)
   {
      FUNC_3(VAR_13);
      return ((void*)0);
   }

   VAR_13->uri = VAR_6;
   if (VAR_7)
      VAR_13->options = *VAR_7;

   VAR_13->options.output_num = FUNC_1(VAR_13->options.output_num, 1);
   VAR_13->options.output_num = FUNC_2(VAR_13->options.output_num, VAR_0);
   VAR_15.num = 0;


   VAR_14 = FUNC_7(VAR_13, VAR_1, &VAR_9);
   if (!VAR_14)
      goto error;

   VAR_11 = FUNC_12(VAR_13, VAR_13->reader_video, &VAR_15);
   VAR_10 = FUNC_10(VAR_13, VAR_13->reader_audio, &VAR_15);
   VAR_12 = FUNC_11(VAR_13, &VAR_15);
   if (VAR_11 != VAR_4 && VAR_10 != VAR_4 && VAR_12 != VAR_4)
   {
      VAR_9 = VAR_11;
      goto error;
   }


   for (VAR_16 = 0; VAR_16 < VAR_15.num; VAR_16++)
   {
      VAR_9 = FUNC_8(VAR_13, VAR_15.connection[VAR_16].out, VAR_15.connection[VAR_16].in,
            VAR_15.connection[VAR_16].flags);
      if (VAR_9 != VAR_4)
         goto error;
   }


   for (VAR_16 = 0; VAR_16 < VAR_13->connection_num; VAR_16++)
   {
      VAR_9 = FUNC_6(VAR_13->connection[VAR_16]);
      if (VAR_9 != VAR_4)
         goto error;
   }

   if (VAR_8) *VAR_8 = VAR_4;
   return VAR_13;

 error:
   FUNC_9(VAR_13);
   if (VAR_9 == VAR_4) VAR_9 = VAR_3;
   if (VAR_8) *VAR_8 = VAR_9;
   return ((void*)0);
}
