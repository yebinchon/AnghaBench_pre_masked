
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int WFCint ;
struct TYPE_2__ {scalar_t__ num_of_elements; scalar_t__* element; float dest_width; float dest_height; int src_x; int src_y; int src_width; int src_height; int context; int device; int stop_bouncing; int source; } ;
typedef TYPE_1__ WFC_BOUNCE_DATA_T ;
typedef scalar_t__ WFCElement ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ,int ,int) ;
 int FUNC_10 (int ,scalar_t__,int ,double) ;
 int FUNC_11 (int ,scalar_t__,int ,int ) ;
 int FUNC_12 (int ,scalar_t__,int ,int,int*) ;

void *FUNC_13(void *VAR_19)

{
   WFC_BOUNCE_DATA_T *VAR_20 = (WFC_BOUNCE_DATA_T *) VAR_19;

   uint32_t VAR_21;
   int32_t VAR_22[VAR_1], VAR_23[VAR_1];
   WFCint VAR_24[VAR_1][VAR_13];
   WFCint VAR_25[VAR_13];
   WFCElement VAR_26[VAR_1];

   uint32_t VAR_27 = VAR_1;
   WFCElement *VAR_28 = VAR_26;


   int32_t VAR_29;
   int32_t VAR_30;
   int32_t VAR_31, VAR_32;

   int32_t VAR_33, VAR_34;

   bool VAR_35 = (VAR_20->num_of_elements == 0);
   if(!VAR_35)
   {
      FUNC_0(VAR_20->num_of_elements <= VAR_1);
      FUNC_0(VAR_20->element != ((void*)0));
      VAR_27 = VAR_20->num_of_elements;
      VAR_28 = VAR_20->element;
   }


   VAR_29 = FUNC_6(VAR_20->device,
      VAR_20->context, VAR_4);
   VAR_30 = FUNC_6(VAR_20->device,
      VAR_20->context, VAR_3);


   FUNC_9(VAR_20->device,
      VAR_20->context, VAR_2, 0x0000FFFF);

   float VAR_36 = 0.4;
   if(VAR_27 == 1)
      {VAR_36 = 0.75;}

   VAR_31 = VAR_20->dest_width * VAR_36;
   VAR_32 = VAR_20->dest_height * VAR_36;


   VAR_25[VAR_15] = VAR_20->src_x;
   VAR_25[VAR_16] = VAR_20->src_y;
   VAR_25[VAR_14] = VAR_20->src_width;
   VAR_25[VAR_12] = VAR_20->src_height;

   for(VAR_21 = 0; VAR_21 < VAR_27; VAR_21++)
   {
      if(VAR_35)
      {

         VAR_28[VAR_21] = FUNC_4(VAR_20->device,
            VAR_20->context, VAR_0);
         FUNC_0(VAR_28[VAR_21] != VAR_11);

         FUNC_8(VAR_20->device, VAR_28[VAR_21], VAR_11);
         if(FUNC_2(FUNC_7(VAR_20->device) == VAR_10)) {};
      }
      else
      {

         VAR_28[VAR_21] = VAR_20->element[VAR_21];
      }

      FUNC_12(VAR_20->device, VAR_28[VAR_21],
         VAR_8, VAR_13, VAR_25);


      FUNC_11(VAR_20->device, VAR_28[VAR_21],
         VAR_7, VAR_20->source);

      if(VAR_27 > 1)
      {
         FUNC_11(VAR_20->device, VAR_28[VAR_21],
            VAR_9, VAR_17);
         FUNC_10(VAR_20->device, VAR_28[VAR_21],
            VAR_6, 0.75);
      }


      VAR_24[VAR_21][VAR_15] = VAR_21 * 100;
      VAR_24[VAR_21][VAR_16] = VAR_21 * 10;
      VAR_24[VAR_21][VAR_14] = VAR_31;
      VAR_24[VAR_21][VAR_12] = VAR_32;
      FUNC_12(VAR_20->device, VAR_28[VAR_21],
         VAR_5, VAR_13, VAR_24[VAR_21]);

      VAR_22[VAR_21] = (VAR_21 + 1) * 2;
      VAR_23[VAR_21] = (VAR_21 + 1) * 2;
   }

   while(!VAR_20->stop_bouncing)
   {
      for(VAR_21 = 0; VAR_21 < VAR_27; VAR_21++)
      {

         VAR_33 = VAR_24[VAR_21][VAR_15];
         VAR_34 = VAR_24[VAR_21][VAR_16];

         VAR_33 += VAR_22[VAR_21];
         if(VAR_33 + VAR_31 >= VAR_29)
            {VAR_33 = VAR_29 - VAR_31 - 1; VAR_22[VAR_21] *= -1;}
         else if(VAR_33 < 0)
            {VAR_33 = 0; VAR_22[VAR_21] *= -1;}

         VAR_34 += VAR_23[VAR_21];
         if(VAR_34 + VAR_32 >= VAR_30)
            {VAR_34 = VAR_30 - VAR_32 - 1; VAR_23[VAR_21] *= -1;}
         else if(VAR_34 < 0)
            {VAR_34 = 0; VAR_23[VAR_21] *= -1;}

         VAR_24[VAR_21][VAR_15] = VAR_33;
         VAR_24[VAR_21][VAR_16] = VAR_34;


         FUNC_12(VAR_20->device, VAR_28[VAR_21],
            VAR_5, VAR_13, VAR_24[VAR_21]);
      }

      FUNC_3(VAR_20->device, VAR_20->context, VAR_18);
      FUNC_1(30);
   }


   if(VAR_35)
   {
      for(VAR_21 = 0; VAR_21 < VAR_27; VAR_21++)
      {
         FUNC_5(VAR_20->device, VAR_28[VAR_21]);
      }
   }


   FUNC_9(VAR_20->device,
      VAR_20->context, VAR_2, 0xFF0000FF);

   FUNC_3(VAR_20->device, VAR_20->context, VAR_18);

   return ((void*)0);
}
