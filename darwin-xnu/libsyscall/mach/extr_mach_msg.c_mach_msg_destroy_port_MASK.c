
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef int mach_msg_type_name_t ;







 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int const,int *,int*) ;
 int FUNC_3 (int ,int ,int ,int const) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(mach_port_t VAR_2, mach_msg_type_name_t VAR_3)
{
    if (FUNC_0(VAR_2)) switch (VAR_3) {
      case 129:
      case 128:

 (void) FUNC_1(VAR_1, VAR_2);
 break;

      case 130:

 (void) FUNC_4(VAR_1, VAR_2,
      VAR_0, -1);
 break;

      case 132:

 (void) FUNC_3(VAR_1, VAR_2,
          VAR_2, 132);
 (void) FUNC_1(VAR_1, VAR_2);
 break;

      case 131:

 (void) FUNC_2(VAR_1, VAR_2,
           131,
           &VAR_2, &VAR_3);
 (void) FUNC_1(VAR_1, VAR_2);
 break;
    }
}
