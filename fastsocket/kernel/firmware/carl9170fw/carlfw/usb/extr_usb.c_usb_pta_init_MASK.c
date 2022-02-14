
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * os_cfg_desc; int * cfg_desc; } ;
struct TYPE_4__ {TYPE_1__ usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_15 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned int VAR_18 = 0;

 FUNC_0(VAR_2,
  ~VAR_0);


 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, ~VAR_1);

 if (FUNC_3()) {
  VAR_15.usb.os_cfg_desc = &VAR_16;
  VAR_15.usb.cfg_desc = &VAR_17;


  VAR_18 |= VAR_6;
 } else {
  VAR_15.usb.cfg_desc = &VAR_16;
  VAR_15.usb.os_cfg_desc = &VAR_17;
 }
 VAR_18 |= VAR_7;
 VAR_18 |= VAR_5 |
     VAR_4;

 FUNC_2(VAR_12, VAR_18);
}
