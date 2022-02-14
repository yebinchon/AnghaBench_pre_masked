
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,unsigned char,char*) ;
 int VAR_3 ;
 unsigned char FUNC_1 () ;
 unsigned char FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long VAR_4;
 unsigned char VAR_5, VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_3, VAR_4);

 while (((VAR_6 = FUNC_2()) & VAR_2) && (VAR_7 < VAR_0)) {
  FUNC_5(50);
  VAR_5 = FUNC_1();
  VAR_7++;
  FUNC_0("%02x <- i8042 (flush, %s)", VAR_5,
   VAR_6 & VAR_1 ? "aux" : "kbd");
 }

 FUNC_4(&VAR_3, VAR_4);

 return VAR_7;
}
