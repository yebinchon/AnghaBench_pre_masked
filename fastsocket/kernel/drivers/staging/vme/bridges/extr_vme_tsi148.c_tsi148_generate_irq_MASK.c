
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(int VAR_6, int VAR_7)
{
 u32 VAR_8;

 FUNC_2(&(VAR_5));


 VAR_8 = FUNC_0(VAR_4->base + VAR_0);


 VAR_8 = (VAR_8 & ~VAR_2) |
  (VAR_7 & VAR_2);
 FUNC_1(VAR_8, VAR_4->base + VAR_0);


 VAR_8 = VAR_8 | VAR_1[VAR_6];
 FUNC_1(VAR_8, VAR_4->base + VAR_0);


 FUNC_5(VAR_3, FUNC_4());

 FUNC_3(&(VAR_5));

 return 0;
}
