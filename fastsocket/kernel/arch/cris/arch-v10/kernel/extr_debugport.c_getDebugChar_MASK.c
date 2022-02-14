
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* read; } ;


 unsigned long FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_1(void)
{
 unsigned long VAR_4;

 if (!VAR_3)
  return 0;

 do {
  VAR_4 = *VAR_3->read;
 } while (!(VAR_4 & FUNC_0(VAR_0, VAR_1)));

 return (VAR_4 & FUNC_0(VAR_0, VAR_2));
}
