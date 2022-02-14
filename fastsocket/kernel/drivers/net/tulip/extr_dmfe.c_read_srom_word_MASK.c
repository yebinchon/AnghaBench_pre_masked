
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int FUNC_0 (int,long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (long) ;
 int FUNC_2 (int,long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(long VAR_7, int VAR_8)
{
 int VAR_9;
 u16 VAR_10 = 0;
 long VAR_11 = VAR_7 + VAR_4;

 FUNC_2(VAR_3, VAR_11);
 FUNC_2(VAR_3 | VAR_2, VAR_11);


 FUNC_0(VAR_6, VAR_11);
 FUNC_0(VAR_6, VAR_11);
 FUNC_0(VAR_5, VAR_11);


 for (VAR_9 = 5; VAR_9 >= 0; VAR_9--) {
  VAR_10 = (VAR_8 & (1 << VAR_9)) ? VAR_6 : VAR_5;
  FUNC_0(VAR_10, VAR_11);
 }

 FUNC_2(VAR_3 | VAR_2, VAR_11);

 for (VAR_9 = 16; VAR_9 > 0; VAR_9--) {
  FUNC_2(VAR_3 | VAR_2 | VAR_1, VAR_11);
  FUNC_3(5);
  VAR_10 = (VAR_10 << 1) |
    ((FUNC_1(VAR_11) & VAR_0) ? 1 : 0);
  FUNC_2(VAR_3 | VAR_2, VAR_11);
  FUNC_3(5);
 }

 FUNC_2(VAR_3, VAR_11);
 return VAR_10;
}
