
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 u64 VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, &VAR_2);
 FUNC_1((VAR_6 & VAR_3) | VAR_4,
     &VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (FUNC_2(&VAR_5->status) & VAR_0)
   break;
 }
}
