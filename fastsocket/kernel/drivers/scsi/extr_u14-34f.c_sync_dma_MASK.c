
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned int sc_data_direction; } ;
struct mscp {int data_len; int data_address; int sense_len; int sense_addr; struct scsi_cmnd* SCpnt; } ;
struct TYPE_2__ {int pdev; struct mscp* cp; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_2, unsigned int VAR_3) {
   unsigned int VAR_4;
   struct mscp *VAR_5;
   struct scsi_cmnd *VAR_6;

   VAR_5 = &FUNC_1(VAR_3)->cp[VAR_2]; VAR_6 = VAR_5->SCpnt;
   VAR_4 = VAR_6->sc_data_direction;

   if (FUNC_0(VAR_5->sense_addr))
      FUNC_3(FUNC_1(VAR_3)->pdev, FUNC_0(VAR_5->sense_addr),
                          FUNC_0(VAR_5->sense_len), VAR_1);

   if (FUNC_4(VAR_6))
    FUNC_2(FUNC_1(VAR_3)->pdev, FUNC_5(VAR_6),
       FUNC_4(VAR_6), VAR_4);

   if (!FUNC_0(VAR_5->data_len)) VAR_4 = VAR_0;

   if (FUNC_0(VAR_5->data_address))
      FUNC_3(FUNC_1(VAR_3)->pdev, FUNC_0(VAR_5->data_address),
                       FUNC_0(VAR_5->data_len), VAR_4);
}
