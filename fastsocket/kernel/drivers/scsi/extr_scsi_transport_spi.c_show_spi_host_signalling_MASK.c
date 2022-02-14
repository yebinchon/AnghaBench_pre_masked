
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_signalling ) (struct Scsi_Host*) ;} ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct spi_internal* FUNC_4 (int ) ;
 struct Scsi_Host* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_5(VAR_0);
 struct spi_internal *VAR_4 = FUNC_4(VAR_3->transportt);

 if (VAR_4->f->get_signalling)
  VAR_4->f->get_signalling(VAR_3);

 return FUNC_2(VAR_2, "%s\n", FUNC_0(FUNC_1(VAR_3)));
}
