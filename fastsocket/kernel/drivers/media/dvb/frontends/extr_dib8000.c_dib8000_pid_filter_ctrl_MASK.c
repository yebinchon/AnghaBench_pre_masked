
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
    u16 VAR_3 = FUNC_0(VAR_2, 299) & 0xffef;
    VAR_3 |= (VAR_1 & 0x1) << 4;

    FUNC_2("pid filter enabled %d", VAR_1);
    return FUNC_1(VAR_2, 299, VAR_3);
}
