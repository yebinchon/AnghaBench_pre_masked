
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vid ;
struct fc_vport_identifiers {int disable; int vport_type; int roles; int node_name; int port_name; } ;
struct fc_vport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int shost_gendev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct Scsi_Host*,int ,int *,struct fc_vport_identifiers*,struct fc_vport**) ;
 int FUNC_2 (struct fc_vport_identifiers*,int ,int) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_3(VAR_3);
 struct fc_vport_identifiers VAR_8;
 struct fc_vport *VAR_9;
 unsigned int VAR_10=VAR_6;
 int VAR_11;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));


 if (VAR_5[VAR_10-1] == '\n')
  VAR_10--;


 if ((VAR_10 != (16+1+16)) || (VAR_5[16] != ':'))
  return -VAR_0;

 VAR_11 = FUNC_0(&VAR_5[0], &VAR_8.port_name);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(&VAR_5[17], &VAR_8.node_name);
 if (VAR_11)
  return VAR_11;

 VAR_8.roles = VAR_2;
 VAR_8.vport_type = VAR_1;

 VAR_8.disable = 0;


 VAR_11 = FUNC_1(VAR_7, 0, &VAR_7->shost_gendev, &VAR_8, &VAR_9);
 return VAR_11 ? VAR_11 : VAR_6;
}
