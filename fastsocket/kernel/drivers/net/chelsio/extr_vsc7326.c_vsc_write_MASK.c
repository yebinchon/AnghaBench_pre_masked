
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mac_lock; } ;
typedef TYPE_1__ adapter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(adapter_t *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(&VAR_0->mac_lock);
 FUNC_2(VAR_0, (VAR_1 << 2) + 4, VAR_2 & 0xFFFF);
 FUNC_2(VAR_0, VAR_1 << 2, (VAR_2 >> 16) & 0xFFFF);



 FUNC_1(&VAR_0->mac_lock);
}
