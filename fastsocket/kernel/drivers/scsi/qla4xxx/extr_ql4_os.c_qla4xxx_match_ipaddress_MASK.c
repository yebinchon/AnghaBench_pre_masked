
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_2__ {int options; } ;
struct ddb_entry {TYPE_1__ fw_ddb_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int *,char,int *) ;
 int FUNC_1 (char*,int ,int *,char,int *) ;
 int FUNC_2 (char*,char*,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct scsi_qla_host *VAR_5,
       struct ddb_entry *VAR_6,
       char *VAR_7,
       char *VAR_8)
{
 uint8_t VAR_9[VAR_2];
 char VAR_10[VAR_0];
 int VAR_11 = VAR_4, VAR_12 = 0;

 if (VAR_6->fw_ddb_entry.options & VAR_1) {
  VAR_12 = FUNC_1(VAR_8, FUNC_4(VAR_8), VAR_9,
          '\0', ((void*)0));
  if (VAR_12 == 0) {
   VAR_11 = VAR_3;
   goto out_match;
  }
  VAR_12 = FUNC_2(VAR_10, "%pI6", VAR_9);
 } else {
  VAR_12 = FUNC_0(VAR_8, FUNC_4(VAR_8), VAR_9,
          '\0', ((void*)0));
  if (VAR_12 == 0) {
   VAR_11 = VAR_3;
   goto out_match;
  }
  VAR_12 = FUNC_2(VAR_10, "%pI4", VAR_9);
 }

 if (FUNC_3(VAR_7, VAR_10))
  VAR_11 = VAR_3;

out_match:
 return VAR_11;
}
