
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {size_t minor; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;

inline unsigned long FUNC_4(struct gpio_private *VAR_5, unsigned long VAR_6)
{



 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_4, VAR_7);

 VAR_8 = FUNC_0(VAR_3[VAR_5->minor]) &
  ~(VAR_6 & VAR_2[VAR_5->minor]);
 FUNC_3(VAR_8, VAR_3[VAR_5->minor]);

 FUNC_2(&VAR_4, VAR_7);

 if (VAR_5->minor == VAR_0)
  VAR_8 ^= 0xFFFF;




 else
  VAR_8 ^= 0xFFFFFFFF;

 return VAR_8;

}
