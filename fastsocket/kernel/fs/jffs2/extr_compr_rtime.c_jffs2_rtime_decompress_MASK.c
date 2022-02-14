
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int positions ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (short*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0,
      unsigned char *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3,
      void *VAR_4)
{
 short VAR_5[256];
 int VAR_6 = 0;
 int VAR_7=0;

 FUNC_1(VAR_5,0,sizeof(VAR_5));

 while (VAR_6<VAR_3) {
  unsigned char VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_8 = VAR_0[VAR_7++];
  VAR_1[VAR_6++] = VAR_8;
  VAR_10 = VAR_0[VAR_7++];
  VAR_9 = VAR_5[VAR_8];

  VAR_5[VAR_8]=VAR_6;
  if (VAR_10) {
   if (VAR_9 + VAR_10 >= VAR_6) {
    while(VAR_10) {
     VAR_1[VAR_6++] = VAR_1[VAR_9++];
     VAR_10--;
    }
   } else {
    FUNC_0(&VAR_1[VAR_6],&VAR_1[VAR_9],VAR_10);
    VAR_6+=VAR_10;
   }
  }
 }
 return 0;
}
