
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_9, void *VAR_10, int VAR_11, u32 VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = VAR_6;

 FUNC_2(FUNC_3(VAR_9), VAR_8 + VAR_7);
 FUNC_2(FUNC_3(VAR_10), VAR_8 + VAR_2);
 FUNC_2(VAR_11, VAR_8 + VAR_5);


 FUNC_2(VAR_1 | VAR_12, VAR_8 + VAR_0);

 do {
  VAR_13 = FUNC_1(VAR_8 + VAR_4);
  FUNC_0();
 } while(!(VAR_13 & VAR_3) && --VAR_14);


 FUNC_2((VAR_13 & 0xFF) | VAR_3, VAR_8 + VAR_4);
 return VAR_14 ? 0 : 1;
}
