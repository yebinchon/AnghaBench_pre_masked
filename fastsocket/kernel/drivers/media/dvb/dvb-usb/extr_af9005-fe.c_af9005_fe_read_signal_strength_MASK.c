
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int * release; } ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3,
       u16 * VAR_4)
{
 struct af9005_fe_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;
 u8 VAR_7, VAR_8;

 if (VAR_3->ops.tuner_ops.release == ((void*)0))
  return -VAR_0;
 VAR_6 =
     FUNC_0(VAR_5->d, VAR_2,
          &VAR_8);
 if (VAR_6)
  return VAR_6;
 VAR_6 =
     FUNC_0(VAR_5->d, VAR_1,
          &VAR_7);
 if (VAR_6)
  return VAR_6;


 *VAR_4 = (512 - VAR_8 - VAR_7) << 7;
 return 0;
}
