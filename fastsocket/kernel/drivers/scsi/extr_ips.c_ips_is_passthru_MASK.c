
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__* cmnd; TYPE_1__* device; } ;
struct scatterlist {int offset; } ;
struct TYPE_2__ {scalar_t__ channel; scalar_t__ id; scalar_t__ lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct scatterlist* FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0("ips_is_passthru", 1);

 if (!VAR_3)
  return (0);

 if ((VAR_3->cmnd[0] == VAR_1) &&
     (VAR_3->device->channel == 0) &&
     (VAR_3->device->id == VAR_0) &&
     (VAR_3->device->lun == 0) && FUNC_5(VAR_3)) {
                struct scatterlist *VAR_5 = FUNC_5(VAR_3);
                char *VAR_6;



                FUNC_4(VAR_4);
                VAR_6 = FUNC_1(FUNC_6(VAR_5), VAR_2) + VAR_5->offset;
                if (VAR_6 && VAR_6[0] == 'C' && VAR_6[1] == 'O' &&
                    VAR_6[2] == 'P' && VAR_6[3] == 'P') {
                        FUNC_2(VAR_6 - VAR_5->offset, VAR_2);
                        FUNC_3(VAR_4);
                        return 1;
                }
                FUNC_2(VAR_6 - VAR_5->offset, VAR_2);
                FUNC_3(VAR_4);
 }
 return 0;
}
