
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int pci_fn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;






 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct tg3*,scalar_t__) ;
 int FUNC_1 (struct tg3*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13 = 0;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;

 if (!FUNC_3(VAR_9, VAR_4))
  return 0;

 switch (VAR_10) {
 case 134:
  if (FUNC_2(VAR_9) == VAR_1)
   return 0;
 case 133:
 case 132:
  if (!VAR_9->pci_fn)
   VAR_17 = VAR_0;
  else
   VAR_17 = 1 << VAR_9->pci_fn;
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_17 = VAR_0;
  break;
 default:
  return -VAR_3;
 }

 if (FUNC_2(VAR_9) == VAR_1) {
  VAR_15 = VAR_6;
  VAR_16 = VAR_5;
 } else {
  VAR_15 = VAR_8;
  VAR_16 = VAR_7;
 }

 VAR_12 = 4 * VAR_10;

 FUNC_1(VAR_9, VAR_15 + VAR_12, VAR_17);


 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {
  VAR_14 = FUNC_0(VAR_9, VAR_16 + VAR_12);
  if (VAR_14 == VAR_17)
   break;
  FUNC_4(10);
 }

 if (VAR_14 != VAR_17) {

  FUNC_1(VAR_9, VAR_16 + VAR_12, VAR_17);
  VAR_13 = -VAR_2;
 }

 return VAR_13;
}
