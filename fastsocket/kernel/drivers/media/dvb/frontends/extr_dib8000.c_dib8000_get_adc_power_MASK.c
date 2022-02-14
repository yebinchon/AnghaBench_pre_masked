
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int* VAR_0 ;

int32_t FUNC_1(struct dvb_frontend *VAR_1, uint8_t VAR_2)
{
    struct dib8000_state *VAR_3 = VAR_1->demodulator_priv;
    uint32_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
    int32_t VAR_8;

    VAR_8 = FUNC_0(VAR_3, 384);

    if (VAR_2) {
 VAR_5 = VAR_8;
 while (VAR_5 >>= 1)
  VAR_6++;
 VAR_7 = (VAR_8 * 1000 / (1<<VAR_6));
 VAR_4 = (uint8_t)((VAR_7-1000)/100);
 VAR_8 = (VAR_0[VAR_4] + 693*(VAR_6-20) - 6908);
 VAR_8 = (VAR_8*256)/1000;
    }
    return VAR_8;
}
