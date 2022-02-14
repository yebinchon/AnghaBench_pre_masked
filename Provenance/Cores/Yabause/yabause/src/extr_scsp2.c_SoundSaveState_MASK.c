
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {int (* GetDReg ) (int) ;int (* GetAReg ) (int) ;int (* GetSR ) () ;int (* GetPC ) () ;} ;
struct TYPE_8__ {int mem4mb; int mvol; int rbl; int mslc; int drga; int dgate; int ddir; int dexe; int dtlg; int mofull; int moemp; int miovf; int mifull; int miemp; int tima; int tactl; int timb; int tbctl; int timc; int tcctl; int scieb; int scipd; int scilv0; int scilv1; int scilv2; int mcieb; int mcipd; scalar_t__ stack; int midi_out_cnt; int midi_in_cnt; scalar_t__ midi_out_buf; scalar_t__ midi_in_buf; int dmea; int rbp; TYPE_1__* slot; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_6__ {scalar_t__ env_phase; int lfo_step; int lfo_counter; int env_target; int env_step; int env_counter; int addr_counter; int key; } ;
typedef TYPE_2__ IOCheck_struct ;
typedef int FILE ;


 TYPE_5__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,void*,int,int,int *) ;

int FUNC_8(FILE *VAR_10)
{
   int VAR_11;
   u32 VAR_12;
   u8 VAR_13;
   int VAR_14;
   IOCheck_struct VAR_15 = { 0, 0 };

   if (VAR_9)
      FUNC_0();

   VAR_14 = FUNC_2(VAR_10, "SCSP", 2);


   FUNC_7(&VAR_15, (void *)&VAR_6, 1, 1, VAR_10);
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   {
      VAR_12 = VAR_0->GetDReg(VAR_11);
      FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   }
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   {
      VAR_12 = VAR_0->GetAReg(VAR_11);
      FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   }
   VAR_12 = VAR_0->GetSR();
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_0->GetPC();
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);


   FUNC_7(&VAR_15, (void *)VAR_8, 0x1000, 1, VAR_10);


   FUNC_7(&VAR_15, (void *)VAR_5, 0x80000, 1, VAR_10);


   for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
   {
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].key, 1, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].addr_counter, 4, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].env_counter, 4, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].env_step, 4, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].env_target, 4, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].env_phase, 4, 1, VAR_10);



      if (VAR_7.slot[VAR_11].env_phase == VAR_3)
         VAR_13 = 1;
      else if (VAR_7.slot[VAR_11].env_phase == VAR_4)
         VAR_13 = 2;
      else if (VAR_7.slot[VAR_11].env_phase == VAR_2)
         VAR_13 = 3;
      else if (VAR_7.slot[VAR_11].env_phase == VAR_1)
         VAR_13 = 4;
      else
         VAR_13 = 0;
      FUNC_7(&VAR_15, (void *)&VAR_13, 1, 1, VAR_10);

      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].lfo_counter, 4, 1, VAR_10);
      FUNC_7(&VAR_15, (void *)&VAR_7.slot[VAR_11].lfo_step, 4, 1, VAR_10);
   }




   VAR_12 = VAR_7.mem4mb;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.mvol;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);

   VAR_12 = VAR_7.rbl;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   FUNC_7(&VAR_15, (void *)&VAR_7.rbp, 4, 1, VAR_10);

   VAR_12 = VAR_7.mslc;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);

   FUNC_7(&VAR_15, (void *)&VAR_7.dmea, 4, 1, VAR_10);
   VAR_12 = VAR_7.drga;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.dgate<<6 | VAR_7.ddir<<5 | VAR_7.dexe<<4;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.dtlg;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);

   FUNC_7(&VAR_15, (void *)VAR_7.midi_in_buf, 1, 4, VAR_10);
   FUNC_7(&VAR_15, (void *)VAR_7.midi_out_buf, 1, 4, VAR_10);
   FUNC_7(&VAR_15, (void *)&VAR_7.midi_in_cnt, 1, 1, VAR_10);
   FUNC_7(&VAR_15, (void *)&VAR_7.midi_out_cnt, 1, 1, VAR_10);
   VAR_13 = VAR_7.mofull<<4 | VAR_7.moemp<<3
         | VAR_7.miovf<<2 | VAR_7.mifull<<1 | VAR_7.miemp<<0;
   FUNC_7(&VAR_15, (void *)&VAR_13, 1, 1, VAR_10);

   VAR_12 = VAR_7.tima;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.tactl;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.timb;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.tbctl;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.timc;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.tcctl;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);

   VAR_12 = VAR_7.scieb;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.scipd;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.scilv0;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.scilv1;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.scilv2;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.mcieb;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);
   VAR_12 = VAR_7.mcipd;
   FUNC_7(&VAR_15, (void *)&VAR_12, 4, 1, VAR_10);

   FUNC_7(&VAR_15, (void *)VAR_7.stack, 4, 32 * 2, VAR_10);

   return FUNC_1(VAR_10, VAR_14);
}
