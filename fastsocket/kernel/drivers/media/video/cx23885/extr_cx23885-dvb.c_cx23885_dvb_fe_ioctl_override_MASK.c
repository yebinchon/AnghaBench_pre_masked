
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {int dummy; } ;





 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
      unsigned int VAR_1, void *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3) {
 case 129:

  switch (VAR_1) {
  case 128:
   VAR_4 = FUNC_0(VAR_0,
    (struct dvb_frontend_parameters *) VAR_2);
   break;
  }
  break;

 case 130:

  break;
 }
 return VAR_4;
}
