
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {size_t minor; } ;


 unsigned long* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static inline unsigned long FUNC_4(struct gpio_private *VAR_3,
 unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_2, VAR_5);

 VAR_6 = FUNC_0(VAR_1[VAR_3->minor]) |
  (VAR_4 & VAR_0[VAR_3->minor]);
 FUNC_3(VAR_6, VAR_1[VAR_3->minor]);

 FUNC_2(&VAR_2, VAR_5);
 return VAR_6;
}
