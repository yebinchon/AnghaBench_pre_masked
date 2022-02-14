
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_2__ {int len; scalar_t__ va; scalar_t__ key; } ;
struct srp_indirect_buf {struct srp_direct_buf* desc_list; TYPE_1__ table_desc; void* len; } ;
struct srp_event_struct {struct srp_direct_buf* ext_list; scalar_t__ ext_list_token; } ;
struct srp_direct_buf {int dummy; } ;
struct srp_cmd {scalar_t__ add_data; } ;
struct scsi_cmnd {int device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct scsi_cmnd*,int,struct srp_direct_buf*) ;
 int FUNC_3 (struct srp_direct_buf*,struct srp_direct_buf*,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (struct scsi_cmnd*,struct srp_cmd*,int) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_4,
         struct srp_event_struct *VAR_5,
         struct srp_cmd *VAR_6, struct device *VAR_7)
{

 int VAR_8;
 u64 VAR_9 = 0;
 struct srp_direct_buf *VAR_10 =
  (struct srp_direct_buf *) VAR_6->add_data;
 struct srp_indirect_buf *VAR_11 =
  (struct srp_indirect_buf *) VAR_10;

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8)
  return 1;
 else if (VAR_8 < 0)
  return 0;

 FUNC_7(VAR_4, VAR_6, VAR_8);


 if (VAR_8 == 1) {
  FUNC_2(VAR_4, VAR_8, VAR_10);
  return 1;
 }

 VAR_11->table_desc.va = 0;
 VAR_11->table_desc.len = VAR_8 * sizeof(struct srp_direct_buf);
 VAR_11->table_desc.key = 0;

 if (VAR_8 <= VAR_2) {
  VAR_9 = FUNC_2(VAR_4, VAR_8,
        &VAR_11->desc_list[0]);
  VAR_11->len = VAR_9;
  return 1;
 }


 if (!VAR_5->ext_list) {
  VAR_5->ext_list = (struct srp_direct_buf *)
   FUNC_0(VAR_7,
        VAR_3 * sizeof(struct srp_direct_buf),
        &VAR_5->ext_list_token, 0);
  if (!VAR_5->ext_list) {
   if (!FUNC_1(VAR_0))
    FUNC_6(VAR_1, VAR_4->device,
                "Can't allocate memory "
                "for indirect table\n");
   FUNC_5(VAR_4);
   return 0;
  }
 }

 VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_5->ext_list);

 VAR_11->len = VAR_9;
 VAR_11->table_desc.va = VAR_5->ext_list_token;
 VAR_11->table_desc.len = VAR_8 * sizeof(VAR_11->desc_list[0]);
 FUNC_3(VAR_11->desc_list, VAR_5->ext_list,
        VAR_2 * sizeof(struct srp_direct_buf));
  return 1;
}
