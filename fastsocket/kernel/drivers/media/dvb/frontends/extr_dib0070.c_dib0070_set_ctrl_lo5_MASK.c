
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib0070_state* tuner_priv; } ;
struct dib0070_state {int dummy; } ;


 int FUNC_0 (struct dib0070_state*,int,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct dib0070_state *VAR_5 = VAR_0->tuner_priv;
    u16 VAR_6 = (VAR_4 << 14) | (0 << 13) | (1 << 12) | (3 << 9) | (VAR_3 << 6) | (VAR_2 << 3) | (VAR_1 << 0);
 FUNC_1("CTRL_LO5: 0x%x", VAR_6);
 return FUNC_0(VAR_5, 0x15, VAR_6);
}
