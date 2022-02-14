
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_1__* host; } ;
struct enclosure_device {int edev; } ;
struct TYPE_2__ {int shost_gendev; } ;


 struct enclosure_device* FUNC_0 (int *,struct enclosure_device*) ;
 int FUNC_1 (struct enclosure_device*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_0)
{
 struct enclosure_device *VAR_1, *VAR_2 = ((void*)0);

 while ((VAR_1 = FUNC_0(&VAR_0->host->shost_gendev, VAR_2)) != ((void*)0)) {
  VAR_2 = VAR_1;
  if (!FUNC_1(VAR_1, &VAR_0->sdev_gendev))
   break;
 }
 if (VAR_1)
  FUNC_2(&VAR_1->edev);
}
