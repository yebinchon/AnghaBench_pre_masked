
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct linkkey_info {int dummy; } ;
struct _wpad_cb {int dummy; } ;
typedef int s32 ;
typedef int conf_pads ;
struct TYPE_7__ {int mp; int js; int acc; int ir; int btns; } ;
struct TYPE_8__ {scalar_t__ num_registered; int sound_alarm; TYPE_1__ thresh; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct timespec*,struct timespec*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 int FUNC_10 (int) ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 TYPE_2__* VAR_25 ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int * FUNC_12 (int,int ) ;

s32 FUNC_13()
{
 u32 VAR_26;
 struct timespec VAR_27;
 int VAR_28;

 FUNC_8(VAR_26);
 if(VAR_23==VAR_6) {
  VAR_24 = 0;
  VAR_22 = 0;

  FUNC_11(VAR_25,0,sizeof(struct _wpad_cb)*VAR_5);
  FUNC_11(&VAR_14,0,sizeof(conf_pads));
  FUNC_11(VAR_17,0,sizeof(struct linkkey_info)*VAR_5);

  for(VAR_28=0;VAR_28<VAR_5;VAR_28++) {
   VAR_25[VAR_28].thresh.btns = VAR_9;
   VAR_25[VAR_28].thresh.ir = VAR_10;
   VAR_25[VAR_28].thresh.acc = VAR_8;
   VAR_25[VAR_28].thresh.js = VAR_11;
   VAR_25[VAR_28].thresh.mp = VAR_12;
  }

  if(FUNC_3(&VAR_14) < 0) {
   FUNC_7();
   FUNC_9(VAR_26);
   return VAR_1;
  }

  if(VAR_14.num_registered == 0) {
   FUNC_7();
   FUNC_9(VAR_26);
   return VAR_3;
  }

  if(VAR_14.num_registered > VAR_0) {
   FUNC_7();
   FUNC_9(VAR_26);
   return VAR_1;
  }

  VAR_21 = FUNC_12(VAR_5,VAR_16);
  if(VAR_21==((void*)0)) {
   FUNC_7();
   FUNC_9(VAR_26);
   return VAR_4;
  }

  FUNC_10(1);

  FUNC_0();
  FUNC_2(VAR_15);
  FUNC_1(VAR_13);

  if (FUNC_4(&VAR_20) < 0)
  {
   FUNC_7();
   FUNC_9(VAR_26);
   return VAR_4;
  }

  FUNC_5(&VAR_18);

  VAR_27.tv_sec = 1;
  VAR_27.tv_nsec = 0;
  FUNC_6(VAR_20,&VAR_27,&VAR_27,VAR_19,((void*)0));
  VAR_23 = VAR_7;
 }
 FUNC_9(VAR_26);
 return VAR_2;
}
