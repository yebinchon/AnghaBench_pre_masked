
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(uint64_t VAR_4, uint64_t VAR_5)
{
 uint32_t VAR_6 = FUNC_2();
 uint64_t VAR_7 = 0ULL, VAR_8 = 0ULL, VAR_9 = 0ULL;
 boolean_t VAR_10;

 VAR_10 = FUNC_3(VAR_0);


 VAR_7 = FUNC_4(VAR_3);


 for (uint32_t VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
  VAR_8 = FUNC_0(VAR_11);
  VAR_9 = FUNC_1(VAR_11);
  FUNC_5(VAR_11, VAR_8 | VAR_2 | VAR_1);
  FUNC_6(VAR_11, VAR_9);
 }


 VAR_7 &= ~VAR_4;
 VAR_7 |= VAR_5;
 FUNC_7(VAR_3, VAR_7);

 FUNC_3(VAR_10);
}
