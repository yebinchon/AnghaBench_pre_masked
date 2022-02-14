
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct layer2 {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

inline int
FUNC_1(u_char *VAR_2, struct layer2 *VAR_3)
{
 return FUNC_0(VAR_0, &VAR_3->flag) ?
     VAR_2[0] == VAR_1 : (VAR_2[0] & 0xf) == VAR_1;
}
