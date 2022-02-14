
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int size; int numblocks; } ;
typedef TYPE_3__ partition_struct ;
struct TYPE_7__ {int HIRQ; } ;
struct TYPE_9__ {scalar_t__ _statuscycles; scalar_t__ _periodiccycles; int _commandtiming; scalar_t__ _statustiming; int status; int isdiskchanged; scalar_t__ _periodictiming; int isonesectorstored; int repcnt; int maxrepeat; scalar_t__ carttype; TYPE_2__ reg; scalar_t__ _command; int FAD; void* track; int playFAD; int playtype; int playendFAD; int isbufferfull; int blockfreespace; int partition; TYPE_1__* cdi; } ;
struct TYPE_6__ {int (* GetStatus ) () ;int (* ReadAheadFAD ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;




 int FUNC_0 (char*,...) ;
 TYPE_5__* VAR_10 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

void FUNC_10(u32 VAR_11) {
   VAR_10->_statuscycles += VAR_11 * 3;
   VAR_10->_periodiccycles += VAR_11 * 3;

   if (VAR_10->_commandtiming > 0)
   {
      if (VAR_10->_commandtiming < VAR_11)
      {
         FUNC_1();
         VAR_10->_commandtiming = 0;
      }
      else
         VAR_10->_commandtiming -= VAR_11;
   }

   if (VAR_10->_statuscycles >= VAR_10->_statustiming)
   {
      VAR_10->_statuscycles -= VAR_10->_statustiming;
      switch(VAR_10->cdi->GetStatus())
      {
         case 0:
         case 1:
            if ((VAR_10->status & 0xF) == VAR_7 ||
                (VAR_10->status & 0xF) == VAR_8)
            {
               VAR_10->status = 132;
               VAR_10->isdiskchanged = 1;
            }
            break;
         case 2:

            if ((VAR_10->status & 0xF) != VAR_7)
               VAR_10->status = VAR_7;
            break;
         case 3:

            if ((VAR_10->status & 0xF) != VAR_8)
               VAR_10->status = VAR_8;
            break;
         default: break;
      }
   }

   if (VAR_10->_periodiccycles >= VAR_10->_periodictiming)
   {
      VAR_10->_periodiccycles -= VAR_10->_periodictiming;


      switch (VAR_10->status & 0xF) {
         case 132:
         {



               break;
         }
         case 131:
         {
            partition_struct * VAR_12;
            int VAR_13 = FUNC_3(VAR_10->FAD, &VAR_12);

            switch (VAR_13)
            {
               case 0:

                  VAR_10->FAD++;
                  VAR_10->cdi->ReadAheadFAD(VAR_10->FAD);

                  if (VAR_12 != ((void*)0))
                  {

                     FUNC_0("partition number = %d blocks = %d blockfreespace = %d fad = %x playpartition->size = %x isbufferfull = %x\n", (VAR_12 - VAR_10->partition), VAR_12->numblocks, VAR_10->blockfreespace, VAR_10->FAD, VAR_12->size, VAR_10->isbufferfull);

                     VAR_10->reg.HIRQ |= VAR_2;
                     VAR_10->isonesectorstored = 1;

                     if (VAR_10->FAD >= VAR_10->playendFAD) {

                        if (VAR_10->repcnt >= VAR_10->maxrepeat) {

                           VAR_10->status = 132;
                           FUNC_4(0);
                           VAR_10->reg.HIRQ |= VAR_4;

                           if (VAR_10->playtype == VAR_6)
                              VAR_10->reg.HIRQ |= VAR_3;

                           FUNC_0("PLAY HAS ENDED\n");
                        }
                        else {

                           VAR_10->FAD = VAR_10->playFAD;
                           if (VAR_10->repcnt < 0xE)
                              VAR_10->repcnt++;
                           VAR_10->track = FUNC_2(VAR_10->FAD);

                           FUNC_0("PLAY HAS REPEATED\n");
                        }
                     }
                     if (VAR_10->isbufferfull) {
                        FUNC_0("BUFFER IS FULL\n");

                     }
                  }
                  else
                  {
                     FUNC_0("Sector filtered out\n");
                     if (VAR_10->FAD >= VAR_10->playendFAD) {

                        if (VAR_10->repcnt >= VAR_10->maxrepeat) {

                           VAR_10->status = 132;
                           FUNC_4(0);
                           VAR_10->reg.HIRQ |= VAR_4;

                           if (VAR_10->playtype == VAR_6)
                              VAR_10->reg.HIRQ |= VAR_3;

                           FUNC_0("PLAY HAS ENDED\n");
                        }
                        else {
                           VAR_10->FAD = VAR_10->playFAD;
                           if (VAR_10->repcnt < 0xE)
                              VAR_10->repcnt++;
                           VAR_10->track = FUNC_2(VAR_10->FAD);

                           FUNC_0("PLAY HAS REPEATED\n");
                        }
                     }
                  }
                  break;
               case -1:

                  break;
               case -2:

                  break;
            }

            break;
         }
         case 128:
            break;
         case 129:
            break;
         case 130:
            break;
         default: break;
      }

      if (VAR_10->_command)
         return;

      VAR_10->status |= VAR_9;


      FUNC_7(VAR_10->status);

      VAR_10->reg.HIRQ |= VAR_5;
   }

   if(VAR_10->carttype == VAR_1)
      FUNC_6(VAR_11);
   else if (VAR_10->carttype == VAR_0)
      FUNC_5(VAR_11);
}
