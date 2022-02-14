
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int classic; } ;
struct TYPE_4__ {TYPE_1__ cc; int type; } ;
struct connect_wii_wiimote_t {int handshake_state; int unid; TYPE_2__ exp; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct connect_wii_wiimote_t*,int ) ;
 int FUNC_1 (struct connect_wii_wiimote_t*,int ) ;
 int FUNC_2 (struct connect_wii_wiimote_t*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct connect_wii_wiimote_t*,int *,int*,int ) ;
 int FUNC_7 (struct connect_wii_wiimote_t*,int ) ;
 int FUNC_8 (struct connect_wii_wiimote_t*,int ,int) ;
 int FUNC_9 (struct connect_wii_wiimote_t*,int ) ;
 int FUNC_10 (struct connect_wii_wiimote_t*) ;
 int FUNC_11 (struct connect_wii_wiimote_t*,int,int*,int) ;

__attribute__((used)) static int FUNC_12(struct connect_wii_wiimote_t* VAR_17,
      uint8_t VAR_18, uint8_t* VAR_19, uint16_t VAR_20)
{
   if (!VAR_17)
      return 0;

   do
   {
      switch (VAR_17->handshake_state)
      {
         case 0:



            FUNC_1(VAR_17, VAR_8);
            FUNC_9(VAR_17, VAR_6);



            FUNC_10(VAR_17);

            VAR_17->handshake_state=1;
            return 0;
         case 1:
            {


               int VAR_21 = 0;

               if(VAR_18 != VAR_15)
                  return 0;



               if ((VAR_19[2] & VAR_10) ==
                     VAR_10)
                  VAR_21 = 1;






               if (VAR_21 && !FUNC_2(VAR_17, VAR_7))
               {
                  uint8_t VAR_22 = 0;



                  FUNC_1(VAR_17, VAR_7);



                  if(FUNC_2(VAR_17,VAR_9))
                  {


                     FUNC_0(VAR_17, VAR_9);


                     FUNC_1(VAR_17, VAR_8);
                  }
                  VAR_22 = 0x55;
                  FUNC_11(VAR_17, 0x04A400F0, &VAR_22, 1);
                  FUNC_4(100);
                  VAR_22 = 0x00;
                  FUNC_11(VAR_17, 0x04A400FB, &VAR_22, 1);


                  FUNC_4(100);
                  FUNC_8(VAR_17, VAR_11 + 220, 4);




                  VAR_17->handshake_state = 4;
                  return 0;
               }
               else if (!VAR_21 && FUNC_2(VAR_17, VAR_7))
               {

                  FUNC_0(VAR_17, VAR_7);
                  VAR_17->exp.type = VAR_1;

                  if(FUNC_2(VAR_17,VAR_9))
                  {



                     FUNC_0(VAR_17, VAR_9);


                     FUNC_1(VAR_17, VAR_8);
                  }
               }

               if(!VAR_21 && FUNC_2(VAR_17,VAR_8))
               {
                  VAR_17->handshake_state = 2;
                  continue;
               }

               return 0;
            }
         case 2:




            FUNC_7(VAR_17,VAR_13);
            VAR_17->handshake_state = 6;
            continue;
         case 3:




            FUNC_7(VAR_17,VAR_14);
            VAR_17->handshake_state = 6;
            continue;
         case 4:
            {
               uint32_t VAR_23;
               int32_t *VAR_24 = (int32_t*)VAR_19;

               if (VAR_18 != VAR_16)
                  return 0;

               VAR_23 = FUNC_5(*VAR_24);

               switch (VAR_23)
               {
                  case 128:
                     FUNC_4(100);

                     FUNC_8(VAR_17, VAR_11, 16);
                     VAR_17->handshake_state = 5;
                     break;
                  default:
                     VAR_17->handshake_state = 2;



                     continue;
               }
            }
            return 0;
         case 5:
            if(VAR_18 != VAR_16)
               return 0;

            FUNC_6(VAR_17, &VAR_17->exp.cc.classic, VAR_19,VAR_20);
            VAR_17->handshake_state = 3;
            continue;
         case 6:
            FUNC_0(VAR_17, VAR_8);
            FUNC_1(VAR_17, VAR_9);
            VAR_17->handshake_state = 1;

            switch (VAR_17->unid)
            {
               case 0:
                  FUNC_9(VAR_17, VAR_2);
                  break;
               case 1:
                  FUNC_9(VAR_17, VAR_3);
                  break;
               case 2:
                  FUNC_9(VAR_17, VAR_4);
                  break;
               case 3:
                  FUNC_9(VAR_17, VAR_5);
                  break;
            }
            return 1;
         default:
            break;
      }
   }while(1);
}
