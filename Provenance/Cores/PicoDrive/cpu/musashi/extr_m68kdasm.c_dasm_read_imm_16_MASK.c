
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static uint FUNC_1(uint VAR_4)
{
 uint VAR_5;
 if (VAR_3)
  VAR_5 = (VAR_3[VAR_1 + 0 - VAR_2] << 8) |
            VAR_3[VAR_1 + 1 - VAR_2];
 else
  VAR_5 = FUNC_0(VAR_1 & VAR_0) & 0xffff;
 VAR_1 += VAR_4;
 return VAR_5;
}
