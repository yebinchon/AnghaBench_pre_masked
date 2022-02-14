
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vp7045_fe_state {int d; } ;
struct dvb_frontend {struct vp7045_fe_state* demodulator_priv; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32 *VAR_1)
{
 struct vp7045_fe_state *VAR_2 = VAR_0->demodulator_priv;
 *VAR_1 = (FUNC_0(VAR_2->d, 0x0D) << 16) |
        (FUNC_0(VAR_2->d, 0x0E) << 8) |
  FUNC_0(VAR_2->d, 0x0F);
 return 0;
}
