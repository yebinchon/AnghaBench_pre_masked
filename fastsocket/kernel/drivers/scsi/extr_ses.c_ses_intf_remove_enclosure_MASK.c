
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_device {struct ses_device* page2; struct ses_device* page1; struct ses_device* page10; } ;
struct scsi_device {int sdev_gendev; } ;
struct enclosure_device {int edev; TYPE_1__* component; struct ses_device* scratch; } ;
struct TYPE_2__ {struct ses_device* scratch; } ;


 struct enclosure_device* FUNC_0 (int *,int *) ;
 int FUNC_1 (struct enclosure_device*) ;
 int FUNC_2 (struct ses_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct scsi_device *VAR_0)
{
 struct enclosure_device *VAR_1;
 struct ses_device *VAR_2;


 VAR_1 = FUNC_0(&VAR_0->sdev_gendev, ((void*)0));
 if (!VAR_1)
  return;

 VAR_2 = VAR_1->scratch;
 VAR_1->scratch = ((void*)0);

 FUNC_2(VAR_2->page10);
 FUNC_2(VAR_2->page1);
 FUNC_2(VAR_2->page2);
 FUNC_2(VAR_2);

 FUNC_2(VAR_1->component[0].scratch);

 FUNC_3(&VAR_1->edev);
 FUNC_1(VAR_1);
}
