
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_vid_hdr {int sqnum; void* lnum; void* data_pad; void* used_ebs; void* data_size; int compat; void* vol_id; int vol_type; } ;
struct ubi_scan_volume {int dummy; } ;
struct TYPE_2__ {int list; } ;
struct ubi_scan_leb {TYPE_1__ u; int ec; int pnum; } ;
struct ubi_scan_info {int corr; int max_sqnum; } ;
struct ubi_device {int vtbl_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ubi_scan_leb*) ;
 int FUNC_1 (struct ubi_scan_leb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubi_scan_leb*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_7 (struct ubi_device*,void*,int ,int ,int ) ;
 int FUNC_8 (struct ubi_device*,int ,struct ubi_vid_hdr*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct ubi_device*,struct ubi_scan_info*,int ,int ,struct ubi_vid_hdr*,int ) ;
 struct ubi_scan_leb* FUNC_11 (struct ubi_scan_volume*,int) ;
 struct ubi_scan_volume* FUNC_12 (struct ubi_scan_info*,int) ;
 struct ubi_scan_leb* FUNC_13 (struct ubi_device*,struct ubi_scan_info*) ;
 struct ubi_vid_hdr* FUNC_14 (struct ubi_device*,int ) ;

__attribute__((used)) static int FUNC_15(struct ubi_device *VAR_6, struct ubi_scan_info *VAR_7,
         int VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 static struct ubi_vid_hdr *VAR_12;
 struct ubi_scan_volume *VAR_13;
 struct ubi_scan_leb *VAR_14, *VAR_15 = ((void*)0);

 FUNC_9("create volume table (copy #%d)", VAR_8 + 1);

 VAR_12 = FUNC_14(VAR_6, VAR_2);
 if (!VAR_12)
  return -VAR_1;






 VAR_13 = FUNC_12(VAR_7, VAR_4);
 if (VAR_13)
  VAR_15 = FUNC_11(VAR_13, VAR_8);

retry:
 VAR_14 = FUNC_13(VAR_6, VAR_7);
 if (FUNC_0(VAR_14)) {
  VAR_10 = FUNC_1(VAR_14);
  goto out_free;
 }

 VAR_12->vol_type = VAR_5;
 VAR_12->vol_id = FUNC_2(VAR_4);
 VAR_12->compat = VAR_3;
 VAR_12->data_size = VAR_12->used_ebs =
        VAR_12->data_pad = FUNC_2(0);
 VAR_12->lnum = FUNC_2(VAR_8);
 VAR_12->sqnum = FUNC_3(++VAR_7->max_sqnum);


 VAR_10 = FUNC_8(VAR_6, VAR_14->pnum, VAR_12);
 if (VAR_10)
  goto write_error;


 VAR_10 = FUNC_7(VAR_6, VAR_9, VAR_14->pnum, 0, VAR_6->vtbl_size);
 if (VAR_10)
  goto write_error;





 VAR_10 = FUNC_10(VAR_6, VAR_7, VAR_14->pnum, VAR_14->ec,
    VAR_12, 0);
 FUNC_4(VAR_14);
 FUNC_6(VAR_6, VAR_12);
 return VAR_10;

write_error:
 if (VAR_10 == -VAR_0 && ++VAR_11 <= 5) {




  FUNC_5(&VAR_14->u.list, &VAR_7->corr);
  goto retry;
 }
 FUNC_4(VAR_14);
out_free:
 FUNC_6(VAR_6, VAR_12);
 return VAR_10;

}
