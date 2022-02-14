
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef unsigned int int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_8 ;
 int FUNC_2 (int const*,size_t) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int const*) ;
 unsigned int FUNC_4 (int const*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static bool FUNC_5(const uint8_t *VAR_12, size_t VAR_13)
{
   uint8_t VAR_14;
   uint8_t VAR_15;
   uint16_t VAR_16;
   uint32_t VAR_17;
   uint32_t VAR_18;
   uint32_t VAR_19;

   if (VAR_13 < 12)
   {
      FUNC_0(((void*)0), "Packet too small: basic header missing");
      return 0;
   }

   VAR_14 = VAR_12[0];
   VAR_15 = VAR_12[1];
   VAR_16 = FUNC_3(VAR_12 + 2);
   VAR_17 = FUNC_4(VAR_12 + 4);
   VAR_18 = FUNC_4(VAR_12 + 8);

   if (VAR_10 && VAR_16 != VAR_9)
   {
      int16_t VAR_20 = VAR_16 - VAR_9;

      FUNC_1(((void*)0), "*** Sequence break, expected %hu, got %hu ***", VAR_9, VAR_16);
      if (VAR_20 > 0)
         FUNC_1(((void*)0), "*** Jumped forward %hd packets ***", VAR_20);
      else
         FUNC_1(((void*)0), "*** Jumped backward %hd packets ***", -VAR_20);
   }
   VAR_10 = 1;
   VAR_9 = VAR_16 + 1;


   if (VAR_11 >= VAR_0)
   {
      FUNC_1(((void*)0), "Version: %d\nPayload type: %d%s\nSequence: %d\nTimestamp: %u\nSSRC: 0x%8.8X",
            VAR_14 >> 6, VAR_15 & VAR_8,
            (const char *)((VAR_15 & VAR_7) ? " (M)" : ""),
            VAR_16, VAR_17, VAR_18);
   }

   VAR_12 += 12;
   VAR_13 -= 12;

   if (VAR_11 >= VAR_4)
   {

      VAR_19 = VAR_14 & VAR_1;
      if (VAR_19)
      {
         uint32_t VAR_21;

         if (VAR_13 < (VAR_19 * 4))
         {
            FUNC_0(((void*)0), "Packet too small: CSRCs missing");
            return 0;
         }

         FUNC_1(((void*)0), "CSRCs:");
         for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++)
         {
            FUNC_1(((void*)0), " 0x%8.8X", FUNC_4(VAR_12));
            VAR_12 += 4;
            VAR_13 -= 4;
         }
      }


      if (VAR_14 & VAR_6)
      {
         uint32_t VAR_22;
         uint32_t VAR_23;
         size_t VAR_24;

         if (VAR_13 < 4)
         {
            FUNC_0(((void*)0), "Packet too small: extension header missing");
            return 0;
         }

         VAR_22 = FUNC_4(VAR_12);
         VAR_12 += 4;
         VAR_13 -= 4;

         VAR_24 = (size_t)(VAR_22 & VAR_3);
         VAR_23 = VAR_22 >> VAR_2;

         if (VAR_13 < VAR_24)
         {
            FUNC_0(((void*)0), "Packet too small: extension content missing");
            return 0;
         }

         FUNC_1(((void*)0), "Extension: 0x%4.4X (%u bytes)", VAR_23, (unsigned)VAR_24);
         FUNC_2(VAR_12, VAR_24);
         VAR_12 += VAR_24;
         VAR_13 -= VAR_24;
      }
   }


   if (VAR_11 >= VAR_5)
   {
      FUNC_1(((void*)0), "Data: (%u bytes)", (unsigned)VAR_13);
      FUNC_2(VAR_12, VAR_13);
   }

   return 1;
}
