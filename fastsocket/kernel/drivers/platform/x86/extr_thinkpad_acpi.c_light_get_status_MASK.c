
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ light_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,char*,char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_4 = 0;

 if (VAR_3.light_status) {
  if (!FUNC_0(VAR_2, &VAR_4, "KBLT", "d"))
   return -VAR_0;
  return (!!VAR_4);
 }

 return -VAR_1;
}
