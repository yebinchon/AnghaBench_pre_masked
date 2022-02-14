
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int positions ;


 int FUNC_0 (short*,int ,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0,
    unsigned char *VAR_1,
    uint32_t *VAR_2, uint32_t *VAR_3,
    void *VAR_4)
{
 short VAR_5[256];
 int VAR_6 = 0;
 int VAR_7=0;

 FUNC_0(VAR_5,0,sizeof(VAR_5));

 while (VAR_7 < (*VAR_2) && VAR_6 <= (*VAR_3)-2) {
  int VAR_8, VAR_9=0;
  unsigned char VAR_10;

  VAR_10 = VAR_0[VAR_7];

  VAR_1[VAR_6++] = VAR_0[VAR_7++];

  VAR_8 = VAR_5[VAR_10];
  VAR_5[VAR_10]=VAR_7;

  while ((VAR_8 < VAR_7) && (VAR_7 < (*VAR_2)) &&
         (VAR_0[VAR_7]==VAR_0[VAR_8++]) && (VAR_9<255)) {
   VAR_7++;
   VAR_9++;
  }
  VAR_1[VAR_6++] = VAR_9;
 }

 if (VAR_6 >= VAR_7) {

  return -1;
 }


 *VAR_2 = VAR_7;
 *VAR_3 = VAR_6;
 return 0;
}
