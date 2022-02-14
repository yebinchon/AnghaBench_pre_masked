
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5h1409_state {int qam_state; } ;
struct dvb_frontend {struct s5h1409_state* demodulator_priv; } ;


 int FUNC_0 (struct s5h1409_state*,int) ;
 int FUNC_1 (struct s5h1409_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct s5h1409_state *VAR_1 = VAR_0->demodulator_priv;
 u16 VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_1, 0xf1);


 if ((VAR_2 >> 15) & 0x1) {
  if (VAR_1->qam_state != 2) {
   VAR_1->qam_state = 2;
   VAR_3 = FUNC_0(VAR_1, 0xb2);
   VAR_4 = FUNC_0(VAR_1, 0xad);

   FUNC_1(VAR_1, 0x96, 0x20);
   FUNC_1(VAR_1, 0xad,
    (((VAR_3 & 0xf000) >> 4) | (VAR_4 & 0xf0ff)));
   FUNC_1(VAR_1, 0xab,
    FUNC_0(VAR_1, 0xab) & 0xeffe);
  }
 } else {
  if (VAR_1->qam_state != 1) {
   VAR_1->qam_state = 1;
   FUNC_1(VAR_1, 0x96, 0x08);
   FUNC_1(VAR_1, 0xab,
    FUNC_0(VAR_1, 0xab) | 0x1001);
  }
 }
}
