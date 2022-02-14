
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct TYPE_3__ {void** generic_buffer_virt; struct scsi_cmnd** srb; } ;
typedef TYPE_1__ TW_Device_Extension ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,void*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(TW_Device_Extension *VAR_4, int VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_4->srb[VAR_5];

 if (FUNC_0(VAR_6) < VAR_2 &&
     (VAR_6->sc_data_direction == VAR_1 ||
      VAR_6->sc_data_direction == VAR_0)) {
  if (FUNC_2(VAR_6) == 1) {
   void *VAR_7 = VAR_4->generic_buffer_virt[VAR_5];

   FUNC_1(VAR_6, VAR_7, VAR_3);
  }
 }
}
