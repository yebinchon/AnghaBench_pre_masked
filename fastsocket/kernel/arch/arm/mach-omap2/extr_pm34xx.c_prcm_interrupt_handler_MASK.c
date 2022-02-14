
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4 (int VAR_5, void *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 do {
  VAR_7 = FUNC_2(VAR_1,
     VAR_4);

  if (VAR_7 & (VAR_3 | VAR_2)) {
   VAR_8 = FUNC_1();





   FUNC_0(VAR_8 == 0, "prcm: WARNING: PRCM indicated MPU wakeup "
        "but no wakeup sources are marked\n");
  } else {

   FUNC_0(1, "prcm: WARNING: PRCM interrupt received, but "
        "no code to handle it (%08x)\n", VAR_7);
  }

  FUNC_3(VAR_7, VAR_1,
     VAR_4);

 } while (FUNC_2(VAR_1, VAR_4));

 return VAR_0;
}
