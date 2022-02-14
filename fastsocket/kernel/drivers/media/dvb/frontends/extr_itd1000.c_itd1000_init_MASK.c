
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itd1000_state {int dummy; } ;
struct dvb_frontend {struct itd1000_state* tuner_priv; } ;


 int FUNC_0 (int **) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (struct itd1000_state*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct itd1000_state *VAR_3 = VAR_2->tuner_priv;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_3, VAR_0[VAR_4][0], VAR_0[VAR_4][1]);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_1(VAR_3, VAR_1[VAR_4][0], VAR_1[VAR_4][1]);

 return 0;
}
