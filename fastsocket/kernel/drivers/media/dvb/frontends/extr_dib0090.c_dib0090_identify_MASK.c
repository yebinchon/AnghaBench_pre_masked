
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {int id; struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dib0090_state*,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static u16 FUNC_3(struct dvb_frontend *VAR_0)
{
 struct dib0090_state *VAR_1 = VAR_0->tuner_priv;
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0x1a);
 VAR_2 &= 0x3ff;
 FUNC_2("P/V: %04x:", VAR_2);

 if ((VAR_2 >> 8) & 0xf)
  FUNC_2("FE%d : Product ID = 0x%x : KROSUS", VAR_0->id, (VAR_2 >> 8) & 0xf);
 else
  return 0xff;

 VAR_2 &= 0xff;
 if (((VAR_2 >> 5) & 0x7) == 0x1)
  FUNC_2("FE%d : MP001 : 9090/8096", VAR_0->id);
 else if (((VAR_2 >> 5) & 0x7) == 0x4)
  FUNC_2("FE%d : MP005 : Single Sband", VAR_0->id);
 else if (((VAR_2 >> 5) & 0x7) == 0x6)
  FUNC_2("FE%d : MP008 : diversity VHF-UHF-LBAND", VAR_0->id);
 else if (((VAR_2 >> 5) & 0x7) == 0x7)
  FUNC_2("FE%d : MP009 : diversity 29098 CBAND-UHF-LBAND-SBAND", VAR_0->id);
 else
  return 0xff;


 if ((VAR_2 & 0x1f) == 0x3)
  FUNC_2("FE%d : P1-D/E/F detected", VAR_0->id);
 else if ((VAR_2 & 0x1f) == 0x1)
  FUNC_2("FE%d : P1C detected", VAR_0->id);
 else if ((VAR_2 & 0x1f) == 0x0) {




  FUNC_2("FE%d : P1-A/B detected: driver is deactivated - not available", VAR_0->id);
  return 0xff;

 }

 return VAR_2;
}
