
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_39__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_13__ ;


typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VCOS_UNSIGNED ;
struct TYPE_43__ {int hdr; } ;
struct TYPE_47__ {scalar_t__ init_result; char* uri; int seconds_per_change; int change; int init_sem; TYPE_39__ encoder_stats; TYPE_39__ render_stats; int focus_test; int tunneling; int zero_copy; } ;
struct TYPE_46__ {int length; int data; } ;
struct TYPE_45__ {TYPE_2__** output; TYPE_2__** input; } ;
struct TYPE_41__ {int member_1; int member_0; } ;
struct TYPE_44__ {int member_1; int hdr; TYPE_1__ member_0; } ;
struct TYPE_42__ {TYPE_13__* format; } ;
struct TYPE_40__ {scalar_t__ encoding; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_3__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_6__ MMALCAM_BEHAVIOUR_T ;
typedef int FILE ;


 int FUNC_0 (TYPE_39__,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*,int **,int **) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_24 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int,int ,int *) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int *) ;
 TYPE_5__* FUNC_19 (int *) ;
 int FUNC_20 (TYPE_4__*,int ,int,int,char*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_4__*) ;
 int FUNC_25 (TYPE_4__*) ;
 int FUNC_26 (TYPE_4__*) ;
 int FUNC_27 (TYPE_4__*,int ) ;
 int FUNC_28 (char*,int) ;
 scalar_t__ FUNC_29 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_30 (TYPE_2__*,int **,int **) ;
 int VAR_25 ;
 TYPE_4__* FUNC_31 (TYPE_6__*,scalar_t__*) ;
 int * FUNC_32 (char*,TYPE_13__*,scalar_t__*) ;
 int FUNC_33 (int *,TYPE_5__*) ;
 TYPE_4__* FUNC_34 (TYPE_6__*,scalar_t__*) ;
 TYPE_4__* FUNC_35 (TYPE_6__*,scalar_t__*) ;
 int VAR_26 ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int *,char*) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *,int ,int ,int ,int*) ;
 int FUNC_40 () ;
 int FUNC_41 (int *) ;
 int VAR_27 ;

int FUNC_42(volatile int *VAR_28, MMALCAM_BEHAVIOUR_T *VAR_29)
{
   MMAL_STATUS_T VAR_30 = VAR_21;
   MMAL_POOL_T *VAR_31 = 0, *VAR_32 = 0, *VAR_33 = 0;
   MMAL_QUEUE_T *VAR_34 = 0, *VAR_35 = 0, *VAR_36 = 0;
   MMAL_COMPONENT_T *VAR_37 = 0, *VAR_38 = 0, *VAR_39 = 0;
   MMAL_PORT_T *VAR_40 = 0, *VAR_41 = 0, *VAR_42 = 0;
   MMAL_PORT_T *VAR_43 = 0, *VAR_44 = 0, *VAR_45 = 0;
   uint32_t VAR_46, VAR_47, VAR_48;
   int VAR_49 = 0;



   FILE *VAR_50 = ((void*)0);

   if(FUNC_37(&VAR_24, "MMALCam") != VAR_23)
   {
      VAR_29->init_result = VAR_6;
      goto error;
   }

   VAR_27 = VAR_29->zero_copy;
   VAR_26 = VAR_29->tunneling;


   VAR_37 = FUNC_31(VAR_29, &VAR_30);
   if(!VAR_37)
   {
      VAR_29->init_result = VAR_1;
      goto error;
   }
   VAR_40 = VAR_37->output[0];
   VAR_41 = VAR_37->output[1];
   VAR_42 = VAR_37->output[2];


   VAR_39 = FUNC_35(VAR_29, &VAR_30);
   if(!VAR_39)
   {
      VAR_29->init_result = VAR_7;
      goto error;
   }
   VAR_43 = VAR_39->input[0];

   VAR_30 = FUNC_3(VAR_40, VAR_43, &VAR_34, &VAR_31);
   if (VAR_30 != VAR_21)
   {
      VAR_29->init_result = VAR_8;
      goto error;
   }

   if (VAR_29->uri)
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_51 =
            {{VAR_15, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};


      VAR_38 = FUNC_34(VAR_29, &VAR_30);
      if(!VAR_38)
      {
         VAR_29->init_result = VAR_3;
         goto error;
      }
      VAR_44 = VAR_38->input[0];
      VAR_45 = VAR_38->output[0];

      if (VAR_45->format->encoding == VAR_12)
         VAR_41 = VAR_42;

      VAR_30 = FUNC_3(VAR_41, VAR_44, &VAR_35, &VAR_32);
      if (VAR_30 != VAR_21)
      {
         VAR_29->init_result = VAR_4;
         goto error;
      }

      VAR_30 = FUNC_30(VAR_45, &VAR_36, &VAR_33);
      if (VAR_30 != VAR_21)
      {
         VAR_29->init_result = VAR_5;
         goto error;
      }

      VAR_30 = FUNC_16(VAR_41, &VAR_51.hdr);
      if (VAR_30 != VAR_21 && VAR_30 != VAR_13)
      {
         VAR_29->init_result = VAR_2;
         goto error;
      }
      VAR_50 = FUNC_7(VAR_29->uri, "wb");
      if(!VAR_50)
      {

         FUNC_8(VAR_25, "Error opening output file: %s\n", VAR_29->uri);
      }

   }


   VAR_29->init_result = VAR_9;
   FUNC_41(&VAR_29->init_sem);

   VAR_46 = VAR_29->seconds_per_change * 1000;
   VAR_47 = FUNC_40();
   VAR_48 = 1000;

   while(1)
   {
      MMAL_BUFFER_HEADER_T *VAR_52;
      VCOS_UNSIGNED VAR_53;

      FUNC_39(&VAR_24, VAR_10, VAR_22, FUNC_2(2), &VAR_53);
      if(*VAR_28) break;

      if (VAR_29->focus_test != VAR_20)
      {
         if (VAR_53 & VAR_11 ||
               (VAR_48 && (FUNC_40() - VAR_47) >= VAR_48))
         {
            VAR_48 = 0;
            FUNC_27(VAR_37, VAR_29->focus_test);
         }
      }


      VAR_30 = FUNC_6(VAR_40, VAR_31);
      if (VAR_30 != VAR_21)
         break;
      VAR_30 = FUNC_6(VAR_41, VAR_32);
      if (VAR_30 != VAR_21)
         break;
      VAR_30 = FUNC_6(VAR_45, VAR_33);
      if (VAR_30 != VAR_21)
         break;


      VAR_30 = FUNC_29(VAR_43, VAR_34);
      if (VAR_30 != VAR_21)
         break;
      VAR_30 = FUNC_29(VAR_44, VAR_35);
      if (VAR_30 != VAR_21)
         break;


      if (VAR_36)
      {
         VAR_52 = FUNC_19(VAR_36);
         if (VAR_52)
         {
            if (VAR_50



                )
            {
               FUNC_10(VAR_52);



               FUNC_1("Write %d bytes of data from %p", VAR_52->length, VAR_52->data);
               FUNC_9(VAR_52->data, 1, VAR_52->length, VAR_50);

               FUNC_11(VAR_52);
               VAR_49++;
               if (VAR_49 > VAR_0)
               {




                  FUNC_5(VAR_50);

                  VAR_50 = ((void*)0);
                  FUNC_8(VAR_25, "All packets written\n");
               }
            }
            FUNC_12(VAR_52);
         }
      }


      if (VAR_46 != 0)
      {
         if((FUNC_40() - VAR_47) >= VAR_46)
         {
            VAR_47 = FUNC_40();
            switch (VAR_29->change)
            {
               case 132:
                  if (!FUNC_22(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 131:
                  if (!FUNC_25(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 128:
                  if (!FUNC_26(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 134:
                  if (!FUNC_23(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 135:
                  if (!FUNC_21(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 133:
                  if (!FUNC_24(VAR_37))
                     *VAR_28 = 1;
                  break;
               case 136:
                  if (!FUNC_20(VAR_37, VAR_16, -100, 100, "contrast"))
                     *VAR_28 = 1;
                  break;
               case 137:
                  if (!FUNC_20(VAR_37, VAR_14, 0, 100, "brightness"))
                     *VAR_28 = 1;
                  break;
               case 130:
                  if (!FUNC_20(VAR_37, VAR_17, -100, 100, "saturation"))
                     *VAR_28 = 1;
                  break;
               case 129:
                  if (!FUNC_20(VAR_37, VAR_18, -100, 100, "sharpness"))
                     *VAR_28 = 1;
                  break;
               default:
                  FUNC_1("Unexpected change behaviour: %d", VAR_29->change);
                  break;
            }
         }
      }
   }


   FUNC_4(VAR_40);
   FUNC_4(VAR_43);
   FUNC_4(VAR_41);
   FUNC_4(VAR_44);
   FUNC_4(VAR_45);


   FUNC_14(VAR_39);
   if (VAR_38)
      FUNC_14(VAR_38);
   FUNC_14(VAR_37);

   FUNC_0(VAR_29->render_stats, VAR_19);
   FUNC_15(VAR_43, &VAR_29->render_stats.hdr);
   if (VAR_38)
   {
      FUNC_0(VAR_29->encoder_stats, VAR_19);
      FUNC_15(VAR_45, &VAR_29->encoder_stats.hdr);
   }

 error:

   if(VAR_31)
      FUNC_17(VAR_40, VAR_31);
   if(VAR_32)
      FUNC_17(VAR_41, VAR_32);
   if(VAR_33)
      FUNC_17(VAR_45, VAR_33);

   if(VAR_39)
      FUNC_13(VAR_39);
   if(VAR_38)
      FUNC_13(VAR_38);
   if(VAR_37)
      FUNC_13(VAR_37);

   if(VAR_34)
      FUNC_18(VAR_34);
   if(VAR_35)
      FUNC_18(VAR_35);
   if(VAR_36)
      FUNC_18(VAR_36);





   if(VAR_50)
      FUNC_5(VAR_50);

   FUNC_38(&VAR_24);

   if (VAR_49)
      FUNC_28("Packet count: %d\n", VAR_49);

   if (VAR_29->init_result != VAR_9)
      FUNC_41(&VAR_29->init_sem);

   return (int)VAR_30;
}
