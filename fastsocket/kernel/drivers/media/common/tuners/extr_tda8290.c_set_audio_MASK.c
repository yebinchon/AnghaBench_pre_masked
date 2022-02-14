
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8290_priv {int tda8290_easy_mode; int ver; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;
struct analog_parameters {int std; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_9,
        struct analog_parameters *VAR_10)
{
 struct tda8290_priv *VAR_11 = VAR_9->analog_demod_priv;
 char* VAR_12;

 if (VAR_10->std & VAR_4) {
  VAR_11->tda8290_easy_mode = 0x01;
  VAR_12 = "MN";
 } else if (VAR_10->std & VAR_1) {
  VAR_11->tda8290_easy_mode = 0x02;
  VAR_12 = "B";
 } else if (VAR_10->std & VAR_3) {
  VAR_11->tda8290_easy_mode = 0x04;
  VAR_12 = "GH";
 } else if (VAR_10->std & VAR_5) {
  VAR_11->tda8290_easy_mode = 0x08;
  VAR_12 = "I";
 } else if (VAR_10->std & VAR_2) {
  VAR_11->tda8290_easy_mode = 0x10;
  VAR_12 = "DK";
 } else if (VAR_10->std & VAR_6) {
  VAR_11->tda8290_easy_mode = 0x20;
  VAR_12 = "L";
 } else if (VAR_10->std & VAR_7) {
  VAR_11->tda8290_easy_mode = 0x40;
  VAR_12 = "LC";
 } else {
  VAR_11->tda8290_easy_mode = 0x10;
  VAR_12 = "xx";
 }

 if (VAR_10->mode == VAR_8) {

  VAR_11->tda8290_easy_mode = (VAR_11->ver & VAR_0) ? 0x80 : 0x01;
  FUNC_0("setting to radio FM\n");
 } else {
  FUNC_0("setting tda829x to system %s\n", VAR_12);
 }
}
