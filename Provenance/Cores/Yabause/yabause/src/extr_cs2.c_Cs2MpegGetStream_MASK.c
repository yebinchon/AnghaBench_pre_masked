
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CR3; int CR1; int CR2; int CR4; int HIRQ; } ;
struct TYPE_6__ {int status; TYPE_2__ reg; TYPE_1__* mpegstm; } ;
struct TYPE_4__ {int audstm; int audstmid; int audchannum; int vidstm; int vidstmid; int vidchannum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_0(void) {
   int VAR_3 = (VAR_2->reg.CR3 >> 8);

   if (VAR_3 == 0)
   {

      VAR_2->reg.CR1 = (VAR_2->status << 8) | VAR_2->mpegstm[0].audstm;
      VAR_2->reg.CR2 = (VAR_2->mpegstm[0].audstmid << 8) | VAR_2->mpegstm[0].audchannum;
      VAR_2->reg.CR3 = VAR_2->mpegstm[0].vidstm;
      VAR_2->reg.CR4 = (VAR_2->mpegstm[0].vidstmid << 8) | VAR_2->mpegstm[0].vidchannum;
   }
   else
   {

      VAR_2->reg.CR1 = (VAR_2->status << 8) | VAR_2->mpegstm[1].audstm;
      VAR_2->reg.CR2 = (VAR_2->mpegstm[1].audstmid << 8) | VAR_2->mpegstm[1].audchannum;
      VAR_2->reg.CR3 = VAR_2->mpegstm[1].vidstm;
      VAR_2->reg.CR4 = (VAR_2->mpegstm[1].vidstmid << 8) | VAR_2->mpegstm[1].vidchannum;
   }

   VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
