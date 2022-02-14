
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mesh_id_len; char* mesh_id; } ;
struct TYPE_4__ {TYPE_1__ val; } ;
struct mrvl_mesh_defaults {TYPE_2__ meshie; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*,struct mrvl_mesh_defaults*) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct mrvl_mesh_defaults VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_5);

 if (VAR_7)
  return VAR_7;

 if (VAR_5.meshie.val.mesh_id_len > VAR_0) {
  FUNC_0("inconsistent mesh ID length");
  VAR_5.meshie.val.mesh_id_len = VAR_0;
 }


 VAR_6 = VAR_5.meshie.val.mesh_id_len + 2;
 VAR_6 = (VAR_1 > VAR_6) ? VAR_6 : VAR_1;

 VAR_5.meshie.val.mesh_id[VAR_5.meshie.val.mesh_id_len] = '\0';

 return FUNC_2(VAR_4, VAR_6, "%s\n", VAR_5.meshie.val.mesh_id);
}
