
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nxt6000_state {TYPE_1__* config; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ clock_inversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend* VAR_31)
{
 struct nxt6000_state* VAR_32 = VAR_31->demodulator_priv;

 FUNC_1(VAR_32, VAR_20, VAR_22);
 FUNC_1(VAR_32, VAR_2, (0x01 << 1) | 0x01);
 FUNC_1(VAR_32, VAR_27, 0x00);
 FUNC_1(VAR_32, VAR_26, 0x02);
 FUNC_1(VAR_32, VAR_25, 0x00);
 FUNC_1(VAR_32, VAR_29, 0x98);
 FUNC_1(VAR_32, VAR_28, 0x82);
 FUNC_1(VAR_32, VAR_28, VAR_30 | 0x02 );
 FUNC_1(VAR_32, VAR_11, (0x01 << 5) | (FUNC_0(VAR_32, VAR_11) & 0x0F));
 FUNC_1(VAR_32, VAR_12, VAR_7 | 0x02);
 FUNC_1(VAR_32, VAR_9, VAR_0 | VAR_8);
 FUNC_1(VAR_32, VAR_13, 0x06);
 FUNC_1(VAR_32, VAR_14, 0x31);
 FUNC_1(VAR_32, VAR_10, (0x01 << 7) | (0x02 << 3) | 0x04);
 FUNC_1(VAR_32, VAR_3, 0xBB);
 FUNC_1(VAR_32, VAR_16, 1 << 2);
 FUNC_1(VAR_32, VAR_15, VAR_19);
 FUNC_1(VAR_32, VAR_17, 0x49);
 FUNC_1(VAR_32, VAR_18, 0x72);
 FUNC_1(VAR_32, VAR_1, 1 << 5);
 FUNC_1(VAR_32, VAR_6, (1 << 7) | (3 << 4) | 2);
 FUNC_1(VAR_32, VAR_5, VAR_23);

 if (VAR_32->config->clock_inversion)
  FUNC_1(VAR_32, VAR_21, VAR_4);
 else
  FUNC_1(VAR_32, VAR_21, 0);

 FUNC_1(VAR_32, VAR_24, 0);
}
