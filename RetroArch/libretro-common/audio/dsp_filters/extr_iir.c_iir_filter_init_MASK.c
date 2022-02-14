
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iir_data {float b0; float b1; float b2; float a0; float a1; float a2; } ;
typedef enum IIRFilter { ____Placeholder_IIRFilter } IIRFilter ;
 double VAR_0 ;




 float FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 int FUNC_3 (double const*,int,float*) ;
 int FUNC_4 (double,int) ;
 float FUNC_5 (double) ;
 double FUNC_6 (double) ;
 double FUNC_7 (double) ;

__attribute__((used)) static void FUNC_8(struct iir_data *VAR_1,
      float VAR_2, float VAR_3, float VAR_4, float VAR_5, enum IIRFilter VAR_6)
{
 double VAR_7 = 2.0 * VAR_0 * VAR_3 / VAR_2;
   double VAR_8 = FUNC_0(VAR_7);
   double VAR_9 = FUNC_5(VAR_7);
   double VAR_10 = VAR_9 / (2.0 * VAR_4);
   double VAR_11 = FUNC_1(FUNC_2(10.0) * VAR_5 / 40.0);
   double VAR_12 = FUNC_7(VAR_11 + VAR_11);

   float VAR_13 = 0.0, VAR_14 = 0.0, VAR_15 = 0.0, VAR_16 = 0.0, VAR_17 = 0.0, VAR_18 = 0.0;


   switch (VAR_6)
   {
      case 133:
         VAR_13 = (1.0 - VAR_8) / 2.0;
         VAR_14 = 1.0 - VAR_8 ;
         VAR_15 = (1.0 - VAR_8) / 2.0;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 135:
         VAR_13 = (1.0 + VAR_8) / 2.0;
         VAR_14 = -(1.0 + VAR_8);
         VAR_15 = (1.0 + VAR_8) / 2.0;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 139:
         VAR_13 = 1.0 - VAR_10;
         VAR_14 = -2.0 * VAR_8;
         VAR_15 = 1.0 + VAR_10;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 136:
         VAR_13 = VAR_10;
         VAR_14 = 0.0;
         VAR_15 = -VAR_10;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 137:
         VAR_13 = VAR_9 / 2.0;
         VAR_14 = 0.0;
         VAR_15 = -VAR_9 / 2.0;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 131:
         VAR_13 = 1.0;
         VAR_14 = -2.0 * VAR_8;
         VAR_15 = 1.0;
         VAR_16 = 1.0 + VAR_10;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10;
         break;
      case 128:
      {
         double VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
         float VAR_25[3], VAR_26[3];

         if ((int)VAR_2 == 44100)
         {
            static const double VAR_27[] = {-0.2014898, 0.9233820};
            static const double VAR_28[] = {0.7083149, 0.9924091};
            FUNC_3(VAR_27, 2, VAR_25);
            FUNC_3(VAR_28, 2, VAR_26);
         }
         else if ((int)VAR_2 == 48000)
         {
            static const double VAR_29[] = {-0.1766069, 0.9321590};
            static const double VAR_30[] = {0.7396325, 0.9931330};
            FUNC_3(VAR_29, 2, VAR_25);
            FUNC_3(VAR_30, 2, VAR_26);
         }
         else if ((int)VAR_2 == 88200)
         {
            static const double VAR_31[] = {-0.1168735, 0.9648312};
            static const double VAR_32[] = {0.8590646, 0.9964002};
            FUNC_3(VAR_31, 2, VAR_25);
            FUNC_3(VAR_32, 2, VAR_26);
         }
         else if ((int)VAR_2 == 96000)
         {
            static const double VAR_33[] = {-0.1141486, 0.9676817};
            static const double VAR_34[] = {0.8699137, 0.9966946};
            FUNC_3(VAR_33, 2, VAR_25);
            FUNC_3(VAR_34, 2, VAR_26);
         }

         VAR_13 = VAR_25[0];
         VAR_14 = VAR_25[1];
         VAR_15 = VAR_25[2];
         VAR_16 = VAR_26[0];
         VAR_17 = VAR_26[1];
         VAR_18 = VAR_26[2];


         VAR_19 = 2.0 * VAR_0 * 1000.0 / VAR_2;
         VAR_20 = VAR_13 + VAR_14 * FUNC_0(-VAR_19) + VAR_15 * FUNC_0(-2.0 * VAR_19);
         VAR_21 = VAR_16 + VAR_17 * FUNC_0(-VAR_19) + VAR_18 * FUNC_0(-2.0 * VAR_19);
         VAR_22 = VAR_14 * FUNC_5(-VAR_19) + VAR_15 * FUNC_5(-2.0 * VAR_19);
         VAR_23 = VAR_17 * FUNC_5(-VAR_19) + VAR_18 * FUNC_5(-2.0 * VAR_19);
         VAR_24 = 1.0 / FUNC_7((FUNC_6(VAR_20) + FUNC_6(VAR_22)) / (FUNC_6(VAR_21) + FUNC_6(VAR_23)));
         VAR_13 *= VAR_24; VAR_14 *= VAR_24; VAR_15 *= VAR_24;
         break;
      }
      case 130:
         VAR_13 = 1.0 + VAR_10 * VAR_11;
         VAR_14 = -2.0 * VAR_8;
         VAR_15 = 1.0 - VAR_10 * VAR_11;
         VAR_16 = 1.0 + VAR_10 / VAR_11;
         VAR_17 = -2.0 * VAR_8;
         VAR_18 = 1.0 - VAR_10 / VAR_11;
         break;
      case 138:
         VAR_12 = FUNC_7((VAR_11 * VAR_11 + 1) / 1.0 - (FUNC_4((VAR_11 - 1), 2)));
         VAR_13 = VAR_11 * ((VAR_11 + 1) - (VAR_11 - 1) * VAR_8 + VAR_12 * VAR_9);
         VAR_14 = 2 * VAR_11 * ((VAR_11 - 1) - (VAR_11 + 1) * VAR_8);
         VAR_15 = VAR_11 * ((VAR_11 + 1) - (VAR_11 - 1) * VAR_8 - VAR_12 * VAR_9);
         VAR_16 = ((VAR_11 + 1) + (VAR_11 - 1) * VAR_8 + VAR_12 * VAR_9);
         VAR_17 = -2 * ((VAR_11 - 1) + (VAR_11 + 1) * VAR_8);
         VAR_18 = (VAR_11 + 1) + (VAR_11 - 1) * VAR_8 - VAR_12 * VAR_9;
         break;
      case 132:
         VAR_13 = VAR_11 * ((VAR_11 + 1) - (VAR_11 - 1) * VAR_8 + VAR_12 * VAR_9);
         VAR_14 = 2 * VAR_11 * ((VAR_11 - 1) - (VAR_11 + 1) * VAR_8);
         VAR_15 = VAR_11 * ((VAR_11 + 1) - (VAR_11 - 1) * VAR_8 - VAR_12 * VAR_9);
         VAR_16 = (VAR_11 + 1) + (VAR_11 - 1) * VAR_8 + VAR_12 * VAR_9;
         VAR_17 = -2 * ((VAR_11 - 1) + (VAR_11 + 1) * VAR_8);
         VAR_18 = (VAR_11 + 1) + (VAR_11 - 1) * VAR_8 - VAR_12 * VAR_9;
         break;
      case 129:
         VAR_7 = 2.0 * VAR_0 * 5283.0 / VAR_2;
         VAR_8 = FUNC_0(VAR_7);
         VAR_9 = FUNC_5(VAR_7);
         VAR_10 = VAR_9 / (2.0 * 0.4845);
         VAR_11 = FUNC_1(FUNC_2(10.0) * -9.477 / 40.0);
         VAR_12 = FUNC_7(VAR_11 + VAR_11);
         (void)VAR_10;
      case 134:
         VAR_13 = VAR_11 * ((VAR_11 + 1.0) + (VAR_11 - 1.0) * VAR_8 + VAR_12 * VAR_9);
         VAR_14 = -2.0 * VAR_11 * ((VAR_11 - 1.0) + (VAR_11 + 1.0) * VAR_8);
         VAR_15 = VAR_11 * ((VAR_11 + 1.0) + (VAR_11 - 1.0) * VAR_8 - VAR_12 * VAR_9);
         VAR_16 = (VAR_11 + 1.0) - (VAR_11 - 1.0) * VAR_8 + VAR_12 * VAR_9;
         VAR_17 = 2.0 * ((VAR_11 - 1.0) - (VAR_11 + 1.0) * VAR_8);
         VAR_18 = (VAR_11 + 1.0) - (VAR_11 - 1.0) * VAR_8 - VAR_12 * VAR_9;
         break;
      default:
         break;
   }

   VAR_1->b0 = VAR_13;
   VAR_1->b1 = VAR_14;
   VAR_1->b2 = VAR_15;
   VAR_1->a0 = VAR_16;
   VAR_1->a1 = VAR_17;
   VAR_1->a2 = VAR_18;
}
