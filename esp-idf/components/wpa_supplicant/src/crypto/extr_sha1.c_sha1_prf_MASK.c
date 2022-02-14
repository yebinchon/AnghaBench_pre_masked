
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const u8 *VAR_1, size_t VAR_2, const char *VAR_3,
      const u8 *VAR_4, size_t VAR_5, u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8 = 0;
 size_t VAR_9, VAR_10;
 u8 VAR_11[VAR_0];
 size_t VAR_12 = FUNC_2(VAR_3) + 1;
 const unsigned char *VAR_13[3];
 size_t VAR_14[3];

 VAR_13[0] = (u8 *) VAR_3;
 VAR_14[0] = VAR_12;
 VAR_13[1] = VAR_4;
 VAR_14[1] = VAR_5;
 VAR_13[2] = &VAR_8;
 VAR_14[2] = 1;

 VAR_9 = 0;
 while (VAR_9 < VAR_7) {
  VAR_10 = VAR_7 - VAR_9;
  if (VAR_10 >= VAR_0) {
   if (FUNC_0(VAR_1, VAR_2, 3, VAR_13, VAR_14,
          &VAR_6[VAR_9]))
    return -1;
   VAR_9 += VAR_0;
  } else {
   if (FUNC_0(VAR_1, VAR_2, 3, VAR_13, VAR_14,
          VAR_11))
    return -1;
   FUNC_1(&VAR_6[VAR_9], VAR_11, VAR_10);
   break;
  }
  VAR_8++;
 }

 return 0;
}
