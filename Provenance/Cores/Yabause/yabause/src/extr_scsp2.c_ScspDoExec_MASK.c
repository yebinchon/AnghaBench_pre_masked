
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t s32 ;
typedef int s16 ;
struct TYPE_4__ {scalar_t__ (* GetAudioSpace ) () ;int (* UpdateAudio ) (scalar_t__*,scalar_t__*,scalar_t__) ;} ;
struct TYPE_3__ {int scieb; int sample_timer; int tcctl; int timc; int tbctl; int timb; int tactl; int tima; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (size_t*,size_t*,int *,scalar_t__) ;
 int FUNC_4 (size_t*,size_t*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int *,int ,int) ;
 TYPE_1__ VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(u32 VAR_12)
{



   u32 VAR_13;
   u32 VAR_14;
   u32 VAR_15;





   VAR_14 = 0;
   VAR_13 = VAR_12;
   while (VAR_13 > 0)
   {
      u32 VAR_16 = 0;
      u32 VAR_17 = VAR_13;
      if (VAR_5.scieb & (1 << VAR_0))
         VAR_17 = FUNC_1(VAR_17, FUNC_6(VAR_5.tima, VAR_5.tactl));
      if (VAR_5.scieb & (1 << VAR_1))
         VAR_17 = FUNC_1(VAR_17, FUNC_6(VAR_5.timb, VAR_5.tbctl));
      if (VAR_5.scieb & (1 << VAR_2))
         VAR_17 = FUNC_1(VAR_17, FUNC_6(VAR_5.timc, VAR_5.tcctl));

      VAR_5.sample_timer += VAR_17;
      VAR_16 = VAR_5.sample_timer >> 8;
      VAR_5.sample_timer &= 0xFF;
      VAR_13 -= VAR_17;
      VAR_14 += VAR_16;

      FUNC_5(VAR_17);

      FUNC_7(VAR_16, &VAR_5.tima, VAR_5.tactl,
                      VAR_0);
      FUNC_7(VAR_16, &VAR_5.timb, VAR_5.tbctl,
                      VAR_1);
      FUNC_7(VAR_16, &VAR_5.timc, VAR_5.tcctl,
                      VAR_2);
   }

   if (VAR_9)
   {
      s32 *VAR_18, *VAR_19;


      if (VAR_11 + VAR_14 > VAR_3)
      {
         u32 VAR_20 = (VAR_11 + VAR_14) - VAR_3;
         FUNC_2("WARNING: Sound buffer overrun, %u samples\n", (int)VAR_20);
         VAR_11 -= VAR_20;
      }
      while (VAR_14 > 0)
      {
         u32 VAR_21 = VAR_14;
         if (VAR_10 >= VAR_3)
            VAR_10 = 0;
         if (VAR_21 > VAR_3 - VAR_10)
            VAR_21 = VAR_3 - VAR_10;
         VAR_18 = &VAR_6[VAR_10];
         VAR_19 = &VAR_7[VAR_10];
         FUNC_4(VAR_18, VAR_19, VAR_21);
         VAR_10 += VAR_21;
         VAR_11 += VAR_21;
         VAR_14 -= VAR_21;
      }


      while (VAR_11 > 0 && (VAR_15 = VAR_4->GetAudioSpace()) > 0)
      {
         s32 VAR_22 = (s32)VAR_10 - (s32)VAR_11;
         if (VAR_22 < 0)
            VAR_22 += VAR_3;
         if (VAR_15 > VAR_11)
            VAR_15 = VAR_11;
         if (VAR_15 > VAR_3 - VAR_22)
            VAR_15 = VAR_3 - VAR_22;
         VAR_4->UpdateAudio((u32 *)&VAR_6[VAR_22],
                              (u32 *)&VAR_7[VAR_22], VAR_15);
         VAR_11 -= VAR_15;




      }
   }
   else
   {
      if ((VAR_15 = VAR_4->GetAudioSpace()))
      {
         if (VAR_15 > VAR_3)
            VAR_15 = VAR_3;
         FUNC_4(VAR_6, VAR_7, VAR_15);
         VAR_4->UpdateAudio((u32 *)VAR_6,
                              (u32 *)VAR_7, VAR_15);




      }
   }



   VAR_8 += VAR_12;
}
