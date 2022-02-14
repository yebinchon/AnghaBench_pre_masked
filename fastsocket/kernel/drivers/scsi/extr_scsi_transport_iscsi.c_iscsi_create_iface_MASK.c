
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct iscsi_transport {int dummy; } ;
struct TYPE_4__ {int parent; int kobj; int * class; int release; } ;
struct iscsi_iface {TYPE_1__ dev; struct iscsi_iface* dd_data; scalar_t__ iface_num; scalar_t__ iface_type; struct iscsi_transport* transport; } ;
struct Scsi_Host {int host_no; int shost_gendev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct iscsi_iface*) ;
 struct iscsi_iface* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;

struct iscsi_iface *
FUNC_8(struct Scsi_Host *VAR_5, struct iscsi_transport *VAR_6,
     uint32_t VAR_7, uint32_t VAR_8, int VAR_9)
{
 struct iscsi_iface *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(sizeof(*VAR_10) + VAR_9, VAR_0);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->transport = VAR_6;
 VAR_10->iface_type = VAR_7;
 VAR_10->iface_num = VAR_8;
 VAR_10->dev.release = VAR_4;
 VAR_10->dev.class = &VAR_2;

 VAR_10->dev.parent = FUNC_3(&VAR_5->shost_gendev);
 if (VAR_7 == VAR_1)
  FUNC_0(&VAR_10->dev, "ipv4-iface-%u-%u", VAR_5->host_no,
        VAR_8);
 else
  FUNC_0(&VAR_10->dev, "ipv6-iface-%u-%u", VAR_5->host_no,
        VAR_8);

 VAR_11 = FUNC_1(&VAR_10->dev);
 if (VAR_11)
  goto free_iface;

 VAR_11 = FUNC_7(&VAR_10->dev.kobj, &VAR_3);
 if (VAR_11)
  goto unreg_iface;

 if (VAR_9)
  VAR_10->dd_data = &VAR_10[1];
 return VAR_10;

unreg_iface:
 FUNC_2(&VAR_10->dev);
 return ((void*)0);

free_iface:
 FUNC_6(VAR_10->dev.parent);
 FUNC_4(VAR_10);
 return ((void*)0);
}
