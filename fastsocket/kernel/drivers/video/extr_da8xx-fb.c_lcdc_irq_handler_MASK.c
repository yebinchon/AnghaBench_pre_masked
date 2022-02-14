
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
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_4);
 u32 VAR_9;

 if ((VAR_8 & VAR_5) && (VAR_8 & VAR_1)) {
  VAR_9 = FUNC_0(VAR_2);
  FUNC_1(VAR_9 & ~VAR_3, VAR_2);
  FUNC_1(VAR_8, VAR_4);
  FUNC_1(VAR_9 | VAR_3, VAR_2);
 } else
  FUNC_1(VAR_8, VAR_4);

 return VAR_0;
}
