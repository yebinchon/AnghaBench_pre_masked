
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wcid_entry ;
typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct mac_wcid_entry {int mac; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct mac_wcid_entry*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct mac_wcid_entry*,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_1,
          const u8 *VAR_2,
          int VAR_3)
{
 struct mac_wcid_entry VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3);

 FUNC_2(&VAR_4, 0xff, sizeof(VAR_4));
 if (VAR_2)
  FUNC_1(VAR_4.mac, VAR_2, VAR_0);

 FUNC_3(VAR_1, VAR_5,
          &VAR_4, sizeof(VAR_4));
}
