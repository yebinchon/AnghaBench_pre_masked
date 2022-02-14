
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fritz_adapter {int isac; scalar_t__ io; } ;
typedef int irqreturn_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int,char*,unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fritz_adapter*) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_5, void *VAR_6)
{
 struct fritz_adapter *VAR_7 = VAR_6;
 unsigned char VAR_8;

 VAR_8 = FUNC_2(VAR_7->io + 2);
 if ((VAR_8 & VAR_2) == VAR_2)

  return VAR_4;
 FUNC_0(2, "sval %#x", VAR_8);
 if (!(VAR_8 & VAR_1))
  FUNC_3(&VAR_7->isac);

 if (!(VAR_8 & VAR_0))
  FUNC_1(VAR_7);
 return VAR_3;
}
