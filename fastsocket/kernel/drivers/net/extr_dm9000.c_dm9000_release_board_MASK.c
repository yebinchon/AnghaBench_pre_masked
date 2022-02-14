
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct board_info {int addr_req; int data_req; int io_data; int io_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct platform_device *VAR_0, struct board_info *VAR_1)
{


 FUNC_0(VAR_1->io_addr);
 FUNC_0(VAR_1->io_data);



 FUNC_2(VAR_1->data_req);
 FUNC_1(VAR_1->data_req);

 FUNC_2(VAR_1->addr_req);
 FUNC_1(VAR_1->addr_req);
}
