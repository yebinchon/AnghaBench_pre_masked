
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(int VAR_6, int VAR_7)
{
 u32 VAR_8;


 if (VAR_7 & 1)
  return -VAR_0;

 FUNC_2(&(VAR_5));

 VAR_8 = FUNC_0(VAR_3->base + VAR_2);


 FUNC_1(VAR_7 << 24, VAR_3->base + VAR_1);


 VAR_8 = VAR_8 | (1 << (VAR_6 + 24));
 FUNC_1(VAR_8, VAR_3->base + VAR_2);


 FUNC_4(VAR_4, 0);


 VAR_8 = FUNC_0(VAR_3->base + VAR_2);
 VAR_8 = VAR_8 & ~(1 << (VAR_6 + 24));
 FUNC_1(VAR_8, VAR_3->base + VAR_2);

 FUNC_3(&(VAR_5));

 return 0;
}
