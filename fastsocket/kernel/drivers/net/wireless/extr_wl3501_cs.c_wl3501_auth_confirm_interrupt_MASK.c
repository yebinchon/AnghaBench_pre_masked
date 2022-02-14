
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_card {int dummy; } ;
struct wl3501_auth_confirm {scalar_t__ status; } ;
typedef int sig ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct wl3501_card*,int ,struct wl3501_auth_confirm*,int) ;
 int FUNC_2 (struct wl3501_card*) ;
 int FUNC_3 (struct wl3501_card*) ;

__attribute__((used)) static inline void FUNC_4(struct wl3501_card *VAR_1,
       u16 VAR_2)
{
 struct wl3501_auth_confirm VAR_3;

 FUNC_0(3, "entry");
 FUNC_1(VAR_1, VAR_2, &VAR_3, sizeof(VAR_3));

 if (VAR_3.status == VAR_0)
  FUNC_2(VAR_1);
 else
  FUNC_3(VAR_1);
}
