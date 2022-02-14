
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef void* u32 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ s64 ;
typedef size_t s32 ;
struct TYPE_4__ {size_t chan; } ;
struct TYPE_3__ {int chan; scalar_t__ fire; int callback; void* in_bytes; void* in; void* out_bytes; void* out; } ;
typedef int SICallback ;


 int FUNC_0 (int ,struct timespec*,int ,int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (size_t,void*,void*,void*,void*,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (void*) ;
 int * VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__* VAR_4 ;

u32 FUNC_7(s32 VAR_5,void *VAR_6,u32 VAR_7,void *VAR_8,u32 VAR_9,SICallback VAR_10,u32 VAR_11)
{
 u32 VAR_12 = 0;
 u32 VAR_13;
 s64 VAR_14;
 u64 VAR_15,VAR_16;
 struct timespec VAR_17;
 FUNC_1(VAR_13);
 if(VAR_3[VAR_5].chan==-1 && VAR_2.chan!=VAR_5) {
  VAR_12 = 1;
  VAR_16 = VAR_15 = FUNC_4();
  if(VAR_11) VAR_16 = VAR_4[VAR_5]+FUNC_5(VAR_11);
  VAR_14 = (VAR_15 - VAR_16);
  if(VAR_14<0) {
   VAR_17.tv_sec = 0;
   VAR_17.tv_nsec = FUNC_6((VAR_16 - VAR_15));
   FUNC_0(VAR_1[VAR_5],&VAR_17,VAR_0,((void*)0));
  } else if(FUNC_3(VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10)) {
   FUNC_2(VAR_13);
   return VAR_12;
  }
  VAR_3[VAR_5].chan = VAR_5;
  VAR_3[VAR_5].out = VAR_6;
  VAR_3[VAR_5].out_bytes = VAR_7;
  VAR_3[VAR_5].in = VAR_8;
  VAR_3[VAR_5].in_bytes = VAR_9;
  VAR_3[VAR_5].callback = VAR_10;
  VAR_3[VAR_5].fire = VAR_16;
 }
 FUNC_2(VAR_13);
 return VAR_12;
}
