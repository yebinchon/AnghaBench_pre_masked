
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transport_attrs {int period; } ;
struct spi_internal {TYPE_2__* f; } ;
struct TYPE_3__ {int parent; } ;
struct scsi_target {int starget_data; TYPE_1__ dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_period ) (struct scsi_target*) ;} ;


 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct scsi_target*) ;
 struct spi_internal* FUNC_3 (int ) ;
 struct scsi_target* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct scsi_target *VAR_3 = FUNC_4(VAR_0);
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_3->dev.parent);
 struct spi_internal *VAR_5 = FUNC_3(VAR_4->transportt);
 struct spi_transport_attrs *VAR_6 =
  (struct spi_transport_attrs *)&VAR_3->starget_data;

 if (VAR_5->f->get_period)
  VAR_5->f->get_period(VAR_3);

 return FUNC_1(VAR_2, VAR_6->period);
}
