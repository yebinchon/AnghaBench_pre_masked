
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int ioc; } ;
struct bfad_s {TYPE_1__ bfa; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
     char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_3(VAR_3);
 struct bfad_im_port_s *VAR_7 =
   (struct bfad_im_port_s *) VAR_6->hostdata[0];
 struct bfad_s *VAR_8 = VAR_7->bfad;
 char VAR_9[VAR_1];
 char VAR_10[VAR_0];
 int VAR_11 = 0;

 FUNC_0(&VAR_8->bfa, VAR_9);
 VAR_11 = FUNC_1(&VAR_8->bfa);
 if (!FUNC_5(VAR_9, "Brocade-425"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 4Gbps PCIe dual port FC HBA");
 else if (!FUNC_5(VAR_9, "Brocade-825"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 8Gbps PCIe dual port FC HBA");
 else if (!FUNC_5(VAR_9, "Brocade-42B"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 4Gbps PCIe dual port FC HBA for HP");
 else if (!FUNC_5(VAR_9, "Brocade-82B"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 8Gbps PCIe dual port FC HBA for HP");
 else if (!FUNC_5(VAR_9, "Brocade-1010"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 10Gbps single port CNA");
 else if (!FUNC_5(VAR_9, "Brocade-1020"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 10Gbps dual port CNA");
 else if (!FUNC_5(VAR_9, "Brocade-1007"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 10Gbps CNA for IBM Blade Center");
 else if (!FUNC_5(VAR_9, "Brocade-415"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 4Gbps PCIe single port FC HBA");
 else if (!FUNC_5(VAR_9, "Brocade-815"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 8Gbps PCIe single port FC HBA");
 else if (!FUNC_5(VAR_9, "Brocade-41B"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 4Gbps PCIe single port FC HBA for HP");
 else if (!FUNC_5(VAR_9, "Brocade-81B"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 8Gbps PCIe single port FC HBA for HP");
 else if (!FUNC_5(VAR_9, "Brocade-804"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 8Gbps FC HBA for HP Bladesystem C-class");
 else if (!FUNC_5(VAR_9, "Brocade-1741"))
  FUNC_4(VAR_10, VAR_0,
   "Brocade 10Gbps CNA for Dell M-Series Blade Servers");
 else if (FUNC_6(VAR_9, "Brocade-1860")) {
  if (VAR_11 == 1 && FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 10Gbps single port CNA");
  else if (VAR_11 == 1 && !FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 16Gbps PCIe single port FC HBA");
  else if (VAR_11 == 2 && FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 10Gbps dual port CNA");
  else if (VAR_11 == 2 && !FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 16Gbps PCIe dual port FC HBA");
 } else if (!FUNC_5(VAR_9, "Brocade-1867")) {
  if (VAR_11 == 1 && !FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 16Gbps PCIe single port FC HBA for IBM");
  else if (VAR_11 == 2 && !FUNC_2(&VAR_8->bfa.ioc))
   FUNC_4(VAR_10, VAR_0,
    "Brocade 16Gbps PCIe dual port FC HBA for IBM");
 } else
  FUNC_4(VAR_10, VAR_0,
   "Invalid Model");

 return FUNC_4(VAR_5, VAR_2, "%s\n", VAR_10);
}
