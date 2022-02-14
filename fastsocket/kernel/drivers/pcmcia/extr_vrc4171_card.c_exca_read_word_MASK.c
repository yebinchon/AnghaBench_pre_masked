
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline uint16_t FUNC_2(int VAR_4, uint8_t VAR_5)
{
 uint16_t VAR_6;

 if (VAR_4 == VAR_2)
  VAR_5 += VAR_3;

 FUNC_1(VAR_5++, VAR_1);
 VAR_6 = FUNC_0(VAR_0);

 FUNC_1(VAR_5, VAR_1);
 VAR_6 |= ((uint16_t)FUNC_0(VAR_0)) << 8;

 return VAR_6;
}
