
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ter_tuna_204 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int k22; scalar_t__ dst_type; int type_flags; int tx_tuna; int cur_jiff; int bandwidth; scalar_t__ diseq_flags; int tone; int voltage; int inversion; } ;
typedef int sat_tuna_204 ;
typedef int cab_tuna_204 ;
typedef int atsc_tuner ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_10)
{
 struct dst_state *VAR_11 = VAR_10->demodulator_priv;

 static u8 VAR_12[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x00, 0x73, 0x21, 0x00, 0x00 };
 static u8 VAR_13[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x55, 0xbd, 0x50, 0x00, 0x00 };
 static u8 VAR_14[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_15[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_16[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_17[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_18[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };

 VAR_11->inversion = VAR_6;
 VAR_11->voltage = VAR_8;
 VAR_11->tone = VAR_7;
 VAR_11->diseq_flags = 0;
 VAR_11->k22 = 0x02;
 VAR_11->bandwidth = VAR_0;
 VAR_11->cur_jiff = VAR_9;
 if (VAR_11->dst_type == VAR_4)
  FUNC_0(VAR_11->tx_tuna, ((VAR_11->type_flags & VAR_1) ? VAR_12 : VAR_13), sizeof (VAR_13));
 else if (VAR_11->dst_type == VAR_5)
  FUNC_0(VAR_11->tx_tuna, ((VAR_11->type_flags & VAR_1) ? VAR_14 : VAR_15), sizeof (VAR_15));
 else if (VAR_11->dst_type == VAR_3)
  FUNC_0(VAR_11->tx_tuna, ((VAR_11->type_flags & VAR_1) ? VAR_16 : VAR_17), sizeof (VAR_17));
 else if (VAR_11->dst_type == VAR_2)
  FUNC_0(VAR_11->tx_tuna, VAR_18, sizeof (VAR_18));

 return 0;
}
