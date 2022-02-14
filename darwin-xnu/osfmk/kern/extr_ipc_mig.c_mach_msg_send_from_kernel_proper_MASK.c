
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


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
 int VAR_8 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

mach_msg_return_t
FUNC_8(
 mach_msg_header_t *VAR_9,
 mach_msg_size_t VAR_10)
{
 ipc_kmsg_t VAR_11;
 mach_msg_return_t VAR_12;

 FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_1);

 VAR_12 = FUNC_6(VAR_9, VAR_10, &VAR_11);
 if (VAR_12 != VAR_4) {
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 != VAR_4) {
  FUNC_5(VAR_11);
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_12);
  return VAR_12;
 }






 mach_msg_option_t VAR_13 = VAR_6;
 if (FUNC_2()->options & VAR_8)
  VAR_13 &= ~VAR_7;

 VAR_12 = FUNC_7(VAR_11, VAR_13, VAR_5);
 if (VAR_12 != VAR_4) {
  FUNC_4(VAR_11);
  FUNC_0(FUNC_1(VAR_2,VAR_3) | VAR_0, VAR_12);
 }

 return VAR_12;
}
