
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_3 | (VAR_4 << 20) | (VAR_5 << 12);
 int VAR_7 = FUNC_1();
 if (VAR_6 != VAR_2 ||
     VAR_7 != VAR_1) {
  VAR_2 = VAR_6;
  VAR_1 = VAR_7;
  FUNC_0(VAR_0, VAR_6);
 }
}
