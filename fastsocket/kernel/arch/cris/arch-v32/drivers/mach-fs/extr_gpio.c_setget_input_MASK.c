
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {size_t minor; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long* VAR_2 ;
 unsigned long** VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

inline unsigned long FUNC_2(struct gpio_private *VAR_4, unsigned long VAR_5)
{



 unsigned long VAR_6;
 unsigned long VAR_7;

 FUNC_1(VAR_6);
 VAR_7 = *VAR_3[VAR_4->minor];
 VAR_7 &= ~(VAR_5 & VAR_2[VAR_4->minor]);
 *VAR_3[VAR_4->minor] = VAR_7;
 FUNC_0(VAR_6);

 if (VAR_4->minor == VAR_0)
  VAR_7 ^= 0xFF;




 else
  VAR_7 ^= 0x3FFFF;
 return VAR_7;

}
