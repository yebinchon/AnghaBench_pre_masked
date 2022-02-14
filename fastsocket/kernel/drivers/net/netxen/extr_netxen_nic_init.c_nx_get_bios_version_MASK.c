
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {size_t file_prd_off; scalar_t__ fw_type; struct firmware* fw; } ;
struct firmware {int * data; } ;
typedef size_t __le32 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static __le32
FUNC_1(struct netxen_adapter *VAR_3)
{
 const struct firmware *VAR_4 = VAR_3->fw;
 __le32 VAR_5, VAR_6 = VAR_3->file_prd_off;

 if (VAR_3->fw_type == VAR_1) {
  VAR_5 = FUNC_0(*((u32 *) (&VAR_4->data[VAR_6])
      + VAR_2));
  return (VAR_5 << 16) + ((VAR_5 >> 8) & 0xff00) +
       (VAR_5 >> 24);
 } else
  return FUNC_0(*(u32 *)&VAR_4->data[VAR_0]);

}
