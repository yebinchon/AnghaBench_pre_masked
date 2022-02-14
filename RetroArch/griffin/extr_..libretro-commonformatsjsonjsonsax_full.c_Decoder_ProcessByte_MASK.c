
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int byte ;
struct TYPE_4__ {int state; int bits; } ;
typedef int Encoding ;
typedef int DecoderOutput ;
typedef TYPE_1__* Decoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;






 int FUNC_5 (int ,int,int) ;

 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static DecoderOutput FUNC_15(Decoder VAR_8, Encoding VAR_9, byte VAR_10)
{
   DecoderOutput VAR_11 = FUNC_5(VAR_7, 0, 0);
   switch (VAR_9)
   {
      case 128:



         switch (VAR_8->state)
         {
            case 133:
               if (FUNC_14(VAR_10))
               {
                  VAR_11 = FUNC_5(VAR_4, 1, VAR_10);
               }
               else if (FUNC_11(VAR_10))
               {


                  VAR_8->bits = (uint32_t)FUNC_2(VAR_10) << 6;
                  if (VAR_8->bits < VAR_0)
                  {
                     VAR_11 = FUNC_5(VAR_6, 1, 0);
                  }
                  else
                  {
                     VAR_8->state = 139;
                     goto noreset;
                  }
               }
               else if (FUNC_12(VAR_10))
               {
                  VAR_8->bits = (uint32_t)FUNC_1(VAR_10) << 12;
                  VAR_8->state = 138;
                  goto noreset;
               }
               else if (FUNC_13(VAR_10))
               {


                  VAR_8->bits = (uint32_t)FUNC_0(VAR_10) << 18;
                  if (VAR_8->bits > VAR_3)
                  {
                     VAR_11 = FUNC_5(VAR_6, 1, 0);
                  }
                  else
                  {
                     VAR_8->state = 137;
                     goto noreset;
                  }
               }
               else
               {


                  VAR_11 = FUNC_5(VAR_6, 1, 0);
               }
               break;

            case 139:
               if (FUNC_10(VAR_10))
               {
                  VAR_11 = FUNC_5(VAR_4, 2, VAR_8->bits | FUNC_3(VAR_10));
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 1, 0);

               }
               break;

            case 138:
               if (FUNC_10(VAR_10))
               {


                  VAR_8->bits |= (uint32_t)FUNC_3(VAR_10) << 6;
                  if ((VAR_8->bits < VAR_1) || FUNC_8(VAR_8->bits))
                  {
                     VAR_11 = FUNC_5(VAR_5, 1, 0);
                  }
                  else
                  {
                     VAR_8->state = 136;
                     goto noreset;
                  }
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 1, 0);
               }
               break;

            case 136:
               if (FUNC_10(VAR_10))
               {
                  VAR_11 = FUNC_5(VAR_4, 3, VAR_8->bits | FUNC_3(VAR_10));
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 2, 0);
               }
               break;

            case 137:
               if (FUNC_10(VAR_10))
               {


                  VAR_8->bits |= (uint32_t)FUNC_3(VAR_10) << 12;
                  if ((VAR_8->bits < VAR_2) || (VAR_8->bits > VAR_3))
                  {
                     VAR_11 = FUNC_5(VAR_5, 1, 0);
                  }
                  else
                  {
                     VAR_8->state = 135;
                     goto noreset;
                  }
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 1, 0);
               }
               break;

            case 135:
               if (FUNC_10(VAR_10))
               {
                  VAR_8->bits |= (uint32_t)FUNC_3(VAR_10) << 6;
                  VAR_8->state = 134;
                  goto noreset;
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 2, 0);
               }
               break;

            case 134:
               if (FUNC_10(VAR_10))
               {
                  VAR_11 = FUNC_5(VAR_4, 4, VAR_8->bits | FUNC_3(VAR_10));
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_5, 3, 0);
               }
               break;
         }
         break;

      case 131:






         switch (VAR_8->state)
         {
            case 133:
               VAR_8->bits = VAR_10;
               VAR_8->state = 139;
               goto noreset;

            case 139:
               VAR_8->bits |= (uint32_t)VAR_10 << 8;
               if (FUNC_9(VAR_8->bits))
               {

                  VAR_11 = FUNC_5(VAR_6, 2, 0);
               }
               else if (FUNC_7(VAR_8->bits))
               {

                  VAR_8->bits <<= 16;
                  VAR_8->state = 135;
                  goto noreset;
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_4, 2, VAR_8->bits);
               }
               break;

            case 135:
               VAR_8->bits |= VAR_10;
               VAR_8->state = 134;
               goto noreset;

            case 134:
               VAR_8->bits |= (uint32_t)VAR_10 << 8;
               if (!FUNC_9(VAR_8->bits & 0xFFFF))
               {



                  VAR_8->bits &= 0xFF;
                  VAR_8->state = 139;
                  VAR_11 = FUNC_5(VAR_5, 2, 0);
                  goto noreset;
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_4, 4, FUNC_4(VAR_8->bits));
               }
               break;
         }
         break;

      case 132:






         switch (VAR_8->state)
         {
            case 133:
               VAR_8->bits = (uint32_t)VAR_10 << 8;
               VAR_8->state = 139;
               goto noreset;

            case 139:
               VAR_8->bits |= VAR_10;
               if (FUNC_9(VAR_8->bits))
               {

                  VAR_11 = FUNC_5(VAR_6, 2, 0);
               }
               else if (FUNC_7(VAR_8->bits))
               {

                  VAR_8->bits <<= 16;
                  VAR_8->state = 135;
                  goto noreset;
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_4, 2, VAR_8->bits);
               }
               break;

            case 135:
               VAR_8->bits |= (uint32_t)VAR_10 << 8;
               VAR_8->state = 134;
               goto noreset;

            case 134:
               VAR_8->bits |= VAR_10;
               if (!FUNC_9(VAR_8->bits & 0xFFFF))
               {



                  VAR_8->bits &= 0xFF00;
                  VAR_8->state = 139;
                  VAR_11 = FUNC_5(VAR_5, 2, 0);
                  goto noreset;
               }
               else
               {
                  VAR_11 = FUNC_5(VAR_4, 4, FUNC_4(VAR_8->bits));
               }
               break;
         }
         break;

      case 129:


         switch (VAR_8->state)
         {
            case 133:
               VAR_8->state = 137;
               VAR_8->bits = (uint32_t)VAR_10;
               goto noreset;

            case 137:
               VAR_8->state = 135;
               VAR_8->bits |= (uint32_t)VAR_10 << 8;
               goto noreset;

            case 135:
               VAR_8->state = 134;
               VAR_8->bits |= (uint32_t)VAR_10 << 16;
               goto noreset;

            case 134:
               VAR_8->bits |= (uint32_t)VAR_10 << 24;
               VAR_11 = (FUNC_8(VAR_8->bits) || (VAR_8->bits > VAR_3))
                  ? FUNC_5(VAR_6, 4, 0)
                  : FUNC_5(VAR_4, 4, VAR_8->bits);
               break;
         }
         break;

      case 130:


         switch (VAR_8->state)
         {
            case 133:
               VAR_8->state = 137;
               VAR_8->bits = (uint32_t)VAR_10 << 24;
               goto noreset;

            case 137:
               VAR_8->state = 135;
               VAR_8->bits |= (uint32_t)VAR_10 << 16;
               goto noreset;

            case 135:
               VAR_8->state = 134;
               VAR_8->bits |= (uint32_t)VAR_10 << 8;
               goto noreset;

            case 134:
               VAR_8->bits |= VAR_10;
               VAR_11 = (FUNC_8(VAR_8->bits) || (VAR_8->bits > VAR_3))
                  ? FUNC_5(VAR_6, 4, 0)
                  : FUNC_5(VAR_4, 4, VAR_8->bits);
               break;
         }
         break;
   }


   FUNC_6(VAR_8);

noreset:
   return VAR_11;
}
