
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bandwidth; } ;
struct stb6100_state {int bandwidth; TYPE_1__ status; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,int) ;
 int FUNC_1 (struct stb6100_state*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4, u32 *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 struct stb6100_state *VAR_8 = VAR_4->tuner_priv;

 VAR_6 = FUNC_1(VAR_8, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = VAR_6 & VAR_2;

 VAR_8->status.bandwidth = (VAR_7 + 5) * 2000;

 *VAR_5 = VAR_8->bandwidth = VAR_8->status.bandwidth * 1000;
 FUNC_0(VAR_3, VAR_0, 1, "bandwidth = %u Hz", VAR_8->bandwidth);
 return 0;
}
