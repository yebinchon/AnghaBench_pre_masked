
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int setting; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, u32 VAR_3)
{
 while (VAR_2 < VAR_0 && !(VAR_1[VAR_2].setting & VAR_3))
  VAR_2++;

 return VAR_2 < VAR_0 ? VAR_2 : VAR_0 - 1;
}
