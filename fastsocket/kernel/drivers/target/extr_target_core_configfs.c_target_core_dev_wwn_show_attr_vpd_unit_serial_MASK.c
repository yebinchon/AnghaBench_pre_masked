
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_wwn {char* unit_serial; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct t10_wwn *VAR_0,
 char *VAR_1)
{
 return FUNC_0(VAR_1, "T10 VPD Unit Serial Number: %s\n",
  &VAR_0->unit_serial[0]);
}
