
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_urefs_t ;
typedef int mach_port_type_t ;
typedef int mach_port_right_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int*,int*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*) ;

kern_return_t
FUNC_7(
 ipc_space_t VAR_7,
 mach_port_name_t VAR_8,
 mach_port_right_t VAR_9,
 mach_port_urefs_t *VAR_10)
{
 mach_port_type_t VAR_11;
 mach_port_urefs_t VAR_12;
 ipc_entry_t VAR_13;
 kern_return_t VAR_14;

 if (VAR_7 == VAR_0)
  return VAR_2;

 if (VAR_9 >= VAR_5)
  return VAR_3;

 if (!FUNC_1(VAR_8)) {
    if (VAR_9 == 129 ||
      VAR_9 == 128) {
   *VAR_10 = 1;
   return VAR_4;
  }
  return VAR_1;
 }

 VAR_14 = FUNC_4(VAR_7, VAR_8, &VAR_13);
 if (VAR_14 != VAR_4) {
  FUNC_5(VAR_8, 0, 0, VAR_6);
  return VAR_14;
 }


 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_13, &VAR_11, &VAR_12);


 if (VAR_14 != VAR_4)
  return VAR_14;

 if (VAR_11 & FUNC_0(VAR_9))
  switch (VAR_9) {
      case 128:
   FUNC_2(VAR_12 == 1);


      case 131:
      case 130:
   *VAR_10 = 1;
   break;

      case 132:
      case 129:
   FUNC_2(VAR_12 > 0);
   *VAR_10 = VAR_12;
   break;

      default:
   FUNC_6("mach_port_get_refs: strange rights");
  }
 else
  *VAR_10 = 0;

 return VAR_14;
}
