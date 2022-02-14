
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int thread_t ;
typedef int ast_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int *) ;

void FUNC_2(thread_t VAR_10, ast_t VAR_11)
{
 FUNC_0((VAR_11 & VAR_0) != 0);

 uint8_t VAR_12 = 0;
 if (VAR_11 & VAR_1) {
  VAR_12 |= VAR_5;
 }
 if (VAR_11 & (VAR_4 | VAR_2)) {
  VAR_12 |= (VAR_11 & VAR_3) ? VAR_7 :
    VAR_6;
 }

 uint8_t VAR_13 = (VAR_11 & VAR_4) ? VAR_8 : 0;

 uint8_t VAR_14 = VAR_12 | VAR_13;

 FUNC_1(VAR_10, VAR_14, &VAR_9);
}
