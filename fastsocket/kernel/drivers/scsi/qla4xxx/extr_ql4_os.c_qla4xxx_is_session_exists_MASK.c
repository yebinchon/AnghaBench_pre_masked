
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct ql4_tuple_ddb {int dummy; } ;
struct dev_db_entry {int dummy; } ;
struct ddb_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_2 (struct scsi_qla_host*,struct ql4_tuple_ddb*,struct ql4_tuple_ddb*,int) ;
 int FUNC_3 (struct dev_db_entry*,struct ql4_tuple_ddb*,int *) ;
 int FUNC_4 (struct ddb_entry*,struct ql4_tuple_ddb*) ;
 struct ddb_entry* FUNC_5 (struct scsi_qla_host*,int) ;
 int FUNC_6 (struct ql4_tuple_ddb*) ;
 struct ql4_tuple_ddb* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct scsi_qla_host *VAR_4,
         struct dev_db_entry *VAR_5)
{
 struct ddb_entry *VAR_6;
 struct ql4_tuple_ddb *VAR_7 = ((void*)0);
 struct ql4_tuple_ddb *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10 = VAR_2;

 VAR_7 = FUNC_7(sizeof(*VAR_7));
 if (!VAR_7) {
  FUNC_0(FUNC_1(VAR_0, VAR_4,
      "Memory Allocation failed.\n"));
  VAR_10 = VAR_3;
  goto exit_check;
 }

 VAR_8 = FUNC_7(sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_0(FUNC_1(VAR_0, VAR_4,
      "Memory Allocation failed.\n"));
  VAR_10 = VAR_3;
  goto exit_check;
 }

 FUNC_3(VAR_5, VAR_7, ((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_6 = FUNC_5(VAR_4, VAR_9);
  if (VAR_6 == ((void*)0))
   continue;

  FUNC_4(VAR_6, VAR_8);
  if (!FUNC_2(VAR_4, VAR_7, VAR_8, 0)) {
   VAR_10 = VAR_3;
   goto exit_check;
  }
 }

exit_check:
 if (VAR_7)
  FUNC_6(VAR_7);
 if (VAR_8)
  FUNC_6(VAR_8);
 return VAR_10;
}
