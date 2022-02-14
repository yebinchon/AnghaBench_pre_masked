
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_7 ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(unsigned long VAR_8)
{
 u16 VAR_9;
 unsigned long VAR_10;

 switch (VAR_8) {
 case 13000000:
  VAR_9 = VAR_4;
  break;
 case 52000000:
  VAR_9 = VAR_3;
  break;
 case 104000000:
  VAR_9 = VAR_2;
  break;
 case 208000000:
  VAR_9 = VAR_1;
  break;
 default:
  return;
 }
 FUNC_1(&VAR_7, VAR_10);
 VAR_9 |= FUNC_0(VAR_6 + VAR_0) &
  ~VAR_5 ;
 FUNC_3(VAR_9, VAR_6 + VAR_0);
 FUNC_2(&VAR_7, VAR_10);
}
