
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct se_session {TYPE_1__* se_node_acl; } ;
struct se_dev_entry {int lun_flags; int mapped_lun; } ;
struct se_cmd {int data_length; struct se_session* se_sess; } ;
struct scsi_lun {int dummy; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int device_list_lock; struct se_dev_entry** device_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,struct scsi_lun*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 unsigned char* FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;

sense_reason_t FUNC_7(struct se_cmd *VAR_5)
{
 struct se_dev_entry *VAR_6;
 struct se_session *VAR_7 = VAR_5->se_sess;
 unsigned char *VAR_8;
 u32 VAR_9 = 0, VAR_10 = 8, VAR_11;

 if (VAR_5->data_length < 16) {
  FUNC_1("REPORT LUNS allocation length %u too small\n",
   VAR_5->data_length);
  return VAR_1;
 }

 VAR_8 = FUNC_5(VAR_5);
 if (!VAR_8)
  return VAR_2;






 if (!VAR_7) {
  FUNC_0(0, (struct scsi_lun *)&VAR_8[VAR_10]);
  VAR_9 = 1;
  goto done;
 }

 FUNC_2(&VAR_7->se_node_acl->device_list_lock);
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_6 = VAR_7->se_node_acl->device_list[VAR_11];
  if (!(VAR_6->lun_flags & VAR_3))
   continue;





  VAR_9++;
  if ((VAR_10 + 8) > VAR_5->data_length)
   continue;

  FUNC_0(VAR_6->mapped_lun, (struct scsi_lun *)&VAR_8[VAR_10]);
  VAR_10 += 8;
 }
 FUNC_3(&VAR_7->se_node_acl->device_list_lock);




done:
 VAR_9 *= 8;
 VAR_8[0] = ((VAR_9 >> 24) & 0xff);
 VAR_8[1] = ((VAR_9 >> 16) & 0xff);
 VAR_8[2] = ((VAR_9 >> 8) & 0xff);
 VAR_8[3] = (VAR_9 & 0xff);
 FUNC_6(VAR_5);

 FUNC_4(VAR_5, VAR_0);
 return 0;
}
