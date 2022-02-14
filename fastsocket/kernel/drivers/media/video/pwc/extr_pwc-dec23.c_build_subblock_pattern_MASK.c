
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec23_private {unsigned int** table_subblock; } ;
typedef int initial_values ;


 int FUNC_0 (unsigned int*,unsigned int const*,int) ;

__attribute__((used)) static void FUNC_1(struct pwc_dec23_private *VAR_0)
{
 static const unsigned int VAR_1[12] = {
  -0x526500, -0x221200, 0x221200, 0x526500,
      -0x3de200, 0x3de200,
  -0x6db480, -0x2d5d00, 0x2d5d00, 0x6db480,
      -0x12c200, 0x12c200

 };
 static const unsigned int VAR_2[12] = {
  0xa4ca, 0x4424, -0x4424, -0xa4ca,
   0x7bc4, -0x7bc4,
  0xdb69, 0x5aba, -0x5aba, -0xdb69,
   0x2584, -0x2584
 };
 unsigned int VAR_3[12];
 int VAR_4, VAR_5;

 FUNC_0(VAR_3, VAR_1, sizeof(VAR_1));
 for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 12; VAR_5++) {
   VAR_0->table_subblock[VAR_4][VAR_5] = VAR_3[VAR_5];
   VAR_3[VAR_5] += VAR_2[VAR_5];
  }
 }
}
