
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct srp_rport_identifiers {scalar_t__ roles; int port_id; } ;
struct TYPE_11__ {int release; int parent; } ;
struct srp_rport {scalar_t__ roles; TYPE_1__ dev; int port_id; } ;
struct device {int dummy; } ;
struct Scsi_Host {int active_mode; int host_no; struct device shost_gendev; } ;
struct TYPE_12__ {int next_port_id; } ;


 int VAR_0 ;
 struct srp_rport* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct device*) ;
 struct srp_rport* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_10 (struct Scsi_Host*,unsigned long,int ) ;
 TYPE_5__* FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;

struct srp_rport *FUNC_16(struct Scsi_Host *VAR_5,
    struct srp_rport_identifiers *VAR_6)
{
 struct srp_rport *VAR_7;
 struct device *VAR_8 = &VAR_5->shost_gendev;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_7->dev);

 VAR_7->dev.parent = FUNC_6(VAR_8);
 VAR_7->dev.release = VAR_4;

 FUNC_8(VAR_7->port_id, VAR_6->port_id, sizeof(VAR_7->port_id));
 VAR_7->roles = VAR_6->roles;

 VAR_9 = FUNC_1(&FUNC_11(VAR_5)->next_port_id);
 FUNC_2(&VAR_7->dev, "port-%d:%d", VAR_5->host_no, VAR_9);

 FUNC_15(&VAR_7->dev);

 VAR_10 = FUNC_3(&VAR_7->dev);
 if (VAR_10) {
  FUNC_14(&VAR_7->dev);
  FUNC_9(&VAR_7->dev);
  return FUNC_0(VAR_10);
 }

 if (VAR_5->active_mode & VAR_2 &&
     VAR_6->roles == VAR_3) {
  VAR_10 = FUNC_10(VAR_5, (unsigned long)VAR_7,
           VAR_7->port_id);
  if (VAR_10) {
   FUNC_4(&VAR_7->dev);
   FUNC_14(&VAR_7->dev);
   FUNC_9(&VAR_7->dev);
   return FUNC_0(VAR_10);
  }
 }

 FUNC_12(&VAR_7->dev);
 FUNC_13(&VAR_7->dev);

 return VAR_7;
}
