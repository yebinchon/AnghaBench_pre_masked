
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 fe_status_t VAR_2;

 FUNC_0(VAR_1, &VAR_2);

 return ((VAR_2 & VAR_0) == VAR_0);
}
