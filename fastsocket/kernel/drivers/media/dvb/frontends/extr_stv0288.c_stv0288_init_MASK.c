
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stv0288_state {TYPE_1__* config; } ;
struct dvb_frontend {struct stv0288_state* demodulator_priv; } ;
struct TYPE_2__ {int* inittab; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int FUNC_2 (struct stv0288_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct stv0288_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;
 u8 VAR_4;
 u8 VAR_5;

 FUNC_0("stv0288: init chip\n");
 FUNC_2(VAR_2, 0x41, 0x04);
 FUNC_1(50);


 if (VAR_2->config->inittab == ((void*)0)) {
  for (VAR_3 = 0; !(VAR_0[VAR_3] == 0xff &&
    VAR_0[VAR_3 + 1] == 0xff); VAR_3 += 2)
   FUNC_2(VAR_2, VAR_0[VAR_3],
     VAR_0[VAR_3 + 1]);
 } else {
  for (VAR_3 = 0; ; VAR_3 += 2) {
   VAR_4 = VAR_2->config->inittab[VAR_3];
   VAR_5 = VAR_2->config->inittab[VAR_3+1];
   if (VAR_4 == 0xff && VAR_5 == 0xff)
    break;
   FUNC_2(VAR_2, VAR_4, VAR_5);
  }
 }
 return 0;
}
