
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numthreads; scalar_t__ skip_load; int * ssfpath; int sndcoretype; int m68kcoretype; scalar_t__ play_ssf; int * biospath; int osdcoretype; scalar_t__ frameskip; int videoformattype; int basetime; int clocksync; int regionid; int modemport; int modemip; int mpegpath; int cdpath; int cdcoretype; int carttype; int percoretype; int vidcoretype; int cartpath; int buppath; int sh2coretype; scalar_t__ usethreads; } ;
typedef TYPE_1__ yabauseinit_struct ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int NumThreads; int DecilineMode; int emulatebios; int playing_ssf; scalar_t__ UseThreads; scalar_t__ usequickload; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int * VAR_5 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_4__* VAR_8 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int * FUNC_16 (int) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 scalar_t__ FUNC_23 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_24 (int ,void*) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int ) ;
 void* FUNC_29 (char*) ;
 int VAR_11 ;
 int FUNC_30 (int,int ) ;
 int FUNC_31 (char*,int ,int ) ;
 int FUNC_32 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_33 (int *) ;
 TYPE_2__ VAR_14 ;

int FUNC_34(yabauseinit_struct *VAR_15)
{

   VAR_14.UseThreads = VAR_15->usethreads;
   VAR_14.NumThreads = VAR_15->numthreads;


   if (FUNC_12(VAR_15->sh2coretype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("SH2"));
      return -1;
   }

   if ((VAR_0 = FUNC_17(0x80000)) == ((void*)0))
      return -1;

   if ((VAR_4 = FUNC_17(0x100000)) == ((void*)0))
      return -1;

   if ((VAR_5 = FUNC_17(0x100000)) == ((void*)0))
      return -1;

   if ((VAR_1 = FUNC_16(0x10000)) == ((void*)0))
      return -1;

   if (FUNC_6(VAR_15->buppath) != 0)
      FUNC_4(VAR_1, 0x10000);

   VAR_2 = 0;

   VAR_11 = VAR_15->buppath;

   if (FUNC_0(VAR_15->cartpath, VAR_15->carttype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("Cartridge"));
      return -1;
   }

   FUNC_9();

   if (FUNC_23(VAR_15->vidcoretype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("Video"));
      return -1;
   }


   if (FUNC_11(VAR_15->percoretype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("Peripheral"));
      return -1;
   }

   if (FUNC_2(VAR_15->carttype, VAR_15->cdcoretype, VAR_15->cdpath, VAR_15->mpegpath, VAR_15->modemip, VAR_15->modemport) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("CS2"));
      return -1;
   }

   if (FUNC_14() != 0)
   {
      FUNC_24(VAR_9, FUNC_29("SCU"));
      return -1;
   }

   if (FUNC_8(VAR_15->m68kcoretype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("M68K"));
      return -1;
   }

   if (FUNC_13(VAR_15->sndcoretype) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("SCSP/M68K"));
      return -1;
   }

   if (FUNC_21() != 0)
   {
      FUNC_24(VAR_9, FUNC_29("VDP1"));
      return -1;
   }

   if (FUNC_22() != 0)
   {
      FUNC_24(VAR_9, FUNC_29("VDP2"));
      return -1;
   }

   if (FUNC_15(VAR_15->regionid, VAR_15->clocksync, VAR_15->basetime) != 0)
   {
      FUNC_24(VAR_9, FUNC_29("SMPC"));
      return -1;
   }

   if (FUNC_1() != 0)
   {
      FUNC_24(VAR_9, FUNC_29("Cheat System"));
      return -1;
   }

   FUNC_28(VAR_15->videoformattype);
   FUNC_25(VAR_3);
   VAR_14.DecilineMode = 1;

   if (VAR_15->frameskip)
      FUNC_3();




   FUNC_10(VAR_7);


   if (VAR_15->biospath != ((void*)0) && FUNC_33(VAR_15->biospath))
   {
      if (FUNC_7(VAR_15->biospath) != 0)
      {
         FUNC_24(VAR_10, (void *)VAR_15->biospath);
         return -2;
      }
      VAR_14.emulatebios = 0;
   }
   else
      VAR_14.emulatebios = 1;

   VAR_14.usequickload = 0;







   FUNC_27();
   if (VAR_15->skip_load)
   {
    return 0;
   }

   if (VAR_14.usequickload || VAR_14.emulatebios)
   {
      if (FUNC_26() != 0)
      {
         if (VAR_14.emulatebios)
         {
            FUNC_24(VAR_9, FUNC_29("Game"));
            return -2;
         }
         else
            FUNC_27();
      }
   }





   if (VAR_14.UseThreads)
   {
      int VAR_16 = VAR_14.NumThreads < 1 ? 1 : VAR_14.NumThreads;
      FUNC_20(VAR_16 == 1 ? 0 : 1);
      FUNC_18(VAR_16);
      FUNC_19(VAR_16);
   }
   else
   {
      FUNC_20(0);
      FUNC_18(0);
      FUNC_19(0);
   }

   return 0;
}
