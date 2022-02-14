
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int d; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int*,int,int*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_7, fe_status_t *VAR_8)
{
 struct dtt200u_fe_state *VAR_9 = VAR_7->demodulator_priv;
 u8 VAR_10 = VAR_6, VAR_11[3];

 FUNC_0(VAR_9->d,&VAR_10,1,VAR_11,3,0);

 switch (VAR_11[0]) {
  case 0x01:
   *VAR_8 = VAR_2 | VAR_0 |
    VAR_4 | VAR_3 | VAR_1;
   break;
  case 0x00:
   *VAR_8 = VAR_5;
   break;
  default:
  case 0x02:
   *VAR_8 = 0;
   break;
 }
 return 0;
}
