
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zd_addr_t ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_chip*,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_0, u8 *VAR_1, size_t VAR_2,
                zd_addr_t VAR_3, u32 VAR_4)
{
 int VAR_5;
 int VAR_6;
 u32 VAR_7;

 FUNC_0(FUNC_1(&VAR_0->mutex));
 for (VAR_6 = 0;;) {
  VAR_5 = FUNC_2(VAR_0, &VAR_7,
                  (zd_addr_t)((u16)VAR_3+VAR_6/2));
  if (VAR_5)
   return VAR_5;
  VAR_7 -= VAR_4;
  if (VAR_6+4 < VAR_2) {
   VAR_1[VAR_6++] = VAR_7;
   VAR_1[VAR_6++] = VAR_7 >> 8;
   VAR_1[VAR_6++] = VAR_7 >> 16;
   VAR_1[VAR_6++] = VAR_7 >> 24;
   continue;
  }
  for (;VAR_6 < VAR_2; VAR_6++)
   VAR_1[VAR_6] = VAR_7 >> (8*(VAR_6%3));
  return 0;
 }
}
