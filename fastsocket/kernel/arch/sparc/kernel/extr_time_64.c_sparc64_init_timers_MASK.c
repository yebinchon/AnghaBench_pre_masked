
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_2__ {unsigned long clock_tick; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 () ;
 struct device_node* FUNC_1 (char*) ;
 unsigned long FUNC_2 (struct device_node*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static unsigned long FUNC_3(void)
{
 struct device_node *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_1("/");
 if (VAR_5 == VAR_1) {
  unsigned long VAR_8, VAR_9, VAR_10;

  __asm__ __volatile__ ("rdpr %%ver, %0"
          : "=&r" (VAR_8));
  VAR_9 = ((VAR_8 >> 48) & 0xffff);
  VAR_10 = ((VAR_8 >> 32) & 0xffff);
  if (VAR_9 == 0x17 && VAR_10 == 0x13) {

   VAR_4 = &VAR_0;
   VAR_7 = FUNC_2(VAR_6, "stick-frequency", 0);
  } else {
   VAR_4 = &VAR_3;
   VAR_7 = FUNC_0().clock_tick;
  }
 } else {
  VAR_4 = &VAR_2;
  VAR_7 = FUNC_2(VAR_6, "stick-frequency", 0);
 }

 return VAR_7;
}
