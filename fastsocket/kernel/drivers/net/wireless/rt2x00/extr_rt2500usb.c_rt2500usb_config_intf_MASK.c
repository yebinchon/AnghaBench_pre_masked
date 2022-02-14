
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00intf_conf {scalar_t__ type; int sync; int bssid; int mac; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
typedef int __le16 ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_15,
      struct rt2x00_intf *VAR_16,
      struct rt2x00intf_conf *VAR_17,
      const unsigned int VAR_18)
{
 unsigned int VAR_19;
 u16 VAR_20;

 if (VAR_18 & VAR_2) {



  VAR_19 = VAR_7 + FUNC_0(VAR_3, 20);
  FUNC_2(VAR_15, VAR_12, &VAR_20);
  FUNC_4(&VAR_20, VAR_14, VAR_19 >> 6);
  FUNC_4(&VAR_20, VAR_13,
       2 * (VAR_17->type != VAR_6));
  FUNC_3(VAR_15, VAR_12, VAR_20);




  FUNC_2(VAR_15, VAR_8, &VAR_20);
  FUNC_4(&VAR_20, VAR_9, 0);
  FUNC_3(VAR_15, VAR_8, VAR_20);

  FUNC_2(VAR_15, VAR_10, &VAR_20);
  FUNC_4(&VAR_20, VAR_11, VAR_17->sync);
  FUNC_3(VAR_15, VAR_10, VAR_20);
 }

 if (VAR_18 & VAR_1)
  FUNC_1(VAR_15, VAR_4, VAR_17->mac,
           (3 * sizeof(__le16)));

 if (VAR_18 & VAR_0)
  FUNC_1(VAR_15, VAR_5, VAR_17->bssid,
           (3 * sizeof(__le16)));
}
