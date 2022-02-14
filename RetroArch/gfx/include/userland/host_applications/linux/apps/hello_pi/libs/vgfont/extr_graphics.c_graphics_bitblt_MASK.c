
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef double VGfloat ;
typedef scalar_t__ VGPaint ;
typedef scalar_t__ VGImage ;
struct TYPE_6__ {scalar_t__ pixmap; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ const width; scalar_t__ const height; double alpha; TYPE_1__ u; } ;
typedef int GX_CLIENT_STATE_T ;
typedef TYPE_2__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__ const,scalar_t__ const,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (double*) ;
 int FUNC_11 () ;
 int FUNC_12 (double*) ;
 int FUNC_13 (double,double) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (scalar_t__,int ,int,double*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (double,double) ;

int32_t FUNC_18( const GRAPHICS_RESOURCE_HANDLE VAR_11,
                         const uint32_t VAR_12,
                         const uint32_t VAR_13,
                         const uint32_t VAR_14,
                         const uint32_t VAR_15,
                         GRAPHICS_RESOURCE_HANDLE VAR_16,
                         const uint32_t VAR_17,
                         const uint32_t VAR_18 )
{
   int VAR_19 = -1;
   VGfloat VAR_20[9];
   uint32_t VAR_21, VAR_22;
   VGPaint VAR_23 = VAR_6;
   GX_CLIENT_STATE_T VAR_24;
   int VAR_25 = 0;
   VGImage VAR_26 = VAR_6;

   FUNC_2(&VAR_24, VAR_16);

   if (VAR_11->type != VAR_2)
   {
      FUNC_3(0);
      goto finish;
   }


   VAR_21 = VAR_14 == VAR_1 ? VAR_11->width : VAR_14;
   VAR_22 = VAR_15 == VAR_0 ? VAR_11->height : VAR_15;

   if (VAR_12==0 && VAR_13==0 &&
       VAR_21 == VAR_11->width &&
       VAR_22 == VAR_11->height)
   {
      VAR_26 = VAR_11->u.pixmap;
   }
   else
   {
      VAR_25 = 1;
      VAR_26 = FUNC_4(VAR_11->u.pixmap, VAR_12, VAR_13, VAR_21, VAR_22);
      if (VAR_26 == VAR_6)
      {
         FUNC_3(0);
         goto finish;
      }
   }

   FUNC_3(FUNC_9()==0);

   FUNC_16(VAR_8, VAR_7);
   FUNC_10(VAR_20);
   FUNC_11();
   FUNC_17((VGfloat)VAR_17, (VGfloat)(VAR_16->height-VAR_18));
   FUNC_13(1.0, -1.0);


   if (VAR_11->alpha != 1.0)
   {
      VGfloat VAR_27[4] = {1.0,1.0,1.0,VAR_11->alpha};
      VAR_23 = FUNC_5();

      FUNC_15(VAR_23, VAR_9, 4, VAR_27);
      FUNC_16(VAR_5, VAR_3);
      FUNC_14(VAR_23, VAR_10 | VAR_4);
   }
   FUNC_3(FUNC_9()==0);

   FUNC_8(VAR_26);
   FUNC_3(FUNC_9()==0);
   FUNC_12(VAR_20);

   int VAR_28 = FUNC_9();

   if (VAR_28)
   {
      FUNC_0("vg error %x blitting area", VAR_28);
      FUNC_3(0);
      VAR_19 = -1;
   }
   else
   {
      VAR_19 = 0;
   }
finish:
   if (VAR_23 != VAR_6)
      FUNC_7(VAR_23);

   if (VAR_25)
      FUNC_6(VAR_26);

   FUNC_1(&VAR_24);
   return VAR_19;
}
