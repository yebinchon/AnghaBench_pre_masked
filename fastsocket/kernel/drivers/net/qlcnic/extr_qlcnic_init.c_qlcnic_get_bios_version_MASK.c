
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct qlcnic_adapter {size_t file_prd_off; TYPE_1__* ahw; struct firmware* fw; } ;
struct firmware {int * data; } ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ fw_type; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct qlcnic_adapter *VAR_3)
{
 const struct firmware *VAR_4 = VAR_3->fw;
 u32 VAR_5, VAR_6 = VAR_3->file_prd_off;
 u8 *VAR_7;
 __le32 VAR_8;

 if (VAR_3->ahw->fw_type != VAR_1) {
  VAR_7 = (u8 *)&VAR_4->data[VAR_0];
  return FUNC_0(*(__le32 *)VAR_7);
 }

 VAR_8 = *((__le32 *)(&VAR_4->data[VAR_6]) + VAR_2);
 VAR_5 = FUNC_0(VAR_8);

 return (VAR_5 << 16) + ((VAR_5 >> 8) & 0xff00) + (VAR_5 >> 24);
}
