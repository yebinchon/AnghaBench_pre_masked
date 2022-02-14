
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_1(u_char * VAR_1, struct PStack *VAR_2)
{
 register u_char VAR_3 = *VAR_1;

 if (!FUNC_0(VAR_0, &VAR_2->l2.flag))
  VAR_3 &= 0xf;
 return(((VAR_3 & 0xf3) == 1) && ((VAR_3 & 0x0c) != 0x0c));
}
