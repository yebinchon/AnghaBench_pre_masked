
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int vol_type; int data_pad; int used_ebs; int vol_id; } ;
struct ubi_scan_volume {scalar_t__ leb_count; int vol_id; scalar_t__ vol_type; int used_ebs; int data_pad; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ubi_scan_volume const*) ;
 int FUNC_3 (struct ubi_vid_hdr const*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(const struct ubi_vid_hdr *VAR_4,
       const struct ubi_scan_volume *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_4->vol_type;
 int VAR_8 = FUNC_0(VAR_4->vol_id);
 int VAR_9 = FUNC_0(VAR_4->used_ebs);
 int VAR_10 = FUNC_0(VAR_4->data_pad);

 if (VAR_5->leb_count != 0) {
  int VAR_11;







  if (VAR_8 != VAR_5->vol_id) {
   FUNC_1("inconsistent vol_id");
   goto bad;
  }

  if (VAR_5->vol_type == VAR_1)
   VAR_11 = VAR_3;
  else
   VAR_11 = VAR_2;

  if (VAR_7 != VAR_11) {
   FUNC_1("inconsistent vol_type");
   goto bad;
  }

  if (VAR_9 != VAR_5->used_ebs) {
   FUNC_1("inconsistent used_ebs");
   goto bad;
  }

  if (VAR_10 != VAR_5->data_pad) {
   FUNC_1("inconsistent data_pad");
   goto bad;
  }
 }

 return 0;

bad:
 FUNC_4("inconsistent VID header at PEB %d", VAR_6);
 FUNC_3(VAR_4);
 FUNC_2(VAR_5);
 return -VAR_0;
}
