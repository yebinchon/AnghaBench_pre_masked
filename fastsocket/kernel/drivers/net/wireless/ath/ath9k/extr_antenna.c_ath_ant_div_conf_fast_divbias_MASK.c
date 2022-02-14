
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {int div_group; int main_lna_conf; int alt_lna_conf; int fast_div_bias; scalar_t__ alt_gaintb; scalar_t__ main_gaintb; } ;
struct ath_ant_comb {int scan; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ath_hw_antcomb_conf *VAR_1,
       struct ath_ant_comb *VAR_2,
       int VAR_3)
{
 VAR_1->main_gaintb = 0;
 VAR_1->alt_gaintb = 0;

 if (VAR_1->div_group == 0) {

  switch ((VAR_1->main_lna_conf << 4) |
    VAR_1->alt_lna_conf) {
  case 0x01:
   VAR_1->fast_div_bias = 0x3b;
   break;
  case 0x02:
   VAR_1->fast_div_bias = 0x3d;
   break;
  case 0x03:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x10:
   VAR_1->fast_div_bias = 0x7;
   break;
  case 0x12:
   VAR_1->fast_div_bias = 0x2;
   break;
  case 0x13:
   VAR_1->fast_div_bias = 0x7;
   break;
  case 0x20:
   VAR_1->fast_div_bias = 0x6;
   break;
  case 0x21:
   VAR_1->fast_div_bias = 0x0;
   break;
  case 0x23:
   VAR_1->fast_div_bias = 0x6;
   break;
  case 0x30:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x31:
   VAR_1->fast_div_bias = 0x3b;
   break;
  case 0x32:
   VAR_1->fast_div_bias = 0x3d;
   break;
  default:
   break;
  }
 } else if (VAR_1->div_group == 1) {

  switch ((VAR_1->main_lna_conf << 4) |
   VAR_1->alt_lna_conf) {
  case 0x01:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x02:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x03:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x10:
   if (!(VAR_2->scan) &&
       (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x3f;
   else
    VAR_1->fast_div_bias = 0x1;
   break;
  case 0x12:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x13:
   if (!(VAR_2->scan) &&
       (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x3f;
   else
    VAR_1->fast_div_bias = 0x1;
   break;
  case 0x20:
   if (!(VAR_2->scan) &&
       (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x3f;
   else
    VAR_1->fast_div_bias = 0x1;
   break;
  case 0x21:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x23:
   if (!(VAR_2->scan) &&
       (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x3f;
   else
    VAR_1->fast_div_bias = 0x1;
   break;
  case 0x30:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x31:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x32:
   VAR_1->fast_div_bias = 0x1;
   break;
  default:
   break;
  }
 } else if (VAR_1->div_group == 2) {

  switch ((VAR_1->main_lna_conf << 4) |
    VAR_1->alt_lna_conf) {
  case 0x01:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x02:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x03:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x10:
   if (!(VAR_2->scan) &&
    (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x1;
   else
    VAR_1->fast_div_bias = 0x2;
   break;
  case 0x12:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x13:
   if (!(VAR_2->scan) &&
    (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x1;
   else
    VAR_1->fast_div_bias = 0x2;
   break;
  case 0x20:
   if (!(VAR_2->scan) &&
    (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x1;
   else
    VAR_1->fast_div_bias = 0x2;
   break;
  case 0x21:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x23:
   if (!(VAR_2->scan) &&
    (VAR_3 > VAR_0))
    VAR_1->fast_div_bias = 0x1;
   else
    VAR_1->fast_div_bias = 0x2;
   break;
  case 0x30:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x31:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x32:
   VAR_1->fast_div_bias = 0x1;
   break;
  default:
   break;
  }
 } else if (VAR_1->div_group == 3) {
  switch ((VAR_1->main_lna_conf << 4) |
   VAR_1->alt_lna_conf) {
  case 0x01:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x02:
   VAR_1->fast_div_bias = 0x39;
   break;
  case 0x03:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x10:
   if ((VAR_2->scan == 0) &&
       (VAR_3 > VAR_0)) {
    VAR_1->fast_div_bias = 0x3f;
   } else {
    VAR_1->fast_div_bias = 0x1;
   }
   break;
  case 0x12:
   VAR_1->fast_div_bias = 0x39;
   break;
  case 0x13:
   if ((VAR_2->scan == 0) &&
       (VAR_3 > VAR_0)) {
    VAR_1->fast_div_bias = 0x3f;
   } else {
    VAR_1->fast_div_bias = 0x1;
   }
   break;
  case 0x20:
   if ((VAR_2->scan == 0) &&
       (VAR_3 > VAR_0)) {
    VAR_1->fast_div_bias = 0x3f;
   } else {
    VAR_1->fast_div_bias = 0x4;
   }
   break;
  case 0x21:
   VAR_1->fast_div_bias = 0x6;
   break;
  case 0x23:
   if ((VAR_2->scan == 0) &&
       (VAR_3 > VAR_0)) {
    VAR_1->fast_div_bias = 0x3f;
   } else {
    VAR_1->fast_div_bias = 0x6;
   }
   break;
  case 0x30:
   VAR_1->fast_div_bias = 0x1;
   break;
  case 0x31:
   VAR_1->fast_div_bias = 0x6;
   break;
  case 0x32:
   VAR_1->fast_div_bias = 0x1;
   break;
  default:
   break;
  }
 }
}
