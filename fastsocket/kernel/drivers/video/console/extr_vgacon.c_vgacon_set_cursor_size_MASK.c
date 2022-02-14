
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_4(int VAR_9, int VAR_10, int VAR_11)
{
 unsigned long VAR_12;
 int VAR_13, VAR_14;






 if ((VAR_10 == VAR_3) && (VAR_11 == VAR_4))
  return;
 VAR_3 = VAR_10;
 VAR_4 = VAR_11;

 FUNC_2(&VAR_5, VAR_12);
 if (VAR_8 >= VAR_2) {
  FUNC_1(VAR_1, VAR_6);
  VAR_13 = FUNC_0(VAR_7);
  FUNC_1(VAR_0, VAR_6);
  VAR_14 = FUNC_0(VAR_7);
 } else {
  VAR_13 = 0;
  VAR_14 = 0;
 }

 VAR_13 = (VAR_13 & 0xc0) | VAR_10;
 VAR_14 = (VAR_14 & 0xe0) | VAR_11;

 FUNC_1(VAR_1, VAR_6);
 FUNC_1(VAR_13, VAR_7);
 FUNC_1(VAR_0, VAR_6);
 FUNC_1(VAR_14, VAR_7);
 FUNC_3(&VAR_5, VAR_12);
}
