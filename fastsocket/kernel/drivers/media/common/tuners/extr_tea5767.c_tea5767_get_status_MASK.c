
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,unsigned char*) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u32 *VAR_3)
{
 unsigned char VAR_4[5];

 *VAR_3 = 0;

 if (0 == FUNC_0(VAR_2, VAR_4)) {
  if (FUNC_1(VAR_2, VAR_4))
   *VAR_3 = VAR_0;
  if (FUNC_2(VAR_2, VAR_4))
   *VAR_3 |= VAR_1;
 }

 return 0;
}
