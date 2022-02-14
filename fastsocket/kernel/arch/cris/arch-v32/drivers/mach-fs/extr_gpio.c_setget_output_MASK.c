
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {size_t minor; } ;


 unsigned long* VAR_0 ;
 unsigned long** VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

inline unsigned long FUNC_2(struct gpio_private *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 FUNC_1(VAR_4);
 VAR_5 = *VAR_1[VAR_2->minor];
 VAR_5 |= (VAR_3 & VAR_0[VAR_2->minor]);
 *VAR_1[VAR_2->minor] = VAR_5;
 FUNC_0(VAR_4);
 return VAR_5;
}
