
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int voltage; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;
typedef int fe_sec_voltage_t ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
       fe_sec_voltage_t VAR_1)
{
 struct firedtv *VAR_2 = VAR_0->sec_priv;

 VAR_2->voltage = VAR_1;
 return 0;
}
