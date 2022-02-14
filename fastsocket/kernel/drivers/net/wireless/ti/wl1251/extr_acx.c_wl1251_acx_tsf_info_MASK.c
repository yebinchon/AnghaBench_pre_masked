
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wl1251 {int dummy; } ;
struct acx_tsf_info {int current_tsf_lsb; scalar_t__ current_tsf_msb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acx_tsf_info*) ;
 struct acx_tsf_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_tsf_info*,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct wl1251 *VAR_3, u64 *VAR_4)
{
 struct acx_tsf_info *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_0,
         VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_3("ACX_FW_REV interrogate failed");
  goto out;
 }

 *VAR_4 = VAR_5->current_tsf_lsb |
  ((u64)VAR_5->current_tsf_msb << 32);

out:
 FUNC_0(VAR_5);
 return VAR_6;
}
