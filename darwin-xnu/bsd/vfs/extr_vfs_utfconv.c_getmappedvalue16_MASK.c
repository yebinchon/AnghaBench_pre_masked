
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ _key; scalar_t__ _value; } ;
typedef TYPE_1__ unicode_mappings16 ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;



__attribute__((used)) static inline u_int16_t
FUNC_0(const unicode_mappings16 *VAR_0, u_int32_t VAR_1,
  u_int16_t VAR_2)
{
 const unicode_mappings16 *VAR_3, *VAR_4, *VAR_5;

 if ((VAR_2 < VAR_0[0]._key) || (VAR_2 > VAR_0[VAR_1-1]._key))
  return (0);

 VAR_3 = VAR_0;
 VAR_4 = VAR_3 + (VAR_1-1);
 while (VAR_3 <= VAR_4) {
  VAR_5 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
  if (VAR_2 < VAR_5->_key)
   VAR_4 = VAR_5 - 1;
  else if (VAR_2 > VAR_5->_key)
   VAR_3 = VAR_5 + 1;
  else
   return (VAR_5->_value);
 }
 return (0);
}
