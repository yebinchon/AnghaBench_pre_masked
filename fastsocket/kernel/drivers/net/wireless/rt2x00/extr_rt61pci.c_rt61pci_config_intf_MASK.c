
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00intf_conf {int sync; void** bssid; void** mac; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {int dummy; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,void**,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_9,
    struct rt2x00_intf *VAR_10,
    struct rt2x00intf_conf *VAR_11,
    const unsigned int VAR_12)
{
 u32 VAR_13;

 if (VAR_12 & VAR_2) {



  FUNC_4(VAR_9, VAR_7, &VAR_13);
  FUNC_2(&VAR_13, VAR_8, VAR_11->sync);
  FUNC_5(VAR_9, VAR_7, VAR_13);
 }

 if (VAR_12 & VAR_1) {
  VAR_13 = FUNC_1(VAR_11->mac[1]);
  FUNC_2(&VAR_13, VAR_4, 0xff);
  VAR_11->mac[1] = FUNC_0(VAR_13);

  FUNC_3(VAR_9, VAR_3,
            VAR_11->mac, sizeof(VAR_11->mac));
 }

 if (VAR_12 & VAR_0) {
  VAR_13 = FUNC_1(VAR_11->bssid[1]);
  FUNC_2(&VAR_13, VAR_6, 3);
  VAR_11->bssid[1] = FUNC_0(VAR_13);

  FUNC_3(VAR_9, VAR_5,
            VAR_11->bssid,
            sizeof(VAR_11->bssid));
 }
}
