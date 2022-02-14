
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* proc_t ;
typedef int ipc_port_t ;
typedef int errno_t ;
struct TYPE_3__ {int task; } ;




 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int ,int,int,int,int *,int) ;

__attribute__((used)) static errno_t
FUNC_2(proc_t VAR_15, int VAR_16, uint64_t VAR_17, uint64_t VAR_18,
                             ipc_port_t * VAR_19, int VAR_20)
{
 int VAR_21 = VAR_9;
 int VAR_22 = VAR_13;
 int VAR_23 = VAR_10;

 if ((VAR_16 & VAR_1) != 0) {
  int VAR_24 = VAR_16 & VAR_1;

  switch(VAR_24) {
   case 129:
    VAR_21 = VAR_7;
    break;
   case 128:
    VAR_21 = VAR_8;
    break;
   case 131:
    VAR_21 = VAR_5;
    break;
   case 130:
    VAR_21 = VAR_6;
    break;
   case 133:
    VAR_21 = VAR_3;
    break;

   case 132:
    VAR_21 = VAR_4;
    break;

   default:
    VAR_21 = VAR_9;

    break;
  }
 }

 if (VAR_17 != VAR_0) {
  switch (VAR_17) {
   case 134:
    VAR_22 = VAR_14;
    break;
   case 136:
    VAR_22 = VAR_11;
    break;
   case 135:
    VAR_22 = VAR_12;
    break;
   default:
    VAR_22 = VAR_13;

    break;
  }
 }

 if (VAR_18 != VAR_2) {
  FUNC_0(VAR_18, &VAR_23);
 }

 if (VAR_21 != VAR_9 ||
     VAR_22 != VAR_13 ||
     VAR_23 != VAR_10) {
  FUNC_1(VAR_15->task, VAR_21, VAR_22, VAR_23,
                            VAR_19, VAR_20);
 }

 return (0);
}
