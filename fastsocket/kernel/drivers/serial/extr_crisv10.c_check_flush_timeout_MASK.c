
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {scalar_t__ first_recv_buffer; } ;


 int FUNC_0 (struct e100_serial*,char*,int) ;
 int FUNC_1 (struct e100_serial*) ;
 int FUNC_2 (struct e100_serial*) ;

__attribute__((used)) static void FUNC_3(struct e100_serial *VAR_0)
{

 FUNC_1(VAR_0);



 if (VAR_0->first_recv_buffer)
  FUNC_0(VAR_0, "flip", 2000);





 FUNC_2(VAR_0);
}
