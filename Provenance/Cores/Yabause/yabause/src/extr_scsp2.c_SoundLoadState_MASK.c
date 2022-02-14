
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int (* SetPC ) (int) ;int (* SetSR ) (int) ;int (* SetAReg ) (int,int) ;int (* SetDReg ) (int,int) ;} ;
struct TYPE_9__ {int lfo_step; int lfo_counter; int env_phase; int env_target; int env_step; int env_counter; int addr_counter; int key; } ;
struct TYPE_8__ {int mem4mb; int dac18b; int mvol; int rbl; int mslc; int drga; int dgate; int ddir; int dexe; int dtlg; int mofull; int moemp; int miovf; int mifull; int miemp; int tima; int tactl; int timb; int tbctl; int timc; int tcctl; int scieb; int scipd; int scilv0; int scilv1; int scilv2; int mcieb; int mcipd; scalar_t__ stack; int midi_out_cnt; int midi_in_cnt; scalar_t__ midi_out_buf; scalar_t__ midi_in_buf; int dmea; int rbp; TYPE_4__* slot; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_10(FILE *VAR_6, int VAR_7, int VAR_8)
{
   int VAR_9, VAR_10;
   u32 VAR_11;
   u8 VAR_12;
   IOCheck_struct VAR_13 = { 0, 0 };

   if (VAR_5)
      FUNC_1();


   FUNC_9(&VAR_13, (void *)&VAR_2, 1, 1, VAR_6);
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
   {
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_0->SetDReg(VAR_9, VAR_11);
   }
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
   {
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_0->SetAReg(VAR_9, VAR_11);
   }
   FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
   VAR_0->SetSR(VAR_11);
   FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
   VAR_0->SetPC(VAR_11);


   FUNC_9(&VAR_13, (void *)VAR_4, 0x1000, 1, VAR_6);


   FUNC_9(&VAR_13, (void *)VAR_1, 0x80000, 1, VAR_6);


   for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
   {
      for (VAR_10 = 0; VAR_10 < 0x18; VAR_10 += 2)
         FUNC_4(VAR_9<<5 | VAR_10, VAR_4[(VAR_9<<5 | VAR_10) >> 1]);



      FUNC_2(&VAR_3.slot[VAR_9]);
      FUNC_3(&VAR_3.slot[VAR_9]);
   }

   if (VAR_7 > 1)
   {

      for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
      {
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].key, 1, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].addr_counter, 4, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].env_counter, 4, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].env_step, 4, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].env_target, 4, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].env_phase, 4, 1, VAR_6);


         FUNC_9(&VAR_13, (void *)&VAR_12, 1, 1, VAR_6);

         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].lfo_counter, 4, 1, VAR_6);
         FUNC_9(&VAR_13, (void *)&VAR_3.slot[VAR_9].lfo_step, 4, 1, VAR_6);
      }


      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.mem4mb = VAR_11;

      VAR_3.dac18b = (VAR_4[0x400>>1] >> 8) & 1;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.mvol = VAR_11;

      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.rbl = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_3.rbp, 4, 1, VAR_6);

      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.mslc = VAR_11;

      FUNC_9(&VAR_13, (void *)&VAR_3.dmea, 4, 1, VAR_6);
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.drga = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.dgate = VAR_11>>6 & 1;
      VAR_3.ddir = VAR_11>>5 & 1;
      VAR_3.dexe = VAR_11>>4 & 1;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.dtlg = VAR_11;

      FUNC_9(&VAR_13, (void *)VAR_3.midi_in_buf, 1, 4, VAR_6);
      FUNC_9(&VAR_13, (void *)VAR_3.midi_out_buf, 1, 4, VAR_6);
      FUNC_9(&VAR_13, (void *)&VAR_3.midi_in_cnt, 1, 1, VAR_6);
      FUNC_9(&VAR_13, (void *)&VAR_3.midi_out_cnt, 1, 1, VAR_6);
      FUNC_9(&VAR_13, (void *)&VAR_12, 1, 1, VAR_6);
      VAR_3.mofull = VAR_12>>4 & 1;
      VAR_3.moemp = VAR_12>>3 & 1;
      VAR_3.miovf = VAR_12>>2 & 1;
      VAR_3.mifull = VAR_12>>1 & 1;
      VAR_3.miemp = VAR_12>>0 & 1;

      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.tima = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.tactl = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.timb = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.tbctl = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.timc = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.tcctl = VAR_11;

      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.scieb = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.scipd = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.scilv0 = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.scilv1 = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.scilv2 = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.mcieb = VAR_11;
      FUNC_9(&VAR_13, (void *)&VAR_11, 4, 1, VAR_6);
      VAR_3.mcipd = VAR_11;

      FUNC_9(&VAR_13, (void *)VAR_3.stack, 4, 32 * 2, VAR_6);
   }

   if (VAR_5)
      FUNC_0();

   return VAR_8;
}
