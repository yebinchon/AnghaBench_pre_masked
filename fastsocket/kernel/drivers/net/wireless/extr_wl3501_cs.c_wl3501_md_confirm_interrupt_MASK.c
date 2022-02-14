
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_md_confirm {int data; } ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
typedef int sig ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wl3501_card*,int ) ;
 int FUNC_4 (struct wl3501_card*,int ,struct wl3501_md_confirm*,int) ;

__attribute__((used)) static inline void FUNC_5(struct net_device *VAR_0,
            struct wl3501_card *VAR_1,
            u16 VAR_2)
{
 struct wl3501_md_confirm VAR_3;

 FUNC_0(3, "entry");
 FUNC_4(VAR_1, VAR_2, &VAR_3, sizeof(VAR_3));
 FUNC_3(VAR_1, VAR_3.data);
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);
}
