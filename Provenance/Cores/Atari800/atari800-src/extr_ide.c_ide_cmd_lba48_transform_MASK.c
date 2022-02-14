
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int lba48; int nsector; int hob_nsector; } ;



__attribute__((used)) static void FUNC_0(struct ide_device *VAR_0, int VAR_1) {
    VAR_0->lba48 = VAR_1;
    if (!VAR_0->lba48) {
        if (!VAR_0->nsector)
            VAR_0->nsector = 256;
    } else {
        if (!VAR_0->nsector && !VAR_0->hob_nsector)
            VAR_0->nsector = 65536;
        else
            VAR_0->nsector = (VAR_0->hob_nsector << 8) | VAR_0->nsector;
    }
}
