
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xc2028_config {int i2c_addr; int * i2c_adap; } ;
struct em28xx {int name; TYPE_1__* dvb; int i2c_adap; } ;
struct dvb_frontend {int dummy; } ;
typedef int cfg ;
struct TYPE_2__ {int * frontend; } ;


 int VAR_0 ;
 struct dvb_frontend* FUNC_0 (int ,int *,struct xc2028_config*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct xc2028_config*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(u8 VAR_2, struct em28xx *VAR_3)
{
 struct dvb_frontend *VAR_4;
 struct xc2028_config VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.i2c_adap = &VAR_3->i2c_adap;
 VAR_5.i2c_addr = VAR_2;

 if (!VAR_3->dvb->frontend) {
  FUNC_2("/2: dvb frontend not attached. "
    "Can't attach xc3028\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3->dvb->frontend, &VAR_5);
 if (!VAR_4) {
  FUNC_2("/2: xc3028 attach failed\n");
  FUNC_1(VAR_3->dvb->frontend);
  VAR_3->dvb->frontend = ((void*)0);
  return -VAR_0;
 }

 FUNC_3("%s/2: xc3028 attached\n", VAR_3->name);

 return 0;
}
