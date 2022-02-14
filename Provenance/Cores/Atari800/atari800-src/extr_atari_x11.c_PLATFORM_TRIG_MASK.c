
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Window ;
struct TYPE_3__ {int buttons; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,int*,int*,int*,int*,unsigned int*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_4(int VAR_14)
{
 int VAR_15 = 1;

 if (VAR_14 == VAR_8) {
  VAR_15 = VAR_9;
 }
 if (VAR_14 == VAR_13) {
  Window VAR_16;
  Window VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  int VAR_21;
  unsigned int VAR_22;

  if (FUNC_0(VAR_2, VAR_10, &VAR_16, &VAR_17,
        &VAR_18, &VAR_19,
        &VAR_20, &VAR_21,
        &VAR_22)) {
   if (VAR_20 < 0 || VAR_20 > VAR_12 ||
       VAR_21 < 0 || VAR_21 > VAR_11)
    VAR_15 = 1;
   else if (VAR_22 & VAR_0)
    VAR_15 = 0;
  }
 }
 return VAR_15;
}
