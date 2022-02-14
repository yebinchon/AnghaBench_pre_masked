
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*) ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ipath_devdata*,char*,int) ;
 int FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (struct ipath_devdata*) ;

__attribute__((used)) static int FUNC_6(struct ipath_devdata *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_2, "Failed reset probing device 0x%02X\n",
         VAR_3);
  return VAR_4;
 }




 VAR_4 = FUNC_1(VAR_2, VAR_3 | VAR_0);
 if (VAR_4)
  FUNC_2(VAR_1, "Failed startcmd for device 0x%02X\n",
      VAR_3);
 else {





  int VAR_5;
  VAR_5 = FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  FUNC_2(VAR_1, "Response from device 0x%02X\n", VAR_3);
 }
 return VAR_4;
}
