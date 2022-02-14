
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bfad_s {int bfad_lock; } ;
struct bfad_port_s {int fcs_port; } ;
struct bfad_im_port_s {struct bfad_s* bfad; struct bfad_port_s* port; } ;
struct bfa_rport_qualifier_s {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bfa_rport_qualifier_s*,int*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct bfa_rport_qualifier_s*) ;
 struct bfa_rport_qualifier_s* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct bfad_im_port_s *VAR_6 =
   (struct bfad_im_port_s *) VAR_5->hostdata[0];
 struct bfad_port_s *VAR_7 = VAR_6->port;
 struct bfad_s *VAR_8 = VAR_6->bfad;
 int VAR_9 = 2048;
 struct bfa_rport_qualifier_s *VAR_10 = ((void*)0);
 unsigned long VAR_11;

 VAR_10 = FUNC_3(sizeof(struct bfa_rport_qualifier_s) * VAR_9,
    VAR_0);
 if (VAR_10 == ((void*)0))
  return FUNC_4(VAR_4, VAR_1, "Failed\n");

 FUNC_5(&VAR_8->bfad_lock, VAR_11);
 FUNC_0(VAR_7->fcs_port, VAR_10, &VAR_9);
 FUNC_6(&VAR_8->bfad_lock, VAR_11);
 FUNC_2(VAR_10);

 return FUNC_4(VAR_4, VAR_1, "%d\n", VAR_9);
}
