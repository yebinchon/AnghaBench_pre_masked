
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_scan_info {int mean_ec; int max_ec; scalar_t__ bad_peb_count; } ;
struct ubi_device {int vtbl; int mean_ec; int max_ec; scalar_t__ bad_peb_count; scalar_t__ peb_count; scalar_t__ good_peb_count; } ;


 scalar_t__ FUNC_0 (struct ubi_scan_info*) ;
 int FUNC_1 (struct ubi_scan_info*) ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (struct ubi_device*,struct ubi_scan_info*) ;
 int FUNC_4 (struct ubi_device*,struct ubi_scan_info*) ;
 struct ubi_scan_info* FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (struct ubi_scan_info*) ;
 int FUNC_7 (struct ubi_device*) ;
 int FUNC_8 (struct ubi_device*,struct ubi_scan_info*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_0)
{
 int VAR_1;
 struct ubi_scan_info *VAR_2;

 VAR_2 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_0->bad_peb_count = VAR_2->bad_peb_count;
 VAR_0->good_peb_count = VAR_0->peb_count - VAR_0->bad_peb_count;
 VAR_0->max_ec = VAR_2->max_ec;
 VAR_0->mean_ec = VAR_2->mean_ec;

 VAR_1 = FUNC_4(VAR_0, VAR_2);
 if (VAR_1)
  goto out_si;

 VAR_1 = FUNC_8(VAR_0, VAR_2);
 if (VAR_1)
  goto out_vtbl;

 VAR_1 = FUNC_3(VAR_0, VAR_2);
 if (VAR_1)
  goto out_wl;

 FUNC_6(VAR_2);
 return 0;

out_wl:
 FUNC_7(VAR_0);
out_vtbl:
 FUNC_2(VAR_0);
 FUNC_9(VAR_0->vtbl);
out_si:
 FUNC_6(VAR_2);
 return VAR_1;
}
