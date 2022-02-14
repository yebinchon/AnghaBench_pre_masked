
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va1j5jf8007s_state {int tune_state; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct va1j5jf8007s_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct va1j5jf8007s_state*,int*) ;
 int FUNC_2 (struct va1j5jf8007s_state*,int*) ;
 int FUNC_3 (struct va1j5jf8007s_state*,int*) ;
 int FUNC_4 (struct va1j5jf8007s_state*) ;
 int FUNC_5 (struct va1j5jf8007s_state*) ;
 int FUNC_6 (struct va1j5jf8007s_state*) ;
 int FUNC_7 (struct va1j5jf8007s_state*) ;
 int FUNC_8 (struct va1j5jf8007s_state*) ;

__attribute__((used)) static int
FUNC_9(struct dvb_frontend *VAR_4,
    struct dvb_frontend_parameters *VAR_5,
    unsigned int VAR_6, unsigned int *VAR_7,
    fe_status_t *VAR_8)
{
 struct va1j5jf8007s_state *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_9 = VAR_4->demodulator_priv;

 if (VAR_5 != ((void*)0))
  VAR_9->tune_state = 133;

 switch (VAR_9->tune_state) {
 case 134:
  *VAR_7 = 3 * VAR_3;
  *VAR_8 = 0;
  return 0;

 case 133:
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9->tune_state = 132;
  *VAR_7 = 0;
  *VAR_8 = 0;
  return 0;

 case 132:
  VAR_10 = FUNC_5(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9->tune_state = 131;
  *VAR_7 = (VAR_3 + 99) / 100;
  *VAR_8 = 0;
  return 0;

 case 131:
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9->tune_state = 137;
  *VAR_7 = 0;
  *VAR_8 = 0;
  return 0;

 case 137:
  VAR_10 = FUNC_1(VAR_9, &VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_11) {
   *VAR_7 = (VAR_3 + 999) / 1000;
   *VAR_8 = 0;
   return 0;
  }

  VAR_9->tune_state = 130;
  *VAR_7 = 0;
  *VAR_8 = VAR_2;
  return 0;

 case 130:
  VAR_10 = FUNC_7(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9->tune_state = 136;
  *VAR_7 = 0;
  *VAR_8 = VAR_2;
  return 0;

 case 136:
  VAR_10 = FUNC_2(VAR_9, &VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_11) {
   *VAR_7 = (VAR_3 + 49) / 50;
   *VAR_8 = VAR_2;
   return 0;
  }

  VAR_9->tune_state = 129;
  *VAR_7 = 0;
  *VAR_8 = VAR_2 | VAR_0;
  return 0;

 case 129:
  VAR_10 = FUNC_8(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9->tune_state = 135;
  return 0;

 case 135:
  VAR_10 = FUNC_3(VAR_9, &VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_11) {
   *VAR_7 = (VAR_3 + 99) / 100;
   *VAR_8 = VAR_2 | VAR_0;
   return 0;
  }

  VAR_9->tune_state = 128;


 case 128:
  *VAR_7 = 3 * VAR_3;
  *VAR_8 = VAR_2 | VAR_0 | VAR_1;
  return 0;
 }

 FUNC_0();
}
