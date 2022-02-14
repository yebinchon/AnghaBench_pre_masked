
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** fw; } ;


 TYPE_1__* FUNC_0 (int) ;
 char** VAR_0 ;

__attribute__((used)) static inline char *FUNC_1(int VAR_1, int VAR_2)
{
 char **VAR_3 = FUNC_0(VAR_2)->fw;
 return (VAR_3 && VAR_3[VAR_1]) ? VAR_3[VAR_1] : VAR_0[VAR_1];
}
