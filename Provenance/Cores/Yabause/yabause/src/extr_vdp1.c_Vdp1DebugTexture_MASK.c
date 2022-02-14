
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CMDCTRL; int CMDSIZE; int CMDPMOD; int CMDCOLR; int CMDSRCA; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int CRAOFB; } ;


 int FUNC_0 (int,int,int*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int*,int**,int,int,int,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_8 (int) ;

u32 *FUNC_9(u32 VAR_2, int *VAR_3, int *VAR_4)
{
   u16 VAR_5;
   vdp1cmd_struct VAR_6;
   u32 VAR_7;
   u32 *VAR_8;
   u32 VAR_9;
   u32 VAR_10;
   u8 VAR_11;
   u32 VAR_12;
   u32 *VAR_13;
   int VAR_14=0;
   int VAR_15=0;
   int VAR_16;

   if ((VAR_7 = FUNC_6(VAR_2)) == 0xFFFFFFFF)
      return ((void*)0);

   VAR_5 = FUNC_5(VAR_0, VAR_7);

   if (VAR_5 & 0x8000)

      return ((void*)0);

   if (VAR_5 & 0x4000)

      return ((void*)0);

   FUNC_7(&VAR_6, VAR_7, VAR_0);

   switch (VAR_6.CMDCTRL & 0x000F)
   {
      case 0:
      case 1:
      case 2:
      case 3:
         VAR_3[0] = (VAR_6.CMDSIZE & 0x3F00) >> 5;
         VAR_4[0] = VAR_6.CMDSIZE & 0xFF;

         if ((VAR_8 = (u32 *)FUNC_8(sizeof(u32) * VAR_3[0] * VAR_4[0])) == ((void*)0))
            return ((void*)0);

         if (!(VAR_6.CMDPMOD & 0x80))
         {
            VAR_14 = 1;
            VAR_15 = 0;
         }
         else
            VAR_14 = 0;
         break;
      case 4:
      case 5:
      case 6:
      case 7:

         VAR_3[0] = 1;
         VAR_4[0] = 1;
         if ((VAR_8 = (u32 *)FUNC_8(sizeof(u32))) == ((void*)0))
            return ((void*)0);

         if (VAR_6.CMDCOLR & 0x8000)
            VAR_8[0] = FUNC_3(0xFF, VAR_6.CMDCOLR);
         else
            VAR_8[0] = FUNC_1(VAR_6.CMDCOLR);

         return VAR_8;
      case 8:
      case 9:
      case 10:
      case 11:
         return ((void*)0);
      default:
         return ((void*)0);
   }

   VAR_9 = VAR_6.CMDSRCA * 8;
   VAR_11 = ((VAR_6.CMDPMOD & 0x40) != 0);
   VAR_12 = 0xFF;
   VAR_13 = VAR_8;

   switch((VAR_6.CMDPMOD >> 3) & 0x7)
   {
      case 0:
      {

         u32 VAR_17 = VAR_6.CMDCOLR;
         u32 VAR_18 = (VAR_1->CRAOFB & 0x70) << 4;
         u16 VAR_19;

         for(VAR_19 = 0;VAR_19 < VAR_4[0];VAR_19++)
         {
            u16 VAR_20;
            VAR_20 = 0;
            while(VAR_20 < VAR_3[0])
            {
               VAR_10 = FUNC_4(VAR_0, VAR_9 & 0x7FFFF);


               if (VAR_14 && (VAR_16 = FUNC_0(VAR_10 >> 4, 0xF, &VAR_15)) > 0)
               {
                  if (FUNC_2(VAR_16, &VAR_9, &VAR_13, VAR_3[0], VAR_20, 0, 4))
                     break;
               }
               else
               {
                  if (((VAR_10 >> 4) == 0) && !VAR_11) *VAR_13++ = 0;
                  else *VAR_13++ = FUNC_1(((VAR_10 >> 4) | VAR_17) + VAR_18);
               }

               VAR_20 += 1;


               if (VAR_14 && (VAR_16 = FUNC_0(VAR_10 & 0xF, 0xF, &VAR_15)) > 0)
               {
                  if (FUNC_2(VAR_16, &VAR_9, &VAR_13, VAR_3[0], VAR_20, 1, 4))
                     break;
               }
               else
               {
                  if (((VAR_10 & 0xF) == 0) && !VAR_11) *VAR_13++ = 0;
                  else *VAR_13++ = FUNC_1(((VAR_10 & 0xF) | VAR_17) + VAR_18);
               }

               VAR_20 += 1;
               VAR_9 += 1;
            }
         }
         break;
      }
      case 1:
      {

         u32 VAR_21;
         u32 VAR_22 = VAR_6.CMDCOLR * 8;
         u16 VAR_23;

         for(VAR_23 = 0;VAR_23 < VAR_4[0];VAR_23++)
         {
            u16 VAR_24;
            VAR_24 = 0;
            while(VAR_24 < VAR_3[0])
            {
               VAR_10 = FUNC_4(VAR_0, VAR_9 & 0x7FFFF);

               if (VAR_14 && (VAR_16 = FUNC_0(VAR_10 >> 4, 0xF, &VAR_15)) > 0)
               {
                  if (FUNC_2(VAR_16, &VAR_9, &VAR_13, VAR_3[0], VAR_24, 0, 4))
                     break;
               }
               else
               {
                  if (((VAR_10 >> 4) == 0) && !VAR_11)
                     *VAR_13++ = 0;
                  else
                  {
                     VAR_21 = FUNC_5(VAR_0, ((VAR_10 >> 4) * 2 + VAR_22) & 0x7FFFF);
                     if (VAR_21 & 0x8000)
                        *VAR_13++ = FUNC_3(0xFF, VAR_21);
                     else
                        *VAR_13++ = FUNC_1(VAR_21);
                  }
               }

               VAR_24 += 1;

               if (VAR_14 && (VAR_16 = FUNC_0(VAR_10 & 0xF, 0xF, &VAR_15)) > 0)
               {
                  if (FUNC_2(VAR_16, &VAR_9, &VAR_13, VAR_3[0], VAR_24, 1, 4))
                     break;
               }
               else
               {
                  if (((VAR_10 & 0xF) == 0) && !VAR_11)
                     *VAR_13++ = 0;
                  else
                  {
                     VAR_21 = FUNC_5(VAR_0, ((VAR_10 & 0xF) * 2 + VAR_22) & 0x7FFFF);
                     if (VAR_21 & 0x8000)
                        *VAR_13++ = FUNC_3(0xFF, VAR_21);
                     else
                        *VAR_13++ = FUNC_1(VAR_21);
                  }
               }

               VAR_24 += 1;

               VAR_9 += 1;
            }
         }
         break;
      }
      case 2:
      {

         u32 VAR_25 = VAR_6.CMDCOLR;
         u32 VAR_26 = (VAR_1->CRAOFB & 0x70) << 4;

         u16 VAR_27, VAR_28;

         for(VAR_27 = 0;VAR_27 < VAR_4[0];VAR_27++)
         {
            for(VAR_28 = 0;VAR_28 < VAR_3[0];VAR_28++)
            {
               VAR_10 = FUNC_4(VAR_0, VAR_9 & 0x7FFFF) & 0x3F;
               VAR_9++;

               if ((VAR_10 == 0) && !VAR_11) *VAR_13++ = 0;
               else *VAR_13++ = FUNC_1((VAR_10 | VAR_25) + VAR_26);
            }
         }
         break;
      }
      case 3:
      {

         u32 VAR_29 = VAR_6.CMDCOLR;
         u32 VAR_30 = (VAR_1->CRAOFB & 0x70) << 4;
         u16 VAR_31, VAR_32;

         for(VAR_31 = 0;VAR_31 < VAR_4[0];VAR_31++)
         {
            for(VAR_32 = 0;VAR_32 < VAR_3[0];VAR_32++)
            {
               VAR_10 = FUNC_4(VAR_0, VAR_9 & 0x7FFFF) & 0x7F;
               VAR_9++;

               if ((VAR_10 == 0) && !VAR_11) *VAR_13++ = 0;
               else *VAR_13++ = FUNC_1((VAR_10 | VAR_29) + VAR_30);
            }
         }
         break;
      }
      case 4:
      {

         u32 VAR_33 = VAR_6.CMDCOLR;
         u32 VAR_34 = (VAR_1->CRAOFB & 0x70) << 4;
         u16 VAR_35, VAR_36;

         for(VAR_35 = 0;VAR_35 < VAR_4[0];VAR_35++)
         {
            for(VAR_36 = 0;VAR_36 < VAR_3[0];VAR_36++)
            {
               VAR_10 = FUNC_4(VAR_0, VAR_9 & 0x7FFFF);
               VAR_9++;

               if ((VAR_10 == 0) && !VAR_11) *VAR_13++ = 0;
               else *VAR_13++ = FUNC_1((VAR_10 | VAR_33) + VAR_34);
            }
         }
         break;
      }
      case 5:
      {

         u16 VAR_37, VAR_38;

         for(VAR_37 = 0;VAR_37 < VAR_4[0];VAR_37++)
         {
            for(VAR_38 = 0;VAR_38 < VAR_3[0];VAR_38++)
            {
               VAR_10 = FUNC_5(VAR_0, VAR_9 & 0x7FFFF);

               if (VAR_14 && (VAR_16 = FUNC_0(VAR_10, 0x7FFF, &VAR_15)) > 0)
               {
                  if (FUNC_2(VAR_16, &VAR_9, &VAR_13, VAR_3[0], VAR_38, 0, 16))
                     break;
               }
               else
               {

                  if (!(VAR_10 & 0x8000) && !VAR_11) *VAR_13++ = 0;
                  else *VAR_13++ = FUNC_3(0xFF, VAR_10);
               }

               VAR_9 += 2;
            }
         }
         break;
      }
      default:
         break;
   }

   return VAR_8;
}
