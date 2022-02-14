
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111 {int lock; scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sa1111 *VAR_7)
{
 unsigned long VAR_8, VAR_9;

 FUNC_3(&VAR_7->lock, VAR_8);

 FUNC_0(VAR_7->clk);




 VAR_9 = FUNC_1(VAR_7->base + VAR_0);
 VAR_9 &= ~VAR_6;
 FUNC_2(VAR_9, VAR_7->base + VAR_0);
 VAR_9 |= VAR_3 | VAR_2;
 FUNC_2(VAR_9, VAR_7->base + VAR_0);





 FUNC_5(100);




 VAR_9 |= VAR_4 | VAR_5;
 FUNC_2(VAR_9, VAR_7->base + VAR_0);





 FUNC_5(1);




 FUNC_2(0, VAR_7->base + VAR_1);

 FUNC_4(&VAR_7->lock, VAR_8);
}
