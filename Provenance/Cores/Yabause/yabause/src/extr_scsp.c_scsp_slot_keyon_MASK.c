
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ecurp; size_t sa; int lea; int enxt; int ecmp; int einca; int * einc; scalar_t__ env; int ecnt; scalar_t__ fcnt; int * buf16; int * buf8; scalar_t__ pcm8b; int lsa; } ;
typedef TYPE_1__ slot_t ;
typedef int s8 ;
typedef int s16 ;
struct TYPE_7__ {int (* GetPC ) () ;} ;
struct TYPE_6__ {int * scsp_ram; TYPE_1__* slot; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (char*,int,int ,size_t,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (slot_t *VAR_9)
{

  if (VAR_9->ecurp == VAR_4)
    {
      FUNC_0 ("key on slot %d. 68K PC = %08X slot->sa = %08X slot->lsa = %08X "
               "slot->lea = %08X\n", VAR_9 - &(VAR_7.slot[0]), VAR_0->GetPC(),
               VAR_9->sa, VAR_9->lsa, VAR_9->lea >> VAR_5);


      if (VAR_9->pcm8b)
        {
          VAR_9->buf8 = (s8*) &(VAR_7.scsp_ram[VAR_9->sa]);
          if ((VAR_9->sa + (VAR_9->lea >> VAR_5)) > VAR_6)
            VAR_9->lea = (VAR_6 - VAR_9->sa) << VAR_5;
        }
      else
        {
          VAR_9->buf16 = (s16*) &(VAR_7.scsp_ram[VAR_9->sa & ~1]);
          if ((VAR_9->sa + (VAR_9->lea >> (VAR_5 - 1))) > VAR_6)
            VAR_9->lea = (VAR_6 - VAR_9->sa) << (VAR_5 - 1);
        }

      VAR_9->fcnt = 0;
      VAR_9->ecnt = VAR_2;

      VAR_9->env = 0;

      VAR_9->einc = &VAR_9->einca;
      VAR_9->ecurp = VAR_3;
      VAR_9->ecmp = VAR_1;
      VAR_9->enxt = VAR_8;
    }
}
