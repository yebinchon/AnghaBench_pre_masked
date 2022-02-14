
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec23_private {unsigned char const* stream; unsigned char** table_0004_pass1; unsigned char** table_8004_pass1; unsigned char** table_0004_pass2; unsigned char** table_8004_pass2; int scalebits; int temp_colors; scalar_t__ nbits_in_reservoir; scalar_t__ reservoir; } ;


 int FUNC_0 (int ,unsigned char*,unsigned int,int ) ;
 int FUNC_1 (int ,unsigned char*,unsigned int,int ) ;
 int FUNC_2 (struct pwc_dec23_private*,unsigned char const*,unsigned char const*) ;
 int FUNC_3 (struct pwc_dec23_private*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pwc_dec23_private *VAR_0,
        const unsigned char *VAR_1,
        unsigned char *VAR_2,
        unsigned char *VAR_3,
        unsigned char *VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 const unsigned char *VAR_9;
 const unsigned char *VAR_10;

 VAR_0->reservoir = 0;
 VAR_0->nbits_in_reservoir = 0;
 VAR_0->stream = VAR_1 + 1;

 FUNC_3(VAR_0, 4, VAR_7);


 VAR_8 = VAR_5 / 4;

 VAR_9 = VAR_0->table_0004_pass1[VAR_7];
 VAR_10 = VAR_0->table_8004_pass1[VAR_7];


 while (VAR_8) {
  FUNC_2(VAR_0, VAR_9, VAR_10);
  FUNC_1(VAR_0->temp_colors, VAR_2, VAR_6, VAR_0->scalebits);
  VAR_2 += 4;
  VAR_8--;
 }


 VAR_8 = VAR_5 / 8;

 VAR_9 = VAR_0->table_0004_pass2[VAR_7];
 VAR_10 = VAR_0->table_8004_pass2[VAR_7];


 while (VAR_8) {
  FUNC_2(VAR_0, VAR_9, VAR_10);
  FUNC_0(VAR_0->temp_colors, VAR_3, VAR_6/2, VAR_0->scalebits);

  FUNC_2(VAR_0, VAR_9, VAR_10);
  FUNC_0(VAR_0->temp_colors, VAR_4, VAR_6/2, VAR_0->scalebits);

  VAR_4 += 8;
  VAR_3 += 8;
  VAR_8 -= 2;
 }

}
