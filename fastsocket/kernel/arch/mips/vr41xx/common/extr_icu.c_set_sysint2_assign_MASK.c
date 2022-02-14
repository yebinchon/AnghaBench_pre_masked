
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct irq_desc {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct irq_desc* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned char* VAR_5 ;

__attribute__((used)) static inline int FUNC_5(unsigned int VAR_6, unsigned char VAR_7)
{
 struct irq_desc *VAR_8 = VAR_4 + VAR_6;
 uint16_t VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_11 = FUNC_0(VAR_6);

 FUNC_3(&VAR_8->lock);

 VAR_9 = FUNC_1(VAR_1);
 VAR_10 = FUNC_1(VAR_2);

 switch (VAR_11) {
 case 0:
  VAR_9 &= ~VAR_3;
  VAR_9 |= (uint16_t)VAR_7;
  break;
 case 1:
  VAR_9 &= ~(VAR_3 << 3);
  VAR_9 |= (uint16_t)VAR_7 << 3;
  break;
 case 3:
  VAR_9 &= ~(VAR_3 << 6);
  VAR_9 |= (uint16_t)VAR_7 << 6;
  break;
 case 4:
  VAR_9 &= ~(VAR_3 << 9);
  VAR_9 |= (uint16_t)VAR_7 << 9;
  break;
 case 5:
  VAR_9 &= ~(VAR_3 << 12);
  VAR_9 |= (uint16_t)VAR_7 << 12;
  break;
 case 6:
  VAR_10 &= ~VAR_3;
  VAR_10 |= (uint16_t)VAR_7;
  break;
 case 7:
  VAR_10 &= ~(VAR_3 << 3);
  VAR_10 |= (uint16_t)VAR_7 << 3;
  break;
 case 8:
  VAR_10 &= ~(VAR_3 << 6);
  VAR_10 |= (uint16_t)VAR_7 << 6;
  break;
 case 9:
  VAR_10 &= ~(VAR_3 << 9);
  VAR_10 |= (uint16_t)VAR_7 << 9;
  break;
 case 10:
  VAR_10 &= ~(VAR_3 << 12);
  VAR_10 |= (uint16_t)VAR_7 << 12;
  break;
 default:
  FUNC_4(&VAR_8->lock);
  return -VAR_0;
 }

 VAR_5[VAR_11] = VAR_7;
 FUNC_2(VAR_1, VAR_9);
 FUNC_2(VAR_2, VAR_10);

 FUNC_4(&VAR_8->lock);

 return 0;
}
