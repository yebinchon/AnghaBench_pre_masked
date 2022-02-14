
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devt; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, mode_t *VAR_2)
{
 return FUNC_1(VAR_0, "cpu/%u/cpuid", FUNC_0(VAR_1->devt));
}
