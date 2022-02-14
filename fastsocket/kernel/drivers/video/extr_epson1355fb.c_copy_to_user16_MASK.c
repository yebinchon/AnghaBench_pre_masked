
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,void*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline unsigned long FUNC_4(void *VAR_1, const void *VAR_2,
        unsigned long VAR_3)
{
 u16 *VAR_4 = (u16 *) VAR_1;
 u16 *VAR_5 = (u16 *) VAR_2;

 if (!FUNC_1(VAR_0, VAR_1, VAR_3))
  return VAR_3;

 while (VAR_3 > 1) {
  u16 VAR_6 = FUNC_3(VAR_5);

  if (FUNC_0(VAR_6, VAR_4))
   return VAR_3;

  VAR_5++, VAR_4++;
  VAR_3 -= 2;
 }

 if (VAR_3) {
  u8 VAR_7 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_7, ((u8 *) VAR_4)))
   return VAR_3;
 }
 return 0;
}
