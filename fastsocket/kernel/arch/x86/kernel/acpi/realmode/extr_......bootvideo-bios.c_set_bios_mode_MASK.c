
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct biosregs {int al; int ah; int ax; } ;
struct TYPE_3__ {int orig_video_mode; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2)
{
 struct biosregs VAR_3, VAR_4;
 u8 VAR_5;

 FUNC_0(&VAR_3);
 VAR_3.al = VAR_2;
 FUNC_1(0x10, &VAR_3, ((void*)0));

 VAR_3.ah = 0x0f;
 FUNC_1(0x10, &VAR_3, &VAR_4);

 VAR_1 = 1;


 VAR_5 = VAR_4.al & 0x7f;

 if (VAR_5 == VAR_2)
  return 0;


 if (VAR_5 != VAR_0.screen_info.orig_video_mode) {



  VAR_3.ax = VAR_0.screen_info.orig_video_mode;
  FUNC_1(0x10, &VAR_3, ((void*)0));
 }

 return -1;
}
