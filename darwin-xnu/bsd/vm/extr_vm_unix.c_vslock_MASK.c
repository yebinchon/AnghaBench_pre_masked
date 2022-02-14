
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_t ;
typedef scalar_t__ user_size_t ;
typedef scalar_t__ user_addr_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ) ;

int
FUNC_5(
 user_addr_t VAR_7,
 user_size_t VAR_8)
{
 kern_return_t VAR_9;
 vm_map_t VAR_10;

 VAR_10 = FUNC_0();
 VAR_9 = FUNC_4(VAR_10,
      FUNC_3(VAR_7,
          FUNC_1(VAR_10)),
      FUNC_2(VAR_7+VAR_8,
          FUNC_1(VAR_10)),
      VAR_5 | VAR_6, VAR_4,
      VAR_3);

 switch (VAR_9) {
 case 128:
  return (0);
 case 131:
 case 130:
  return (VAR_2);
 case 129:
  return (VAR_0);
 default:
  return (VAR_1);
 }
}
