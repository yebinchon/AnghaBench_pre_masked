
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {scalar_t__ next_statistics_check; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 struct af9013_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 if (FUNC_4(VAR_0, VAR_2->next_statistics_check))
  return 0;


 VAR_2->next_statistics_check = VAR_0 + FUNC_3(1200);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto error;
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto error;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto error;

error:
 return VAR_3;
}
