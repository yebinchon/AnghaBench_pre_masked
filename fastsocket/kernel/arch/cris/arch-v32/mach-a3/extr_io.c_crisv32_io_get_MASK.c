
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crisv32_iopin {int bit; TYPE_1__* port; } ;
struct TYPE_2__ {unsigned int pin_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int,unsigned int,int ) ;
 int VAR_4 ;

int FUNC_1(struct crisv32_iopin *VAR_5,
 unsigned int VAR_6, unsigned int VAR_7)
{
 if (VAR_6 > VAR_2)
  return -VAR_0;
 if (VAR_6 > VAR_3[VAR_6].pin_count)
  return -VAR_0;

 VAR_5->bit = 1 << VAR_7;
 VAR_5->port = &VAR_3[VAR_6];

 if (FUNC_0(VAR_6, VAR_7, VAR_7, VAR_4))
  return -VAR_1;

 return 0;
}
