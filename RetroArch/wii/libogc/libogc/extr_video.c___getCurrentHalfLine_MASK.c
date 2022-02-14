
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hlw; } ;


 int FUNC_0 (int*,int*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline u32 FUNC_1()
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 0;

 FUNC_0(&VAR_2,&VAR_1);

 VAR_2--;
 VAR_1--;
 VAR_1 <<= 1;

 return VAR_1+(VAR_2/VAR_0->hlw);
}
