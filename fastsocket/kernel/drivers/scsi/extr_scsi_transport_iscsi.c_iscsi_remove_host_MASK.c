
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct iscsi_cls_host {scalar_t__ bsg_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct transport_container *VAR_0,
        struct device *VAR_1, struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_1);
 struct iscsi_cls_host *VAR_4 = VAR_3->shost_data;

 if (VAR_4->bsg_q) {
  FUNC_1(VAR_4->bsg_q);
  FUNC_0(VAR_4->bsg_q);
 }
 return 0;
}
