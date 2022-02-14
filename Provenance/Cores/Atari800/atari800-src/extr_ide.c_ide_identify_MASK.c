
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ide_device {int cylinders; int heads; int sectors; char* drive_serial_str; int mult_sectors; int nb_sectors; scalar_t__ is_cdrom; scalar_t__ is_cf; int * io_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int,int) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct ide_device *VAR_9) {
    unsigned int VAR_10;
    uint8_t *VAR_11 = VAR_9->io_buffer;
    FUNC_1(VAR_11, 0, 512);

    FUNC_0(VAR_11, 0, VAR_4);
    FUNC_0(VAR_11, 1, VAR_9->cylinders);
    FUNC_0(VAR_11, 3, VAR_9->heads);




    FUNC_0(VAR_11, 6, VAR_9->sectors);

    FUNC_2(VAR_11+10*2, VAR_9->drive_serial_str, 20);





    FUNC_0(VAR_11, 22, 4);

    FUNC_2(VAR_11+23*2, VAR_8, 8);
    FUNC_2(VAR_11+27*2, "ATARI800 HARDDISK", 40);

    if (VAR_7 > 1)
        FUNC_0(VAR_11, 47, 0x8000 | VAR_7);

    FUNC_0(VAR_11, 48, 0);
    FUNC_0(VAR_11, 49, VAR_0);
    FUNC_0(VAR_11, 51, 0x0200);



    FUNC_0(VAR_11, 53, 1 );
    FUNC_0(VAR_11, 54, VAR_9->cylinders);
    FUNC_0(VAR_11, 55, VAR_9->heads);
    FUNC_0(VAR_11, 56, VAR_9->sectors);
    VAR_10 = VAR_9->cylinders * VAR_9->heads * VAR_9->sectors;
    FUNC_0(VAR_11, 57, VAR_10);
    FUNC_0(VAR_11, 58, VAR_10 >> 16);
    if (VAR_9->mult_sectors)
        FUNC_0(VAR_11, 59, 0x100 | VAR_9->mult_sectors);

    FUNC_0(VAR_11, 60, VAR_9->nb_sectors);
    FUNC_0(VAR_11, 61, VAR_9->nb_sectors >> 16);

    if (VAR_9->is_cf) {
        FUNC_0(VAR_11, 0, 0x848a);
        FUNC_2(VAR_11+27*2, "ATARI800 MICRODRIVE", 40);
        FUNC_0(VAR_11, 49, VAR_0);
        FUNC_0(VAR_11, 51, 2);
        FUNC_0(VAR_11, 52, 1);
    }

    if (VAR_9->is_cdrom) {
        FUNC_0(VAR_11, 0, VAR_5 |
                   VAR_3 |
                   VAR_6 |
                   VAR_2 |
                   VAR_1);
        FUNC_2(VAR_11+27*2, "ATARI800 DVD-ROM", 40);
        FUNC_0(VAR_11, 49, VAR_0);
    }
}
