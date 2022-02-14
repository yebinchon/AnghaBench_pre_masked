
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transport_attrs {int min_period; } ;
struct scsi_target {int starget_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,char const*,size_t,int *) ;
 struct scsi_target* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct scsi_target *VAR_4 = FUNC_1(VAR_0);
 struct spi_transport_attrs *VAR_5 =
  (struct spi_transport_attrs *)&VAR_4->starget_data;

 return FUNC_0(VAR_0, VAR_2, VAR_3,
       &VAR_5->min_period);
}
