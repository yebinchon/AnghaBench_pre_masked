
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* cmnd; TYPE_1__* device; } ;
struct TYPE_2__ {int lun; int id; } ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static char *FUNC_3(struct scsi_cmnd *VAR_0, char *VAR_1, char *VAR_2,
         int VAR_3)
{
    int VAR_4, VAR_5;
    unsigned char *VAR_6;
    FUNC_2("scsi%d: destination target %d, lun %d\n",
     FUNC_1(VAR_0), VAR_0->device->id, VAR_0->device->lun);
    FUNC_2("        command = ");
    VAR_6 = VAR_0->cmnd;
    FUNC_2("%2d (0x%02x)", VAR_6[0], VAR_6[0]);
    for (VAR_4 = 1, VAR_5 = FUNC_0(VAR_6[0]); VAR_4 < VAR_5; ++VAR_4)
 FUNC_2(" %02x", VAR_6[VAR_4]);
    FUNC_2("\n");
    return VAR_1;
}
