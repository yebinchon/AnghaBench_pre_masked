
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;
struct dst_state {scalar_t__ dst_type; int dst_hw_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct dst_state*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, struct dvb_diseqc_master_cmd *VAR_5)
{
 struct dst_state *VAR_6 = VAR_4->demodulator_priv;
 u8 VAR_7[8] = { 0x00, 0x08, 0x04, 0xe0, 0x10, 0x38, 0xf0, 0xec };

 if (VAR_6->dst_type != VAR_1)
  return -VAR_3;
 if (VAR_5->msg_len > 0 && VAR_5->msg_len < 5)
  FUNC_2(&VAR_7[3], VAR_5->msg, VAR_5->msg_len);
 else if (VAR_5->msg_len == 5 && VAR_6->dst_hw_cap & VAR_0)
  FUNC_2(&VAR_7[2], VAR_5->msg, VAR_5->msg_len);
 else
  return -VAR_2;
 VAR_7[7] = FUNC_0(&VAR_7[0], 7);
 return FUNC_1(VAR_6, VAR_7, 8);
}
