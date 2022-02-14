
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;
struct fileport_info_args {int fia_flavor; int * fia_retval; scalar_t__ fia_buffersize; int fia_buffer; } ;
typedef TYPE_1__* proc_t ;
typedef int mach_port_name_t ;
typedef int int32_t ;
struct TYPE_6__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

 scalar_t__ VAR_8 ;

 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;

 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct fileport_info_args*,int*) ;
 int VAR_12 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ) ;

int
FUNC_4(int VAR_13, int VAR_14, mach_port_name_t VAR_15,
 user_addr_t VAR_16, uint32_t VAR_17, int32_t *VAR_18)
{
 proc_t VAR_19;
 int VAR_20 = VAR_3;
 uint32_t VAR_21;
 struct fileport_info_args VAR_22;



 switch (VAR_14) {
 case 128:
  VAR_21 = VAR_11;
  break;
 case 129:
  VAR_21 = VAR_10;
  break;
 case 130:
  VAR_21 = VAR_9;
  break;
 case 131:
  VAR_21 = VAR_8;
  break;
 default:
  return (VAR_1);
 }

 if (VAR_17 < VAR_21)
  return (VAR_2);
 if ((VAR_19 = FUNC_1(VAR_13)) == VAR_7) {
  VAR_20 = VAR_4;
  goto out;
 }


 if ((VAR_20 = FUNC_3(VAR_19, VAR_6, VAR_14, VAR_0)))
  goto out1;

 VAR_22.fia_flavor = VAR_14;
 VAR_22.fia_buffer = VAR_16;
 VAR_22.fia_buffersize = VAR_17;
 VAR_22.fia_retval = VAR_18;

 if (FUNC_0(VAR_19->task, VAR_15,
     VAR_12, &VAR_22, &VAR_20) != VAR_5)
  VAR_20 = VAR_1;
out1:
 FUNC_2(VAR_19);
out:
 return (VAR_20);
}
