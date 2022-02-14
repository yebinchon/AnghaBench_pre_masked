
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __le16 ;



__attribute__((used)) static inline __le16 *FUNC_0(__le16 * VAR_0, const __le16 * VAR_1,
      size_t VAR_2)
{
 __le16 *VAR_3 = VAR_0;

 while (VAR_2-- && *VAR_1)
  *VAR_0++ = *VAR_1++;

 VAR_2++;
 while (VAR_2--)
  *VAR_0++ = 0;
 return VAR_3;
}
