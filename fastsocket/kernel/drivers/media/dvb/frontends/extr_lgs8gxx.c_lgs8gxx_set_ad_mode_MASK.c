
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgs8gxx_state {struct lgs8gxx_config* config; } ;
struct lgs8gxx_config {scalar_t__ if_freq; scalar_t__ prod; scalar_t__ ext_adc; scalar_t__ if_neg_edge; scalar_t__ adc_signed; scalar_t__ if_neg_center; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct lgs8gxx_state *VAR_1)
{
 const struct lgs8gxx_config *VAR_2 = VAR_1->config;
 u8 VAR_3;

 VAR_3 = 0x10;

 VAR_3 |=
  ((VAR_2->ext_adc) ? 0x80 : 0x00) |
  ((VAR_2->if_neg_center) ? 0x04 : 0x00) |
  ((VAR_2->if_freq == 0) ? 0x08 : 0x00) |
  ((VAR_2->adc_signed) ? 0x02 : 0x00) |
  ((VAR_2->if_neg_edge) ? 0x01 : 0x00);

 if (VAR_2->ext_adc &&
  (VAR_2->prod == VAR_0)) {
  FUNC_0(VAR_1, 0xBA, 0x40);
 }

 FUNC_0(VAR_1, 0x07, VAR_3);

 return 0;
}
