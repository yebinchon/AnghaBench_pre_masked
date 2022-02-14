
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static uint32_t FUNC_1(unsigned VAR_0)
{
 uint32_t VAR_1 = 128;

 VAR_0 /= 4;
 VAR_0 = FUNC_0(VAR_0, 8192u);

 while (VAR_1 < VAR_0)
  VAR_1 <<= 1;

 return VAR_1;
}
