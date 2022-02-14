
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct UPNPDev {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 struct UPNPDev* FUNC_2 (int,int*) ;
 int FUNC_3 (int,char const*) ;

struct UPNPDev *
FUNC_4(const char * VAR_0, const char * VAR_1, int * VAR_2)
{
 struct UPNPDev * VAR_3 = ((void*)0);
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0) {
  if (VAR_2)
   *VAR_2 = VAR_4;
  return ((void*)0);
 }
 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_5 < 0) {
  if (VAR_2)
   *VAR_2 = VAR_5;
 } else {
  VAR_3 = FUNC_2(VAR_4, VAR_2);
 }
 FUNC_1(VAR_4);
 return VAR_3;
}
