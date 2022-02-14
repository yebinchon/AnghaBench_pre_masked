
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,unsigned char*,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_6(const void *VAR_0, size_t VAR_1, void *VAR_2, size_t VAR_3)
{


 int VAR_4 = 0;
 size_t VAR_5 = 2 * FUNC_1(VAR_3, VAR_1);
 size_t VAR_6 = 0;
 unsigned char VAR_7[VAR_5];
 unsigned char VAR_8[VAR_1];

 FUNC_2(VAR_8, VAR_0, VAR_1);
 FUNC_4(VAR_2, 0, VAR_3);
 do {
  FUNC_2(VAR_7 + VAR_6, VAR_8, VAR_1);
  VAR_6 += VAR_1;
  VAR_4 = FUNC_5(VAR_8, VAR_1 * 8);
  if (VAR_4)
   goto out;
  while(VAR_6 >= VAR_3) {
   FUNC_0(VAR_2, VAR_7, VAR_3);
   VAR_6 -= VAR_3;
   if(VAR_6 == 0)
    break;
   FUNC_3(VAR_7, VAR_7 + VAR_3, VAR_6);
  }
 } while(VAR_6 != 0);
out:

 return VAR_4;
}
