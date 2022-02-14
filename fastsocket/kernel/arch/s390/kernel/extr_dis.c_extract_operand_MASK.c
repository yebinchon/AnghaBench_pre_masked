
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct operand {int shift; int bits; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned char *VAR_3,
        const struct operand *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;


 VAR_3 += VAR_4->shift / 8;
 VAR_6 = (VAR_4->shift & 7) + VAR_4->bits;
 VAR_5 = 0;
 do {
  VAR_5 <<= 8;
  VAR_5 |= (unsigned int) *VAR_3++;
  VAR_6 -= 8;
 } while (VAR_6 > 0);
 VAR_5 >>= -VAR_6;
 VAR_5 &= ((1U << (VAR_4->bits - 1)) << 1) - 1;


 if (VAR_4->bits == 20 && VAR_4->shift == 20)
  VAR_5 = (VAR_5 & 0xff) << 12 | (VAR_5 & 0xfff00) >> 8;


 if ((VAR_4->flags & (VAR_2 | VAR_1)) &&
     (VAR_5 & (1U << (VAR_4->bits - 1))))
  VAR_5 |= (-1U << (VAR_4->bits - 1)) << 1;


 if (VAR_4->flags & VAR_1)
  VAR_5 <<= 1;


 if (VAR_4->flags & VAR_0)
  VAR_5++;
 return VAR_5;
}
