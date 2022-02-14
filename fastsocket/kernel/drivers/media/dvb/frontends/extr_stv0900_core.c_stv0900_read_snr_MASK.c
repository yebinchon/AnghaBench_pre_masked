
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stv0900_table {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct dvb_frontend*,struct stv0900_table const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 s32 VAR_3 = FUNC_0(VAR_1,
   (const struct stv0900_table *)&VAR_0);
 VAR_3 = (VAR_3 + 30) * 384;
 if (VAR_3 < 0)
  VAR_3 = 0;

 if (VAR_3 > 65535)
  VAR_3 = 65535;

 *VAR_2 = VAR_3;

 return 0;
}
