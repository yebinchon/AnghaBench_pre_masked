
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; scalar_t__ runtime_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(int *VAR_3)
{
 unsigned char VAR_4;

 *VAR_3 = 0;

 FUNC_1(&VAR_2.io_lock);
 VAR_4 = FUNC_0(VAR_2.runtime_reg + VAR_1);
 if (VAR_4 & 0x01)
  *VAR_3 |= VAR_0;

 FUNC_2(&VAR_2.io_lock);
}
