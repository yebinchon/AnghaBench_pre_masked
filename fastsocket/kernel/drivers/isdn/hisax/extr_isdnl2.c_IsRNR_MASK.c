
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_1(u_char * VAR_2, struct PStack *VAR_3)
{
 return (FUNC_0(VAR_0, &VAR_3->l2.flag) ? VAR_2[0] == VAR_1 : (VAR_2[0] & 0xf) == VAR_1);
}
