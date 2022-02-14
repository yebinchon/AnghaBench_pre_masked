
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char period; unsigned char offset; unsigned char width; int check_nego; scalar_t__ qas; scalar_t__ dt; scalar_t__ iu; } ;
struct sym_tcb {TYPE_1__ tgoal; } ;
struct sym_hcb {unsigned char* msgin; unsigned char maxwide; int features; unsigned char maxoffs_dt; unsigned char maxoffs; unsigned char minsync_dt; unsigned char minsync; unsigned char* msgout; struct sym_tcb* target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (unsigned char*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (struct sym_hcb*,int,unsigned char,unsigned char*,unsigned char*) ;
 int FUNC_2 (struct sym_hcb*,int,char*,unsigned char*) ;
 int FUNC_3 (struct sym_hcb*,int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_4(struct sym_hcb *VAR_6, int VAR_7, int VAR_8)
{
 struct sym_tcb *VAR_9 = &VAR_6->target[VAR_8];
 unsigned char VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;

 unsigned char VAR_14 = VAR_6->msgin[3];
 unsigned char VAR_15 = VAR_6->msgin[5];
 unsigned char VAR_16 = VAR_6->msgin[6];
 unsigned char VAR_17 = VAR_6->msgin[7] & VAR_5;

 if (VAR_0 & VAR_1) {
  FUNC_2(VAR_6, VAR_8, "ppr msgin", VAR_6->msgin);
 }




 if (VAR_16 > VAR_6->maxwide) {
  VAR_13 = 1;
  VAR_16 = VAR_6->maxwide;
 }
 if (!VAR_16 || !(VAR_6->features & VAR_2))
  VAR_17 = 0;

 if (VAR_17 != (VAR_6->msgin[7] & VAR_5))
  VAR_13 = 1;

 VAR_12 = VAR_17 & VAR_4;

 if (VAR_15) {
  unsigned char VAR_18 = VAR_12 ? VAR_6->maxoffs_dt : VAR_6->maxoffs;
  if (VAR_15 > VAR_18) {
   VAR_13 = 1;
   VAR_15 = VAR_18;
  }
 }

 if (VAR_15) {
  unsigned char VAR_19 = VAR_12 ? VAR_6->minsync_dt : VAR_6->minsync;
  if (VAR_14 < VAR_19) {
   VAR_13 = 1;
   VAR_14 = VAR_19;
  }
 }




 VAR_11 = VAR_10 = 0;
 if (VAR_15 && FUNC_1(VAR_6, VAR_12, VAR_14, &VAR_11, &VAR_10) < 0)
  goto reject_it;





 if (!VAR_7 && VAR_13)
  goto reject_it;




 FUNC_3(VAR_6, VAR_8, VAR_17, VAR_15, VAR_14, VAR_16, VAR_11, VAR_10);




 if (!VAR_7)
  return 0;




 FUNC_0(VAR_6->msgout, VAR_14, VAR_15, VAR_16, VAR_17);

 if (VAR_0 & VAR_1) {
  FUNC_2(VAR_6, VAR_8, "ppr msgout", VAR_6->msgout);
 }

 VAR_6->msgin [0] = VAR_3;

 return 0;

reject_it:
 FUNC_3 (VAR_6, VAR_8, 0, 0, 0, 0, 0, 0);




 if (!VAR_7 && !VAR_17) {
  VAR_9->tgoal.period = VAR_14;
  VAR_9->tgoal.offset = VAR_15;
  VAR_9->tgoal.width = VAR_16;
  VAR_9->tgoal.iu = VAR_9->tgoal.dt = VAR_9->tgoal.qas = 0;
  VAR_9->tgoal.check_nego = 1;
 }
 return -1;
}
