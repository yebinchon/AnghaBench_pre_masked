
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda18271_std_map_item {int dummy; } ;
struct tda18271_std_map {struct tda18271_std_map_item atv_i; struct tda18271_std_map_item atv_lc; struct tda18271_std_map_item atv_l; struct tda18271_std_map_item atv_dk; struct tda18271_std_map_item atv_gh; struct tda18271_std_map_item atv_b; struct tda18271_std_map_item atv_mn; struct tda18271_std_map_item fm_radio; } ;
struct tda18271_priv {int frequency; scalar_t__ bandwidth; int mode; struct tda18271_std_map std; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
struct analog_parameters {int frequency; int std; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dvb_frontend*,struct tda18271_std_map_item*,int,int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_9,
          struct analog_parameters *VAR_10)
{
 struct tda18271_priv *VAR_11 = VAR_9->tuner_priv;
 struct tda18271_std_map *VAR_12 = &VAR_11->std;
 struct tda18271_std_map_item *VAR_13;
 char *VAR_14;
 int VAR_15;
 u32 VAR_16 = VAR_10->frequency * 125 *
  ((VAR_10->mode == VAR_8) ? 1 : 1000) / 2;

 VAR_11->mode = VAR_0;

 if (VAR_10->mode == VAR_8) {
  VAR_13 = &VAR_12->fm_radio;
  VAR_14 = "fm";
 } else if (VAR_10->std & VAR_4) {
  VAR_13 = &VAR_12->atv_mn;
  VAR_14 = "MN";
 } else if (VAR_10->std & VAR_1) {
  VAR_13 = &VAR_12->atv_b;
  VAR_14 = "B";
 } else if (VAR_10->std & VAR_3) {
  VAR_13 = &VAR_12->atv_gh;
  VAR_14 = "GH";
 } else if (VAR_10->std & VAR_5) {
  VAR_13 = &VAR_12->atv_i;
  VAR_14 = "I";
 } else if (VAR_10->std & VAR_2) {
  VAR_13 = &VAR_12->atv_dk;
  VAR_14 = "DK";
 } else if (VAR_10->std & VAR_6) {
  VAR_13 = &VAR_12->atv_l;
  VAR_14 = "L";
 } else if (VAR_10->std & VAR_7) {
  VAR_13 = &VAR_12->atv_lc;
  VAR_14 = "L'";
 } else {
  VAR_13 = &VAR_12->atv_i;
  VAR_14 = "xx";
 }

 FUNC_1("setting tda18271 to system %s\n", VAR_14);

 VAR_15 = FUNC_0(VAR_9, VAR_13, VAR_16, 0);

 if (FUNC_2(VAR_15))
  goto fail;

 VAR_11->frequency = VAR_16;
 VAR_11->bandwidth = 0;
fail:
 return VAR_15;
}
