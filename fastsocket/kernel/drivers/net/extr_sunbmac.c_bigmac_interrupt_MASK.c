
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bigmac {scalar_t__ gregs; scalar_t__ creg; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bigmac*,int,int) ;
 int FUNC_2 (struct bigmac*) ;
 int FUNC_3 (struct bigmac*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct bigmac *VAR_10 = (struct bigmac *) VAR_9;
 u32 VAR_11, VAR_12;

 FUNC_0(("bigmac_interrupt: "));


 VAR_12 = FUNC_4(VAR_10->creg + VAR_0);
 VAR_11 = FUNC_4(VAR_10->gregs + VAR_4);

 FUNC_0(("qec_status=%08x bmac_status=%08x\n", VAR_11, VAR_12));
 if ((VAR_11 & (VAR_6 | VAR_5)) ||
    (VAR_12 & VAR_1))
  FUNC_1(VAR_10, VAR_11, VAR_12);

 if (VAR_12 & VAR_3)
  FUNC_3(VAR_10);

 if (VAR_12 & VAR_2)
  FUNC_2(VAR_10);

 return VAR_7;
}
