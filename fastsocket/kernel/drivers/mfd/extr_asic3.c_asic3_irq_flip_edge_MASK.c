
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct asic3 {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct asic3*,scalar_t__) ;
 int FUNC_1 (struct asic3*,scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct asic3 *VAR_1,
    u32 VAR_2, int VAR_3)
{
 u16 VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_1,
       VAR_2 + VAR_0);
 VAR_4 ^= VAR_3;
 FUNC_1(VAR_1,
        VAR_2 + VAR_0, VAR_4);
 FUNC_3(&VAR_1->lock, VAR_5);
}
