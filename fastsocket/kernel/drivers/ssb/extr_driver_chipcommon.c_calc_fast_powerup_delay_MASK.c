
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {int capabilities; unsigned int fast_pwrup_delay; TYPE_1__* dev; } ;
struct ssb_bus {scalar_t__ bustype; } ;
struct TYPE_2__ {struct ssb_bus* bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_chipcommon*,int ) ;
 unsigned int FUNC_3 (struct ssb_chipcommon*) ;

__attribute__((used)) static void FUNC_4(struct ssb_chipcommon *VAR_4)
{
 struct ssb_bus *VAR_5 = VAR_4->dev->bus;
 int VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;

 if (VAR_5->bustype != VAR_0)
  return;

 if (VAR_4->capabilities & VAR_2) {
  VAR_4->fast_pwrup_delay = FUNC_3(VAR_4);
  return;
 }

 if (!(VAR_4->capabilities & VAR_1))
  return;

 VAR_6 = FUNC_1(VAR_4, 0);
 VAR_8 = FUNC_2(VAR_4, VAR_3);
 VAR_7 = (((VAR_8 + 2) * 1000000) + (VAR_6 - 1)) / VAR_6;
 FUNC_0(VAR_7 & ~0xFFFF);

 VAR_4->fast_pwrup_delay = VAR_7;
}
