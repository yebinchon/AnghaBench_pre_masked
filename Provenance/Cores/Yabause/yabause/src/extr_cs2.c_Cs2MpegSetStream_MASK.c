
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CR3; int CR1; int CR2; int CR4; int HIRQ; } ;
struct TYPE_6__ {TYPE_2__ reg; int status; TYPE_1__* mpegstm; } ;
struct TYPE_4__ {int audstm; int audstmid; int audchannum; int vidstm; int vidstmid; int vidchannum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
   int VAR_3 = (VAR_2->reg.CR3 >> 8);

   if (VAR_3 == 0)
   {

      VAR_2->mpegstm[0].audstm = VAR_2->reg.CR1 & 0xFF;
      VAR_2->mpegstm[0].audstmid = VAR_2->reg.CR2 >> 8;
      VAR_2->mpegstm[0].audchannum = VAR_2->reg.CR2 & 0xFF;
      VAR_2->mpegstm[0].vidstm = VAR_2->reg.CR3 & 0xFF;
      VAR_2->mpegstm[0].vidstmid = VAR_2->reg.CR4 >> 8;
      VAR_2->mpegstm[0].vidchannum = VAR_2->reg.CR4 & 0xFF;
   }
   else
   {

      VAR_2->mpegstm[1].audstm = VAR_2->reg.CR1 & 0xFF;
      VAR_2->mpegstm[1].audstmid = VAR_2->reg.CR2 >> 8;
      VAR_2->mpegstm[1].audchannum = VAR_2->reg.CR2 & 0xFF;
      VAR_2->mpegstm[1].vidstm = VAR_2->reg.CR3 & 0xFF;
      VAR_2->mpegstm[1].vidstmid = VAR_2->reg.CR4 >> 8;
      VAR_2->mpegstm[1].vidchannum = VAR_2->reg.CR4 & 0xFF;
   }

   FUNC_0(VAR_2->status);
   VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
