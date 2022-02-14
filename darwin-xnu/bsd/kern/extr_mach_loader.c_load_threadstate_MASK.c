
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int thread_t ;
typedef int load_return_t ;
struct TYPE_3__ {scalar_t__ threadstate_sz; scalar_t__* threadstate; } ;
typedef TYPE_1__ load_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static
load_return_t
FUNC_5(
 thread_t VAR_3,
 uint32_t *VAR_4,
 uint32_t VAR_5,
 load_result_t *VAR_6
)
{
 uint32_t VAR_7;
 int VAR_8;
 uint32_t VAR_9;
 uint32_t *VAR_10 = ((void*)0);
 uint32_t VAR_11 = 0;
 int VAR_12;

 (void)VAR_3;

 if (VAR_5 > 0) {
  VAR_11 = VAR_5;
  VAR_10 = FUNC_0(VAR_11);
  if (VAR_10 == ((void*)0)) {
   return VAR_1;
  }
  FUNC_2(VAR_10, VAR_4, VAR_11);
  VAR_4 = VAR_10;
 }







 while (VAR_5 > 0) {
  VAR_8 = *VAR_4++;
  VAR_7 = *VAR_4++;

  if (FUNC_3(VAR_7, 2, sizeof(uint32_t), &VAR_9) ||
      FUNC_4(VAR_5, VAR_9, &VAR_5)) {
   VAR_12 = VAR_0;
   goto bad;
  }

  VAR_4 += VAR_7;
 }

 VAR_6->threadstate = VAR_10;
 VAR_6->threadstate_sz = VAR_11;
 return VAR_2;

bad:
 if (VAR_10) {
  FUNC_1(VAR_10, VAR_11);
 }
 return VAR_12;
}
