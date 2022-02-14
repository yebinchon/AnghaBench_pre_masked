
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ide_device {int status; scalar_t__ cycle; int * data_end; int * data_ptr; int * end_transfer_func; } ;
typedef int EndTransferFunc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ide_device *VAR_4, uint8_t *VAR_5, int VAR_6,
                                       EndTransferFunc *VAR_7) {
    if (VAR_2) FUNC_0(VAR_3, "transfer start\n");

    VAR_4->end_transfer_func = VAR_7;
    VAR_4->data_ptr = VAR_5;
    VAR_4->data_end = VAR_5 + VAR_6;
    VAR_4->cycle = 0;

    if (!(VAR_4->status & VAR_1)) VAR_4->status |= VAR_0;
}
