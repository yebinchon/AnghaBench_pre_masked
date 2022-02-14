
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,unsigned long) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9 = 0;
 u8 VAR_10;

 VAR_10 = FUNC_0(VAR_3);


 if (VAR_10 & VAR_2) {
  FUNC_2(VAR_2, VAR_3);
  VAR_9 |= VAR_5 | VAR_4;
 }


 if (VAR_10 & VAR_1)
  VAR_9 |= VAR_5 | VAR_6;

 FUNC_1(VAR_8, 1, VAR_9);

 return VAR_0;
}
