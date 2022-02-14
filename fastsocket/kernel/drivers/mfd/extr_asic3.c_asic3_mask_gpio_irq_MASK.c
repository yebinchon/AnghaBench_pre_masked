
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asic3 {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct asic3*,unsigned int) ;
 int FUNC_1 (struct asic3*,unsigned int) ;
 int FUNC_2 (struct asic3*,int) ;
 int FUNC_3 (struct asic3*,int,int) ;
 struct asic3* FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_1)
{
 struct asic3 *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_1(VAR_2, VAR_1);

 FUNC_5(&VAR_2->lock, VAR_6);
 VAR_3 = FUNC_2(VAR_2, VAR_4 + VAR_0);
 VAR_3 |= 1 << VAR_5;
 FUNC_3(VAR_2, VAR_4 + VAR_0, VAR_3);
 FUNC_6(&VAR_2->lock, VAR_6);
}
