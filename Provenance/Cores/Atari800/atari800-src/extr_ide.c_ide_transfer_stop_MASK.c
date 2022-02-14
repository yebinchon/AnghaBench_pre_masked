
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {void (* end_transfer_func ) (struct ide_device*) ;int status; int io_buffer; int data_end; int data_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ide_device *VAR_4) {
    if (VAR_1) FUNC_0(VAR_3, "transfer stop\n");

    VAR_4->end_transfer_func = FUNC_1;
    VAR_4->data_ptr = VAR_4->io_buffer;
    VAR_4->data_end = VAR_4->io_buffer;
    VAR_4->status &= ~VAR_0;
    VAR_2 = 0;
}
