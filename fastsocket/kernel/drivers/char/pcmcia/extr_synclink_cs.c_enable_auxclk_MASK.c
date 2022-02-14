
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; int clock_speed; } ;
struct TYPE_7__ {TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(MGSLPC_INFO *VAR_8)
{
 unsigned char VAR_9;
 VAR_9 = 0x82;


 if (VAR_8->params.mode == VAR_6 && VAR_8->params.clock_speed)
  VAR_9 |= VAR_0;
 FUNC_1(VAR_8, VAR_5 + VAR_7, VAR_9);
 FUNC_1(VAR_8, VAR_5 + VAR_1, 0xc0);
 FUNC_1(VAR_8, VAR_5 + VAR_2, 0x17);
 if (VAR_8->params.mode == VAR_6 && VAR_8->params.clock_speed)
  FUNC_1(VAR_8, VAR_5 + VAR_3, 0x38);
 else
  FUNC_1(VAR_8, VAR_5 + VAR_3, 0x30);
 FUNC_1(VAR_8, VAR_5 + VAR_4, 0x50);




 if (VAR_8->params.mode == VAR_6 && VAR_8->params.clock_speed)
  FUNC_0(VAR_8, VAR_5, VAR_8->params.clock_speed);
 else
  FUNC_0(VAR_8, VAR_5, 921600);
}
