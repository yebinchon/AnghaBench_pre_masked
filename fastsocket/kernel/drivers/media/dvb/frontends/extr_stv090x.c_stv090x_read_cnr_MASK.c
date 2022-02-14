
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct stv090x_state {int delsys; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef int s32 ;
struct TYPE_4__ {int read; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct stv090x_state*,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_10, u16 *VAR_11)
{
 struct stv090x_state *VAR_12 = VAR_10->demodulator_priv;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 s32 VAR_17, VAR_18, VAR_19 = 0;
 u8 VAR_20;
 s32 VAR_21;
 u32 VAR_22;

 switch (VAR_12->delsys) {
 case 128:
  VAR_15 = FUNC_3(VAR_12, VAR_0);
  VAR_20 = FUNC_2(VAR_15, VAR_1);
  if (VAR_20) {
   FUNC_4(5);
   for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
    VAR_14 = FUNC_3(VAR_12, VAR_3);
    VAR_18 = FUNC_2(VAR_14, VAR_7);
    VAR_13 = FUNC_3(VAR_12, VAR_2);
    VAR_17 = FUNC_2(VAR_13, VAR_7);
    VAR_19 += FUNC_1(VAR_18, VAR_17);
    FUNC_4(1);
   }
   VAR_19 /= 16;
   VAR_22 = FUNC_0(VAR_9) - 1;
   VAR_21 = VAR_9[0].read -
         VAR_9[VAR_22].read;
   *VAR_11 = 0xFFFF - ((VAR_19 * 0xFFFF) / VAR_21);
  }
  break;

 case 129:
 case 130:
  VAR_15 = FUNC_3(VAR_12, VAR_0);
  VAR_20 = FUNC_2(VAR_15, VAR_1);
  if (VAR_20) {
   FUNC_4(5);
   for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
    VAR_14 = FUNC_3(VAR_12, VAR_5);
    VAR_18 = FUNC_2(VAR_14, VAR_6);
    VAR_13 = FUNC_3(VAR_12, VAR_4);
    VAR_17 = FUNC_2(VAR_13, VAR_6);
    VAR_19 += FUNC_1(VAR_18, VAR_17);
    FUNC_4(1);
   }
   VAR_19 /= 16;
   VAR_22 = FUNC_0(VAR_8) - 1;
   VAR_21 = VAR_8[0].read -
         VAR_8[VAR_22].read;
   *VAR_11 = 0xFFFF - ((VAR_19 * 0xFFFF) / VAR_21);
  }
  break;
 default:
  break;
 }

 return 0;
}
