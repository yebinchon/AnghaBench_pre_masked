
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11;

 FUNC_6(&VAR_7);
 VAR_10 = FUNC_0(VAR_4);
 VAR_11 = FUNC_0(VAR_3);
 if (FUNC_3())
  VAR_10 = (unsigned long)VAR_8 & 0xF0;
 VAR_10 &= (VAR_11 & VAR_6) | VAR_5;





 if (VAR_10 & VAR_2) {
  VAR_11 &= ~VAR_2;
  FUNC_1(VAR_11, VAR_3);
  FUNC_2(VAR_2);

  FUNC_0(VAR_4);
 }
 FUNC_7(&VAR_7);

 if (FUNC_4(VAR_10)) {
  FUNC_5(VAR_9, 1, VAR_10);
  return VAR_0;
 } else
  return VAR_1;
}
