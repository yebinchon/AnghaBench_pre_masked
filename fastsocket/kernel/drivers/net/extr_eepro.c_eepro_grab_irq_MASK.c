
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int* VAR_3 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (unsigned long) ;
 unsigned long FUNC_12 () ;
 scalar_t__ FUNC_13 (int,int *,int ,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_4)
{
 int VAR_5[] = { 3, 4, 5, 7, 9, 10, 11, 12, 0 };
 int *VAR_6 = VAR_5, VAR_7, VAR_8 = VAR_4->base_addr;

 FUNC_7(VAR_8);


 FUNC_5(VAR_8);


 FUNC_6(VAR_8);


 FUNC_0(VAR_8);


 FUNC_4(VAR_8);

 do {
  FUNC_7(VAR_8);

  VAR_7 = FUNC_8(VAR_8 + VAR_1);
  FUNC_10((VAR_7 & 0xf8) | VAR_3[*VAR_6], VAR_8 + VAR_1);

  FUNC_6(VAR_8);

  if (FUNC_13 (*VAR_6, ((void*)0), VAR_2, "bogus", VAR_4) != VAR_0) {
   unsigned long VAR_9;

   VAR_9 = FUNC_12();

   FUNC_1(VAR_8);
   FUNC_9(20);

   if (*VAR_6 == FUNC_11(VAR_9))
    break;


   FUNC_0(VAR_8);
  }
 } while (*++VAR_6);

 FUNC_7(VAR_8);


 FUNC_3(VAR_8);

 FUNC_6(VAR_8);


 FUNC_2(VAR_8);


 FUNC_0(VAR_8);

 return VAR_4->irq;
}
