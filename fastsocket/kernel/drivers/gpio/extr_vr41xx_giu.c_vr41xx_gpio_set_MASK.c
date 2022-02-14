
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_5, unsigned VAR_6,
       int VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;

 if (VAR_6 >= VAR_5->ngpio)
  return;

 if (VAR_6 < 16) {
  VAR_8 = VAR_1;
  VAR_9 = 1 << VAR_6;
 } else if (VAR_6 < 32) {
  VAR_8 = VAR_0;
  VAR_9 = 1 << (VAR_6 - 16);
 } else if (VAR_6 < 48) {
  VAR_8 = VAR_3;
  VAR_9 = 1 << (VAR_6 - 32);
 } else {
  VAR_8 = VAR_2;
  VAR_9 = 1 << (VAR_6 - 48);
 }

 FUNC_2(&VAR_4, VAR_11);

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_7)
  VAR_10 |= VAR_9;
 else
  VAR_10 &= ~VAR_9;
 FUNC_1(VAR_8, VAR_10);

 FUNC_3(&VAR_4, VAR_11);
}
