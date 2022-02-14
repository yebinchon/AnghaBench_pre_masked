
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct b43_wldev {int dummy; } ;
struct b43_rfatt {void* att; } ;
struct b43_lo_calib {int ctl; } ;
struct b43_bbatt {void* att; } ;
typedef int rf ;
typedef int bb ;


 struct b43_lo_calib* FUNC_0 (struct b43_wldev*,struct b43_rfatt*,struct b43_rfatt*) ;
 int FUNC_1 (struct b43_rfatt*) ;
 int FUNC_2 (struct b43_wldev*,int *) ;
 int FUNC_3 (struct b43_rfatt*,int ,int) ;

void FUNC_4(struct b43_wldev *VAR_0,
   u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct b43_rfatt VAR_4;
 struct b43_bbatt VAR_5;
 struct b43_lo_calib *VAR_6;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_4.att = VAR_1;
 VAR_5.att = VAR_2;
 FUNC_1(&VAR_4);
 VAR_6 = FUNC_0(VAR_0, &VAR_5, &VAR_4);
 if (!VAR_6)
  return;
 FUNC_2(VAR_0, &VAR_6->ctl);
}
