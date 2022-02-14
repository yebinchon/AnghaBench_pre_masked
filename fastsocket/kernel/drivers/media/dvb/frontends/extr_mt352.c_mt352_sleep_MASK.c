
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef int mt352_softdown ;



 int FUNC_0 (struct dvb_frontend*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 static u8 VAR_1[] = { 128, 0x20, 0x08 };

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 return 0;
}
