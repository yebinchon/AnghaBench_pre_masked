
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pardevice {int daisy; int port; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pardevice*) ;
 int FUNC_1 (struct pardevice*) ;
 int FUNC_2 (int ,int) ;
 struct pardevice* FUNC_3 (int,char*) ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (struct pardevice*) ;
 int FUNC_6 (int ,int ,char*) ;

ssize_t FUNC_7 (int VAR_4, char *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7 = -VAR_0;
 struct pardevice *VAR_8 = FUNC_3 (VAR_4, "Device ID probe");
 if (!VAR_8)
  return -VAR_0;

 FUNC_0 (VAR_8);




 FUNC_2 (VAR_8->port, VAR_2);
 VAR_7 = FUNC_2 (VAR_8->port,
        VAR_3 | VAR_1);

 if (!VAR_7) {
  VAR_7 = FUNC_4 (VAR_8->port, VAR_5, VAR_6);
  FUNC_2 (VAR_8->port, VAR_2);
  if (VAR_7 > 2)
   FUNC_6 (VAR_8->port, VAR_8->daisy, VAR_5+2);
 }

 FUNC_5 (VAR_8);
 FUNC_1 (VAR_8);
 return VAR_7;
}
