
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ palette; scalar_t__ depth; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(u16 VAR_1)
{
 u8 VAR_2=0;
 while (VAR_0[VAR_2].palette != VAR_1)
  VAR_2++;

 return VAR_0[VAR_2].depth;
}
