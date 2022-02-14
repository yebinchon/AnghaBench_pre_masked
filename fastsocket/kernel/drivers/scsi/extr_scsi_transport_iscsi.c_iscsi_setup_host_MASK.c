
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct iscsi_cls_host {int mutex; int nr_scans; } ;
struct device {int dummy; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int FUNC_0 (int *,int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct Scsi_Host*,struct iscsi_cls_host*) ;
 int FUNC_3 (struct iscsi_cls_host*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct transport_container *VAR_0, struct device *VAR_1,
       struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct iscsi_cls_host *VAR_4 = VAR_3->shost_data;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 FUNC_0(&VAR_4->nr_scans, 0);
 FUNC_4(&VAR_4->mutex);

 FUNC_2(VAR_3, VAR_4);


 return 0;
}
