
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_card {int dummy; } ;
struct wl3501_assoc_confirm {scalar_t__ status; } ;
struct net_device {int dummy; } ;
typedef int sig ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wl3501_card*,int ,struct wl3501_assoc_confirm*,int) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_1,
        u16 VAR_2)
{
 struct wl3501_card *VAR_3 = FUNC_1(VAR_1);
 struct wl3501_assoc_confirm VAR_4;

 FUNC_0(3, "entry");
 FUNC_2(VAR_3, VAR_2, &VAR_4, sizeof(VAR_4));

 if (VAR_4.status == VAR_0)
  FUNC_3(VAR_1);
}
