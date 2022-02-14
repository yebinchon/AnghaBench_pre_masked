
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ide_device {int status; int* data_ptr; int* data_end; int (* end_transfer_func ) (struct ide_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ide_device*) ;

__attribute__((used)) static void FUNC_2(struct ide_device *VAR_3, int VAR_4, uint16_t VAR_5) {
    uint8_t *VAR_6;

    if (VAR_1) FUNC_0(VAR_2, "data_writew: %d, %04x\n", VAR_4, VAR_5);


    if (!(VAR_3->status & VAR_0)) return;


    VAR_6 = VAR_3->data_ptr;
    VAR_6[0] = VAR_5 & 0xff;
    VAR_6[1] = VAR_5 >> 8;
    VAR_6 += 2;
    VAR_3->data_ptr = VAR_6;

    if (VAR_6 >= VAR_3->data_end) VAR_3->end_transfer_func(VAR_3);
}
