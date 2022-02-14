
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl3501_card {int esbq_confirm; int sig_pwr_mgmt_confirm; int sig_get_confirm; } ;
struct net_device {int dummy; } ;
typedef int sig_id ;
typedef int addr ;
 int FUNC_0 (int,char*) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct wl3501_card*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct wl3501_card*,int) ;
 int FUNC_5 (struct wl3501_card*) ;
 int FUNC_6 (struct wl3501_card*) ;
 int FUNC_7 (struct wl3501_card*) ;
 int FUNC_8 (struct wl3501_card*,int,int *,int) ;
 int FUNC_9 (struct wl3501_card*,int,int*,int) ;
 int FUNC_10 (struct net_device*,struct wl3501_card*,int) ;
 int FUNC_11 (struct net_device*,struct wl3501_card*,int) ;
 int FUNC_12 (struct net_device*,int) ;
 int FUNC_13 (struct wl3501_card*) ;
 int FUNC_14 (struct wl3501_card*,int) ;
 int FUNC_15 (struct net_device*,struct wl3501_card*,int) ;

__attribute__((used)) static inline void FUNC_16(struct net_device *VAR_0)
{
 int VAR_1;
 u16 VAR_2;
 u8 VAR_3;
 struct wl3501_card *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(3, "entry");
loop:
 VAR_1 = 0;
 if (!FUNC_5(VAR_4))
  goto free;
 FUNC_9(VAR_4, VAR_4->esbq_confirm, &VAR_2, sizeof(VAR_2));
 FUNC_9(VAR_4, VAR_2 + 2, &VAR_3, sizeof(VAR_3));

 switch (VAR_3) {
 case 137:
 case 136:
 case 140:
  FUNC_2(VAR_0, VAR_4);
  break;
 case 133:
  FUNC_10(VAR_0, VAR_4, VAR_2);
  break;
 case 132:
  FUNC_11(VAR_0, VAR_4, VAR_2);
  break;
 case 135:
  FUNC_8(VAR_4, VAR_2,
          &VAR_4->sig_get_confirm,
          sizeof(VAR_4->sig_get_confirm));
  break;
 case 131:
  FUNC_8(VAR_4, VAR_2,
          &VAR_4->sig_pwr_mgmt_confirm,
         sizeof(VAR_4->sig_pwr_mgmt_confirm));
  break;
 case 128:
  FUNC_15(VAR_0, VAR_4, VAR_2);
  break;
 case 129:
  FUNC_14(VAR_4, VAR_2);
  break;
 case 134:
  FUNC_12(VAR_0, VAR_2);
  break;
 case 139:
  FUNC_3(VAR_0, VAR_2);
  break;
 case 138:
  FUNC_4(VAR_4, VAR_2);
  break;
 case 130:
  FUNC_13(VAR_4);
  break;
 }
 FUNC_6(VAR_4);
 VAR_1 = 1;

free:
 FUNC_7(VAR_4);
 if (VAR_1)
  goto loop;
}
