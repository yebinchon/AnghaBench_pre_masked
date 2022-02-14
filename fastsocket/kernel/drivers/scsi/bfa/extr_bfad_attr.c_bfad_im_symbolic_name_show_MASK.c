
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int bport; } ;
struct TYPE_5__ {TYPE_4__ fabric; } ;
struct bfad_s {TYPE_1__ bfa_fcs; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct TYPE_6__ {int symname; } ;
struct TYPE_7__ {TYPE_2__ sym_name; } ;
struct bfa_lport_attr_s {TYPE_3__ port_cfg; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bfa_lport_attr_s*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct bfad_im_port_s *VAR_6 =
   (struct bfad_im_port_s *) VAR_5->hostdata[0];
 struct bfad_s *VAR_7 = VAR_6->bfad;
 struct bfa_lport_attr_s VAR_8;
 char VAR_9[VAR_0];

 FUNC_0(&VAR_7->bfa_fcs.fabric.bport, &VAR_8);
 FUNC_3(VAR_9, VAR_8.port_cfg.sym_name.symname,
   VAR_0);
 return FUNC_2(VAR_4, VAR_1, "%s\n", VAR_9);
}
