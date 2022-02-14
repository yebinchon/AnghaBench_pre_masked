
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rf; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;


 int FUNC_0 (struct rt2x00_dev*,char*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0, const u16 VAR_1)
{
 VAR_0->chip.rf = VAR_1;

 FUNC_0(VAR_0, "RF chipset %04x detected\n",
      VAR_0->chip.rf);
}
