
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {scalar_t__ reserved_pebs; scalar_t__ vol_type; scalar_t__ data_pad; } ;
struct ubi_scan_volume {scalar_t__ highest_lnum; scalar_t__ leb_count; scalar_t__ vol_type; scalar_t__ used_ebs; scalar_t__ data_pad; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubi_scan_volume const*) ;
 int FUNC_1 (struct ubi_volume const*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(const struct ubi_volume *VAR_1,
      const struct ubi_scan_volume *VAR_2)
{
 int VAR_3;

 if (VAR_2->highest_lnum >= VAR_1->reserved_pebs) {
  VAR_3 = 1;
  goto bad;
 }
 if (VAR_2->leb_count > VAR_1->reserved_pebs) {
  VAR_3 = 2;
  goto bad;
 }
 if (VAR_2->vol_type != VAR_1->vol_type) {
  VAR_3 = 3;
  goto bad;
 }
 if (VAR_2->used_ebs > VAR_1->reserved_pebs) {
  VAR_3 = 4;
  goto bad;
 }
 if (VAR_2->data_pad != VAR_1->data_pad) {
  VAR_3 = 5;
  goto bad;
 }
 return 0;

bad:
 FUNC_2("bad scanning information, error %d", VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1);
 return -VAR_0;
}
