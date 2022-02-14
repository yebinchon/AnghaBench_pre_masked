
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct firmware {scalar_t__ size; int data; } ;
struct Scsi_Host {int shost_gendev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char*,int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct Scsi_Host *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 const struct firmware *VAR_5;

 VAR_4 = FUNC_1(&VAR_5, "sas_addr", &VAR_2->shost_gendev);
 if (VAR_4)
  return VAR_4;

 if (VAR_5->size < VAR_1) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_3, VAR_5->data);

out:
 FUNC_0(VAR_5);
 return VAR_4;
}
