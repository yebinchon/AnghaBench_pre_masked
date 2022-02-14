
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct rs_control {size_t* index_of; size_t* alpha_to; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rs_control*,int *,int *,int,size_t*,int ,int*,int ,size_t*) ;
 size_t FUNC_1 (struct rs_control*,int) ;

__attribute__((used)) static int FUNC_2(struct rs_control *VAR_6, uint8_t *VAR_7, uint8_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12[8];
 uint8_t VAR_13;
 uint16_t VAR_14[4], VAR_15[5], VAR_16, VAR_17[8], VAR_18[4];


 VAR_14[0] = ((VAR_8[4] & 0xff) >> 0) | ((VAR_8[5] & 0x03) << 8);
 VAR_14[1] = ((VAR_8[5] & 0xfc) >> 2) | ((VAR_8[2] & 0x0f) << 6);
 VAR_14[2] = ((VAR_8[2] & 0xf0) >> 4) | ((VAR_8[3] & 0x3f) << 4);
 VAR_14[3] = ((VAR_8[3] & 0xc0) >> 6) | ((VAR_8[0] & 0xff) << 2);
 VAR_13 = VAR_8[1];


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  VAR_15[VAR_9] = VAR_14[0];





 for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_14[VAR_10] == 0)
   continue;
  VAR_16 = VAR_6->index_of[VAR_14[VAR_10]];
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   VAR_15[VAR_9] ^= VAR_6->alpha_to[FUNC_1(VAR_6, VAR_16 + (VAR_1 + VAR_9) * VAR_10)];
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_18[VAR_9])
   VAR_18[VAR_9] = FUNC_1(VAR_6, VAR_6->index_of[VAR_15[VAR_9]] + (VAR_3 - VAR_1 - VAR_9));
 }

 VAR_11 = FUNC_0(VAR_6, ((void*)0), ((void*)0), 1019, VAR_18, 0, VAR_12, 0, VAR_17);


 if (VAR_11 < 0)
  return VAR_11;






 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  int VAR_19, VAR_20, VAR_21 = 1015 - VAR_12[VAR_9];
  uint8_t VAR_22;
  if (VAR_21 >= VAR_2 && VAR_21 < 1019)
   continue;
  if (VAR_21 < VAR_2) {

   VAR_21 = 10 * (VAR_2 - 1 - VAR_21) - 6;


   VAR_19 = (VAR_21 >> 3) ^ 1;
   VAR_20 = VAR_21 & 7;
   if ((VAR_19 >= 0 && VAR_19 < VAR_5) || VAR_19 == (VAR_5 + 1)) {
    VAR_22 = (uint8_t) (VAR_17[VAR_9] >> (2 + VAR_20));
    VAR_13 ^= VAR_22;
    if (VAR_19 < VAR_5)
     VAR_7[VAR_19] ^= VAR_22;
   }
   VAR_19 = ((VAR_21 >> 3) + 1) ^ 1;
   VAR_20 = (VAR_20 + 10) & 7;
   if (VAR_20 == 0)
    VAR_20 = 8;
   if ((VAR_19 >= 0 && VAR_19 < VAR_5) || VAR_19 == (VAR_5 + 1)) {
    VAR_22 = (uint8_t) (VAR_17[VAR_9] << (8 - VAR_20));
    VAR_13 ^= VAR_22;
    if (VAR_19 < VAR_5)
     VAR_7[VAR_19] ^= VAR_22;
   }
  }
 }

 return VAR_13 ? -VAR_0 : VAR_11;
}
