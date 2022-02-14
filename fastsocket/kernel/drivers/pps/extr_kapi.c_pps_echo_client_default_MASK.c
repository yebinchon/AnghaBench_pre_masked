
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct pps_device *VAR_2, int VAR_3,
  void *VAR_4)
{
 FUNC_0(VAR_2->dev, "echo %s %s\n",
  VAR_3 & VAR_0 ? "assert" : "",
  VAR_3 & VAR_1 ? "clear" : "");
}
