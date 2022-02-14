
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {char* data; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_9)
{
 struct tda9887_priv *VAR_10 = VAR_9->analog_demod_priv;
 char *VAR_11 = VAR_10->data;

 if (VAR_0 != VAR_6) {
  if (VAR_6)
   VAR_11[1] |= VAR_2;
  else
   VAR_11[1] &= ~VAR_2;
 }
 if (VAR_0 != VAR_7) {
  if (VAR_7)
   VAR_11[1] |= VAR_3;
  else
   VAR_11[1] &= ~VAR_3;
 }

 if (VAR_0 != VAR_8) {
  if (VAR_8)
   VAR_11[1] |= VAR_4;
  else
   VAR_11[1] &= ~VAR_4;
 }

 if (VAR_1 < 0x20) {
  VAR_11[2] &= ~VAR_5;
  VAR_11[2] |= VAR_1;
 }
 return 0;
}
