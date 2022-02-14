
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ide_device {int status; int* data_ptr; int* data_end; int (* end_transfer_func ) (struct ide_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_3 ;
 int FUNC_1 (struct ide_device*) ;

__attribute__((used)) static uint16_t FUNC_2(struct ide_device *VAR_4, int VAR_5) {
    uint8_t *VAR_6;
    uint16_t VAR_7;


    if (!(VAR_4->status & VAR_0)) return 0;


    VAR_6 = VAR_4->data_ptr;
    VAR_7 = VAR_6[0];
    VAR_7 |= VAR_6[1] << 8;
    VAR_6 += 2;
    VAR_4->data_ptr = VAR_6;

    if (VAR_1) {
        FUNC_0(VAR_3, "data_readw: %d, %04x (count: %d)\n", VAR_5, VAR_7, VAR_2);
        VAR_2++;
        VAR_2 &= 0xff;
    }

    if (VAR_6 >= VAR_4->data_end) VAR_4->end_transfer_func(VAR_4);

    return VAR_7;
}
