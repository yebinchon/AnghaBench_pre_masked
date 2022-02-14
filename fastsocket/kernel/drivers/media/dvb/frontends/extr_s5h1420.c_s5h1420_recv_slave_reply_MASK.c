
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5h1420_state {int dummy; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;
struct dvb_diseqc_slave_reply {int timeout; int msg_len; int* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s5h1420_state*,int) ;
 int FUNC_2 (struct s5h1420_state*,int,int) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5 (struct dvb_frontend* VAR_5,
         struct dvb_diseqc_slave_reply* VAR_6)
{
 struct s5h1420_state* VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;


 VAR_8 = FUNC_1(VAR_7, 0x3b);
 FUNC_2(VAR_7, 0x3b, 0x82);
 FUNC_0(15);


 VAR_11 = VAR_4 + ((VAR_6->timeout*VAR_3) / 1000);
 while(FUNC_4(VAR_4, VAR_11)) {
  if (!(FUNC_1(VAR_7, 0x3b) & 0x80))
   break;

  FUNC_0(5);
 }
 if (FUNC_3(VAR_4, VAR_11)) {
  VAR_12 = -VAR_2;
  goto exit;
 }



 if (FUNC_1(VAR_7, 0x49)) {
  VAR_12 = -VAR_0;
  goto exit;
 }


 VAR_10 = (FUNC_1(VAR_7, 0x3b) & 0x70) >> 4;
 if (VAR_10 > sizeof(VAR_6->msg)) {
  VAR_12 = -VAR_1;
  goto exit;
 }
 VAR_6->msg_len = VAR_10;


 for(VAR_9=0; VAR_9< VAR_10; VAR_9++) {
  VAR_6->msg[VAR_9] = FUNC_1(VAR_7, 0x3d + VAR_9);
 }

exit:

 FUNC_2(VAR_7, 0x3b, VAR_8);
 FUNC_0(15);
 return VAR_12;
}
