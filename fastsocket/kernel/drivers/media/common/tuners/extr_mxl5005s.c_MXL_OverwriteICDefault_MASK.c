
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 scalar_t__ FUNC_0 (struct dvb_frontend*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u16 FUNC_1(struct dvb_frontend *VAR_4)
{
 u16 VAR_5 = 0;

 VAR_5 += FUNC_0(VAR_4, VAR_0, 1);
 VAR_5 += FUNC_0(VAR_4, VAR_1, 1);
 VAR_5 += FUNC_0(VAR_4, VAR_2, 1);
 VAR_5 += FUNC_0(VAR_4, VAR_3, 1);

 return VAR_5;
}
