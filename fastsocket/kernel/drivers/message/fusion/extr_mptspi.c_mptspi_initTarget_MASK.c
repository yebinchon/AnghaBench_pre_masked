
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scsi_device {scalar_t__ inq_periph_qual; scalar_t__ type; int inquiry_len; char* inquiry; } ;
struct TYPE_12__ {scalar_t__ type; int tflags; int id; int channel; } ;
typedef TYPE_3__ VirtTarget ;
struct TYPE_13__ {TYPE_2__* ioc; } ;
struct TYPE_10__ {scalar_t__ Saf_Te; } ;
struct TYPE_11__ {TYPE_1__ spi_data; } ;
typedef TYPE_4__ MPT_SCSI_HOST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,struct scsi_device*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(MPT_SCSI_HOST *VAR_2, VirtTarget *VAR_3,
      struct scsi_device *VAR_4)
{




 if (VAR_4->inq_periph_qual != 0)
  return;

 if (VAR_3 == ((void*)0))
  return;

 VAR_3->type = VAR_4->type;

 if ((VAR_4->type == VAR_1) && (VAR_2->ioc->spi_data.Saf_Te)) {


  VAR_3->tflags |= VAR_0;
  FUNC_1(VAR_2, VAR_3->channel, VAR_3->id);
 }else if ((VAR_4->type == VAR_1) &&
  !(VAR_3->tflags & VAR_0 )) {
  if (VAR_4->inquiry_len > 49 ) {
   if (VAR_4->inquiry[44] == 'S' &&
       VAR_4->inquiry[45] == 'A' &&
       VAR_4->inquiry[46] == 'F' &&
       VAR_4->inquiry[47] == '-' &&
       VAR_4->inquiry[48] == 'T' &&
       VAR_4->inquiry[49] == 'E' ) {
    VAR_3->tflags |= VAR_0;
    FUNC_1(VAR_2, VAR_3->channel, VAR_3->id);
   }
  }
 }
 FUNC_0(VAR_2, VAR_3, VAR_4);
}
