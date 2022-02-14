
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct aafb_cursor {scalar_t__ vbl_cnt; int on; scalar_t__ blink_rate; TYPE_1__ timer; int enable; } ;
struct aafb_info {struct aafb_cursor cursor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aafb_info*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct aafb_info *VAR_3 = (struct aafb_info *)VAR_2;
 struct aafb_cursor *VAR_4 = &VAR_3->cursor;

 if (!VAR_4->enable)
  goto out;

 if (VAR_4->vbl_cnt && --VAR_4->vbl_cnt == 0) {
  VAR_4->on ^= 1;
  FUNC_0(VAR_3, VAR_4->on);
  VAR_4->vbl_cnt = VAR_4->blink_rate;
 }

out:
 VAR_4->timer.expires = VAR_1 + VAR_0;
 FUNC_1(&VAR_4->timer);
}
