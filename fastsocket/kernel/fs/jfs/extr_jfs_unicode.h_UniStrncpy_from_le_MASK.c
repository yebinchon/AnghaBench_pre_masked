
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline wchar_t *FUNC_1(wchar_t * VAR_0, const __le16 * VAR_1,
       size_t VAR_2)
{
 wchar_t *VAR_3 = VAR_0;

 while (VAR_2-- && *VAR_1)
  *VAR_0++ = FUNC_0(*VAR_1++);

 VAR_2++;
 while (VAR_2--)
  *VAR_0++ = 0;
 return VAR_3;
}
