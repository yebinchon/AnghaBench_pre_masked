
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(void)
{
 int VAR_1;


 VAR_1 = FUNC_1(VAR_0, "dasd");
 if (VAR_1 != 0) {
  FUNC_0("Registering the device driver with major number "
      "%d failed\n", VAR_0);
  return VAR_1;
 }
 return 0;
}
