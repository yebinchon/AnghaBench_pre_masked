
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int* data_ptr; int* data_end; int* io_buffer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ide_device *VAR_1) {
    VAR_1->data_ptr = VAR_1->data_end = VAR_1->io_buffer;
    VAR_1->io_buffer[0] = VAR_1->io_buffer[1] =
    VAR_1->io_buffer[2] = VAR_1->io_buffer[3] = 0xff;
    VAR_0 = 0;
}
