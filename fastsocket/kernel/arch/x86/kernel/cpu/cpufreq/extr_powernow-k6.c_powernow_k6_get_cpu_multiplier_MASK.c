
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 u64 VAR_3 = 0;
 u32 VAR_4;

 VAR_4 = VAR_1 + 0x1;
 FUNC_1(VAR_0, VAR_4, 0);
 VAR_3 = FUNC_0(VAR_1 + 0x8);
 VAR_4 = VAR_1 + 0x0;
 FUNC_1(VAR_0, VAR_4, 0);

 return VAR_2[(VAR_3 >> 5)&7].index;
}
