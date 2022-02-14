
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * adap; } ;
struct tuner_simple_priv {int type; TYPE_1__ i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3, u32 *VAR_4)
{
 struct tuner_simple_priv *VAR_5 = VAR_3->tuner_priv;
 int VAR_6;

 if (VAR_5->i2c_props.adap == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3);

 *VAR_4 = 0;

 if (FUNC_2(VAR_6))
  *VAR_4 = VAR_1;
 if (FUNC_4(VAR_5->type, VAR_6))
  *VAR_4 |= VAR_2;

 FUNC_1("AFC Status: %d\n", FUNC_0(VAR_6));

 return 0;
}
