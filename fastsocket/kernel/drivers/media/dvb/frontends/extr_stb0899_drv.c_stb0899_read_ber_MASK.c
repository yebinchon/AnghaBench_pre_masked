
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb0899_internal {int err_ctrl; int lock; int v_status; } ;
struct stb0899_state {int delsys; int verbose; struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;



 int VAR_5 ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stb0899_state*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_6, u32 *VAR_7)
{
 struct stb0899_state *VAR_8 = VAR_6->demodulator_priv;
 struct stb0899_internal *VAR_9 = &VAR_8->internal;

 u8 VAR_10, VAR_11;
 u32 VAR_12;

 *VAR_7 = 0;

 switch (VAR_8->delsys) {
 case 129:
 case 130:
  if (VAR_9->lock) {

   for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
    FUNC_3(100);
    VAR_10 = FUNC_4(VAR_8, VAR_3);
    VAR_11 = FUNC_4(VAR_8, VAR_4);
    *VAR_7 += FUNC_0(VAR_11, VAR_10);
   }
   *VAR_7 /= 5;

   if (FUNC_1(VAR_5, VAR_9->v_status)) {

    *VAR_7 *= 9766;

    *VAR_7 /= (-1 + (1 << (2 * FUNC_1(VAR_2, VAR_9->err_ctrl))));
    *VAR_7 /= 8;
   }
  }
  break;
 case 128:
  if (VAR_9->lock) {

   for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
    FUNC_3(100);
    VAR_10 = FUNC_4(VAR_8, VAR_3);
    VAR_11 = FUNC_4(VAR_8, VAR_4);
    *VAR_7 += FUNC_0(VAR_11, VAR_10);
   }

   *VAR_7 *= 10000000;
   *VAR_7 /= (-1 + (1 << (4 + 2 * FUNC_1(VAR_2, VAR_9->err_ctrl))));
  }
  break;
 default:
  FUNC_2(VAR_8->verbose, VAR_1, 1, "Unsupported delivery system");
  return -VAR_0;
 }

 return 0;
}
