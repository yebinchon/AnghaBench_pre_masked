
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int dummy; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mt312_state*,int ,int*) ;
 int FUNC_2 (struct mt312_state*,int,int*,int) ;
 int FUNC_3 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3,
     struct dvb_diseqc_master_cmd *VAR_4)
{
 struct mt312_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;
 u8 VAR_7;

 if ((VAR_4->msg_len == 0) || (VAR_4->msg_len > sizeof(VAR_4->msg)))
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_5, VAR_1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5, (0x80 | VAR_0), VAR_4->msg, VAR_4->msg_len);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_1,
        (VAR_7 & 0x40) | ((VAR_4->msg_len - 1) << 3)
        | 0x04);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_0(100);


 if (VAR_4->msg[0] & 0x02) {
  VAR_6 = FUNC_3(VAR_5, VAR_1, (VAR_7 & 0x40));
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
