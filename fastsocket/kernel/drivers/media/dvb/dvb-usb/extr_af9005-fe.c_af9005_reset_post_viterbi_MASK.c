
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5)
{
 struct af9005_fe_state *VAR_6 = VAR_5->demodulator_priv;
 int VAR_7;


 VAR_7 =
     FUNC_0(VAR_6->d, VAR_4,
           10000 & 0xff);
 if (VAR_7)
  return VAR_7;
 VAR_7 =
     FUNC_0(VAR_6->d, VAR_3,
           10000 >> 8);
 if (VAR_7)
  return VAR_7;

 VAR_7 =
     FUNC_1(VAR_6->d, VAR_2,
           VAR_1, VAR_0,
           1);

 return VAR_7;
}
