
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int dummy; } ;
struct radeon_cs_packet {int idx; unsigned int reg; int count; scalar_t__ one_reg_wr; } ;
typedef int (* radeon_packet0_check_t ) (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int,unsigned int) ;


 int VAR_0 ;

int FUNC_0(struct radeon_cs_parser *VAR_1,
     struct radeon_cs_packet *VAR_2,
     const unsigned *VAR_3, unsigned VAR_4,
     radeon_packet0_check_t VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;
 int VAR_11;

 VAR_10 = VAR_2->idx + 1;
 VAR_6 = VAR_2->reg;




 if (VAR_2->one_reg_wr) {
  if ((VAR_6 >> 7) > VAR_4) {
   return -VAR_0;
  }
 } else {
  if (((VAR_6 + (VAR_2->count << 2)) >> 7) > VAR_4) {
   return -VAR_0;
  }
 }
 for (VAR_7 = 0; VAR_7 <= VAR_2->count; VAR_7++, VAR_10++) {
  VAR_8 = (VAR_6 >> 7);
  VAR_9 = 1 << ((VAR_6 >> 2) & 31);
  if (VAR_3[VAR_8] & VAR_9) {
   VAR_11 = VAR_5(VAR_1, VAR_2, VAR_10, VAR_6);
   if (VAR_11) {
    return VAR_11;
   }
  }
  if (VAR_2->one_reg_wr) {
   if (!(VAR_3[VAR_8] & VAR_9)) {
    break;
   }
  } else {
   VAR_6 += 4;
  }
 }
 return 0;
}
