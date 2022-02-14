
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int shost_gendev; } ;


 struct device* FUNC_0 (int *,void*,int (*) (struct device*,void*)) ;

struct device *
FUNC_1(struct Scsi_Host *VAR_0, void *VAR_1,
     int (*VAR_2)(struct device *VAR_3, void *VAR_4))
{
 return FUNC_0(&VAR_0->shost_gendev, VAR_1, VAR_2);
}
