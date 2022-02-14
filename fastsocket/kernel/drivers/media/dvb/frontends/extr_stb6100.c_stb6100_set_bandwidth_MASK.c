
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb6100_state {int dummy; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stb6100_state*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 struct stb6100_state *VAR_9 = VAR_5->tuner_priv;

 FUNC_0(VAR_4, VAR_0, 1, "set bandwidth to %u Hz", VAR_6);

 VAR_6 /= 2;

 if (VAR_6 >= 36000000)
  VAR_7 = 31;
 else if (VAR_6 <= 5000000)
  VAR_7 = 0;
 else
  VAR_7 = (VAR_6 + 500000) / 1000000 - 5;




 VAR_8 = FUNC_2(VAR_9, VAR_2, 0x0d | VAR_3);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_9, VAR_1, 0xc0 | VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(5);

 VAR_8 = FUNC_2(VAR_9, VAR_2, 0x0d);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(10);

 return 0;
}
