
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(int VAR_7)
{
 int VAR_8;

 VAR_0 += VAR_7 / 2;






 if (VAR_0 > VAR_5) FUNC_0("snd oflow %i!\n", VAR_0 - VAR_5);
 if (VAR_0 >= VAR_5)
  VAR_0 = VAR_4;


 VAR_3 += VAR_7 / 2;
 if (VAR_3 - VAR_2 > VAR_1*2) {

  VAR_8 = FUNC_1(VAR_6, 1);

 }
}
