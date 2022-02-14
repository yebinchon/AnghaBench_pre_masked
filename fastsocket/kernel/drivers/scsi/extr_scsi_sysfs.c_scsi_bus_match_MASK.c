
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ inq_periph_qual; scalar_t__ no_uld_attach; } ;
struct device_driver {int dummy; } ;
struct device {int * type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct scsi_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, struct device_driver *VAR_3)
{
 struct scsi_device *VAR_4;

 if (VAR_2->type != &VAR_1)
  return 0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->no_uld_attach)
  return 0;
 return (VAR_4->inq_periph_qual == VAR_0)? 1: 0;
}
