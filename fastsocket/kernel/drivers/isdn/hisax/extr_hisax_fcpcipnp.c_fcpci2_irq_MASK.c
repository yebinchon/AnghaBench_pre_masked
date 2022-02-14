
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fritz_adapter {int isac; scalar_t__ io; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int,char*,unsigned char) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fritz_adapter*) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_6, void *VAR_7)
{
 struct fritz_adapter *VAR_8 = VAR_7;
 unsigned char VAR_9;

 VAR_9 = FUNC_2(VAR_8->io + VAR_0);
 if (!(VAR_9 & VAR_3))

  return VAR_5;
 FUNC_0(2, "STATUS0 %#x", VAR_9);
 if (VAR_9 & VAR_2)
  FUNC_3(&VAR_8->isac);
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_8);
 if (VAR_9 & VAR_2)
  FUNC_3(&VAR_8->isac);
 return VAR_4;
}
