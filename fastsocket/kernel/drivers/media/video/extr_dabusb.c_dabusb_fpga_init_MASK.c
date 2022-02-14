
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdabusb_t ;
typedef TYPE_1__* pbulk_transfer_t ;
struct TYPE_4__ {int size; int* data; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (pdabusb_t VAR_0, pbulk_transfer_t VAR_1)
{
 VAR_1->size = 4;
 VAR_1->data[0] = 0x2c;
 VAR_1->data[1] = 0;
 VAR_1->data[2] = 0;
 VAR_1->data[3] = 0;

 FUNC_1("dabusb_fpga_init");

 return FUNC_0 (VAR_0, VAR_1);
}
