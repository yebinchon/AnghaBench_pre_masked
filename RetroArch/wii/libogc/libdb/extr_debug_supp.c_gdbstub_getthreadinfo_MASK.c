
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbstub_threadinfo {scalar_t__* more_display; scalar_t__* name; scalar_t__* display; } ;
typedef scalar_t__ s32 ;
typedef int lwp_cntrl ;
struct TYPE_2__ {scalar_t__ min_id; scalar_t__ max_id; scalar_t__* local_table; } ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (scalar_t__*,char*) ;

s32 FUNC_2(s32 VAR_2,struct gdbstub_threadinfo *VAR_3)
{
 s32 VAR_4,VAR_5,VAR_6;
 lwp_cntrl *VAR_7;
 char VAR_8[20];

 if(VAR_2<=0) return 0;

 if(VAR_2==1) {
  FUNC_1(VAR_3->display,"idle thread");
  FUNC_1(VAR_3->name,"IDLE");
  VAR_3->more_display[0] = 0;
  return 1;
 }

 VAR_4 = 1;
 VAR_5 = VAR_0.min_id;
 VAR_6 = VAR_0.max_id;
 if(VAR_2<=(VAR_4 + (VAR_6 - VAR_5))){
  VAR_7 = (lwp_cntrl*)VAR_0.local_table[VAR_2 - VAR_4];
  if(VAR_7==((void*)0)) return 0;

  FUNC_1(VAR_3->display,"libogc task:   control at: 0x");
  VAR_8[0] = VAR_1[(((int)VAR_7)>>28)&0x0f];
  VAR_8[1] = VAR_1[(((int)VAR_7)>>24)&0x0f];
  VAR_8[2] = VAR_1[(((int)VAR_7)>>20)&0x0f];
  VAR_8[3] = VAR_1[(((int)VAR_7)>>16)&0x0f];
  VAR_8[4] = VAR_1[(((int)VAR_7)>>12)&0x0f];
  VAR_8[5] = VAR_1[(((int)VAR_7)>>8)&0x0f];
  VAR_8[6] = VAR_1[(((int)VAR_7)>>4)&0x0f];
  VAR_8[7] = VAR_1[((int)VAR_7)&0x0f];
  VAR_8[8] = 0;
  FUNC_0(VAR_3->display,VAR_8);

  VAR_3->name[0] = 0;
  VAR_3->name[1] = 0;
  VAR_3->name[2] = 0;
  VAR_3->name[3] = 0;
  VAR_3->name[4] = 0;

  VAR_3->more_display[0] = 0;
  return 1;
 }
 return 0;
}
