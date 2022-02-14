
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;



__attribute__((used)) static unsigned char FUNC_0(struct super_block *VAR_0, unsigned char *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = VAR_3 = VAR_4 = VAR_5 = 0;
 for (VAR_6 = VAR_0->s_blocksize - 4; VAR_6; VAR_6 -= 4) {
  VAR_2 += VAR_1[VAR_6] + (VAR_5 >> 8);
  VAR_5 &= 0xff;
  VAR_3 += VAR_1[VAR_6 + 1] + (VAR_2 >> 8);
  VAR_2 &= 0xff;
  VAR_4 += VAR_1[VAR_6 + 2] + (VAR_3 >> 8);
  VAR_3 &= 0xff;
  VAR_5 += VAR_1[VAR_6 + 3] + (VAR_4 >> 8);
  VAR_4 &= 0xff;
 }
 VAR_2 += VAR_5 >> 8;
 VAR_3 += VAR_1[1] + (VAR_2 >> 8);
 VAR_4 += VAR_1[2] + (VAR_3 >> 8);
 VAR_5 += VAR_1[3] + (VAR_4 >> 8);

 return VAR_2 ^ VAR_3 ^ VAR_4 ^ VAR_5;
}
