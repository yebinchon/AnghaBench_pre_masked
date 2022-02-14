
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_characteristics {int dev_type; } ;


 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct dasd_eckd_characteristics * VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 switch (VAR_0->dev_type) {
 case 0x3380:
  if (VAR_1)
   return 1499 / (15 + 7 + FUNC_0(VAR_1 + 12, 32) +
           FUNC_0(VAR_2 + 12, 32));
  else
   return 1499 / (15 + FUNC_0(VAR_2 + 12, 32));
 case 0x3390:
  VAR_3 = FUNC_0(VAR_2 + 6, 232) + 1;
  if (VAR_1) {
   VAR_4 = FUNC_0(VAR_1 + 6, 232) + 1;
   return 1729 / (10 + 9 + FUNC_0(VAR_1 + 6 * VAR_4, 34) +
           9 + FUNC_0(VAR_2 + 6 * VAR_3, 34));
  } else
   return 1729 / (10 + 9 + FUNC_0(VAR_2 + 6 * VAR_3, 34));
 case 0x9345:
  VAR_3 = FUNC_0(VAR_2 + 6, 232) + 1;
  if (VAR_1) {
   VAR_4 = FUNC_0(VAR_1 + 6, 232) + 1;
   return 1420 / (18 + 7 + FUNC_0(VAR_1 + 6 * VAR_4, 34) +
           FUNC_0(VAR_2 + 6 * VAR_3, 34));
  } else
   return 1420 / (18 + 7 + FUNC_0(VAR_2 + 6 * VAR_3, 34));
 }
 return 0;
}
