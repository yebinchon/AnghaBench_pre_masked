
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_7__ {int CR1; int CR2; int CR3; int CR4; int HIRQ; } ;
struct TYPE_8__ {int getsectsize; int options; TYPE_3__ reg; int status; scalar_t__ FAD; TYPE_2__* cdi; int playtype; scalar_t__ filter; scalar_t__ outconcddev; scalar_t__ playFAD; scalar_t__ playendFAD; TYPE_1__* fileinfo; scalar_t__ maxrepeat; } ;
struct TYPE_6__ {int (* ReadAheadFAD ) (scalar_t__) ;} ;
struct TYPE_5__ {int size; scalar_t__ lba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(void) {
  u32 VAR_4, VAR_5, VAR_6, VAR_7;

  VAR_4 = ((VAR_3->reg.CR1 & 0xFF) << 8) | VAR_3->reg.CR2;
  VAR_5 = VAR_3->reg.CR3 >> 8;
  VAR_6 = ((VAR_3->reg.CR3 & 0xFF) << 8) | VAR_3->reg.CR4;
  VAR_7 = ((VAR_3->fileinfo[VAR_6].size + VAR_3->getsectsize - 1) /
           VAR_3->getsectsize) - VAR_4;

  FUNC_2(FUNC_0(VAR_3->fileinfo[VAR_6].lba + VAR_4), 0);
  VAR_3->maxrepeat = 0;

  VAR_3->playFAD = VAR_3->FAD = VAR_3->fileinfo[VAR_6].lba + VAR_4;
  VAR_3->playendFAD = VAR_3->playFAD + VAR_7;

  VAR_3->options = 0x8;

  FUNC_1(1);

  VAR_3->outconcddev = VAR_3->filter + VAR_5;

  VAR_3->status = VAR_2;
  VAR_3->playtype = VAR_1;
  VAR_3->cdi->ReadAheadFAD(VAR_3->FAD);

  FUNC_3(VAR_3->status);
  VAR_3->reg.HIRQ |= VAR_0;
}
