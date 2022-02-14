
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (struct dvb_frontend*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 if (VAR_0 == 1)
  return FUNC_0(VAR_1, VAR_2);
 else
  return FUNC_1(VAR_1, VAR_2);
}
