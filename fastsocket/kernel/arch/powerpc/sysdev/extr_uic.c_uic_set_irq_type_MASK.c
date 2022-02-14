
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int lock; scalar_t__ dcrbase; } ;
struct irq_desc {unsigned int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;





 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct uic* FUNC_0 (unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_5, unsigned int VAR_6)
{
 struct uic *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8 = FUNC_6(VAR_5);
 struct irq_desc *VAR_9 = FUNC_1(VAR_5);
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 switch (VAR_6 & VAR_2) {
 case 128:
  FUNC_7(VAR_5);
  return 0;

 case 131:
  VAR_11 = 1; VAR_12 = 1;
  break;
 case 132:
  VAR_11 = 1; VAR_12 = 0;
  break;
 case 130:
  VAR_11 = 0; VAR_12 = 1;
  break;
 case 129:
  VAR_11 = 0; VAR_12 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = ~(1 << (31 - VAR_8));

 FUNC_4(&VAR_7->lock, VAR_10);
 VAR_13 = FUNC_2(VAR_7->dcrbase + VAR_4);
 VAR_14 = FUNC_2(VAR_7->dcrbase + VAR_3);
 VAR_13 = (VAR_13 & VAR_15) | (VAR_11 << (31-VAR_8));
 VAR_14 = (VAR_14 & VAR_15) | (VAR_12 << (31-VAR_8));

 FUNC_3(VAR_7->dcrbase + VAR_3, VAR_14);
 FUNC_3(VAR_7->dcrbase + VAR_4, VAR_13);

 VAR_9->status &= ~(VAR_2 | VAR_1);
 VAR_9->status |= VAR_6 & VAR_2;
 if (!VAR_11)
  VAR_9->status |= VAR_1;

 FUNC_5(&VAR_7->lock, VAR_10);

 return 0;
}
