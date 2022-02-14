
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bfad_port_s {int fcs_port; } ;
struct bfad_im_port_s {struct bfad_port_s* port; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct bfad_im_port_s *VAR_5 =
   (struct bfad_im_port_s *) VAR_4->hostdata[0];
 struct bfad_port_s *VAR_6 = VAR_5->port;
 u64 VAR_7;

 VAR_7 = FUNC_0(VAR_6->fcs_port);
 return FUNC_3(VAR_3, VAR_0, "0x%llx\n", FUNC_2(VAR_7));
}
