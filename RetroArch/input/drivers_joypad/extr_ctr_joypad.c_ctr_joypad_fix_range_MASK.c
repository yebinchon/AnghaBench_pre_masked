
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static int16_t FUNC_0(int16_t VAR_0)
{
   VAR_0 = (VAR_0 > 127)? 127: (VAR_0 < -127)? -127: VAR_0;
   return VAR_0 * 256;
}
