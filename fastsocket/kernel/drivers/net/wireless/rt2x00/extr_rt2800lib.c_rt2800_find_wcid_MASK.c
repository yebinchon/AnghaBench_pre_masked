
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wcid_entry ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct mac_wcid_entry {int mac; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,struct mac_wcid_entry*,int) ;

__attribute__((used)) static inline int FUNC_3(struct rt2x00_dev *VAR_0)
{
 struct mac_wcid_entry VAR_1;
 int VAR_2;
 u32 VAR_3;
 for (VAR_2 = 33; VAR_2 <= 222; VAR_2++) {
  VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_0, VAR_3, &VAR_1,
       sizeof(VAR_1));
  if (FUNC_1(VAR_1.mac))
   return VAR_2;
 }





 return -1;
}
