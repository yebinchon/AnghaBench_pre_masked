
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transport_attrs {int min_period; } ;
struct spi_internal {TYPE_1__* f; } ;
struct TYPE_4__ {int parent; } ;
struct scsi_target {int starget_data; TYPE_2__ dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* set_period ) (struct scsi_target*,int) ;} ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char const*,size_t,int*) ;
 int FUNC_2 (struct scsi_target*,int) ;
 struct spi_internal* FUNC_3 (int ) ;
 struct scsi_target* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct scsi_target *VAR_5 = FUNC_4(VAR_1);
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_5->dev.parent);
 struct spi_internal *VAR_7 = FUNC_3(VAR_6->transportt);
 struct spi_transport_attrs *VAR_8 =
  (struct spi_transport_attrs *)&VAR_5->starget_data;
 int VAR_9, VAR_10;

 if (!VAR_7->f->set_period)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_1, VAR_3, VAR_4, &VAR_9);

 if (VAR_9 < VAR_8->min_period)
  VAR_9 = VAR_8->min_period;

 VAR_7->f->set_period(VAR_5, VAR_9);

 return VAR_10;
}
