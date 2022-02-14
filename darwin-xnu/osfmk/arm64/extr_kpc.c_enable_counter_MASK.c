
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int** VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_5(uint32_t VAR_4)
{
 int VAR_5 = FUNC_4();
 uint64_t VAR_6 = 0, VAR_7;
 boolean_t VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = FUNC_2(VAR_2) | 0x3 ;

 VAR_8 = (VAR_6 & FUNC_0(VAR_4)) != 0;
 VAR_9 = (VAR_6 & FUNC_1(VAR_4)) != 0;




 VAR_7 = VAR_0;
 VAR_10 = (VAR_6 & VAR_1) == VAR_7;

 VAR_11 = VAR_8 && VAR_9 && VAR_10;

 if (!VAR_11) {
  VAR_6 |= FUNC_0(VAR_4);
  VAR_6 |= FUNC_1(VAR_4);
  VAR_6 &= ~VAR_1;
  VAR_6 |= VAR_7;

  FUNC_3(VAR_2, VAR_6);
 }

 VAR_3[VAR_5][0] = VAR_6;
 return VAR_11;
}
