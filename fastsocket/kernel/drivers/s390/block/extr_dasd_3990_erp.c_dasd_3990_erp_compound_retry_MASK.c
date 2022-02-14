
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {int retries; void (* function ) (struct dasd_ccw_req*,char*) ;} ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct dasd_ccw_req * VAR_0, char *VAR_1)
{

 switch (VAR_1[25] & 0x03) {
 case 0x00:
  VAR_0->retries = 1;
  break;

 case 0x01:
  VAR_0->retries = 2;
  break;

 case 0x02:
  VAR_0->retries = 10;
  break;

 case 0x03:
  VAR_0->retries = 256;
  break;

 default:
  FUNC_0();
 }

 VAR_0->function = FUNC_1;

}
