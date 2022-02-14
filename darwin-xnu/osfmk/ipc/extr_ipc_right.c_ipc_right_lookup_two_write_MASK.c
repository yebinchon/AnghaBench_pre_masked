
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ) ;

kern_return_t
FUNC_6(
 ipc_space_t VAR_6,
 mach_port_name_t VAR_7,
 ipc_entry_t *VAR_8,
 mach_port_name_t VAR_9,
 ipc_entry_t *VAR_10)
{
 ipc_entry_t VAR_11;
 ipc_entry_t VAR_12;

 FUNC_0(VAR_6 != VAR_1);

 FUNC_3(VAR_6);

 if (!FUNC_2(VAR_6)) {
  FUNC_4(VAR_6);
  return VAR_3;
 }

 if ((VAR_11 = FUNC_1(VAR_6, VAR_7)) == VAR_0) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_7, 0, 0, VAR_5);
  return VAR_2;
 }
 if ((VAR_12 = FUNC_1(VAR_6, VAR_9)) == VAR_0) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_9, 0, 0, VAR_5);
  return VAR_2;
 }
 *VAR_8 = VAR_11;
 *VAR_10 = VAR_12;
 return VAR_4;
}
