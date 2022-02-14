
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int to; int from; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline int FUNC_1(substring_t *VAR_1, u32 *VAR_2)
{
 if (VAR_1->to - VAR_1->from != 4)
  return -VAR_0;
 FUNC_0(VAR_2, VAR_1->from, 4);
 return 0;
}
