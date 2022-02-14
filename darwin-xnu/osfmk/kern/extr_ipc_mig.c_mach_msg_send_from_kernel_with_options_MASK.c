
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_msg_timeout_t ;
typedef int mach_msg_size_t ;
typedef scalar_t__ mach_msg_return_t ;
typedef int mach_msg_option_t ;
typedef int mach_msg_header_t ;
typedef int ipc_kmsg_t ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int,int ) ;

mach_msg_return_t
FUNC_8(
 mach_msg_header_t *VAR_8,
 mach_msg_size_t VAR_9,
 mach_msg_option_t VAR_10,
 mach_msg_timeout_t VAR_11)
{
 ipc_kmsg_t VAR_12;
 mach_msg_return_t VAR_13;

 FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_1);

 VAR_13 = FUNC_6(VAR_8, VAR_9, &VAR_12);
 if (VAR_13 != VAR_4) {
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13 != VAR_4) {
  FUNC_5(VAR_12);
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_13);
  return VAR_13;
 }
 if (FUNC_2()->options & VAR_7)
  VAR_10 &= ~VAR_6;
 else if ((VAR_10 & VAR_5) == 0)
  VAR_10 |= VAR_6;

 VAR_13 = FUNC_7(VAR_12, VAR_10, VAR_11);

 if (VAR_13 != VAR_4) {
  FUNC_4(VAR_12);
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_13);
 }

 return VAR_13;
}
