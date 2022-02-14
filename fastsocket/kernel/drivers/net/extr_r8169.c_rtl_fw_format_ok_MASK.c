
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl_fw {char* version; struct rtl_fw_phy_action phy_action; struct firmware* fw; } ;
struct rtl8169_private {int dummy; } ;
struct fw_info {int version; int fw_len; int fw_start; int magic; } ;
struct firmware {scalar_t__* data; size_t size; } ;
typedef int __le32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct rtl8169_private *VAR_2, struct rtl_fw *VAR_3)
{
 const struct firmware *VAR_4 = VAR_3->fw;
 struct fw_info *VAR_5 = (struct fw_info *)VAR_4->data;
 struct rtl_fw_phy_action *VAR_6 = &VAR_3->phy_action;
 char *VAR_7 = VAR_3->version;
 bool VAR_8 = 0;

 if (VAR_4->size < VAR_0)
  goto out;

 if (!VAR_5->magic) {
  size_t VAR_9, VAR_10, VAR_11;
  u8 VAR_12 = 0;

  if (VAR_4->size < sizeof(*VAR_5))
   goto out;

  for (VAR_9 = 0; VAR_9 < VAR_4->size; VAR_9++)
   VAR_12 += VAR_4->data[VAR_9];
  if (VAR_12 != 0)
   goto out;

  VAR_11 = FUNC_0(VAR_5->fw_start);
  if (VAR_11 > VAR_4->size)
   goto out;

  VAR_10 = FUNC_0(VAR_5->fw_len);
  if (VAR_10 > (VAR_4->size - VAR_11) / VAR_0)
   goto out;

  FUNC_1(VAR_7, VAR_5->version, VAR_1);

  VAR_6->code = (__le32 *)(VAR_4->data + VAR_11);
  VAR_6->size = VAR_10;
 } else {
  if (VAR_4->size % VAR_0)
   goto out;

  FUNC_3(VAR_7, FUNC_2(VAR_2), VAR_1);

  VAR_6->code = (__le32 *)VAR_4->data;
  VAR_6->size = VAR_4->size / VAR_0;
 }
 VAR_7[VAR_1 - 1] = 0;

 VAR_8 = 1;
out:
 return VAR_8;
}
