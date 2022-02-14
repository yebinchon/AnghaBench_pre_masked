
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksign_signature {int sig_class; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct ksign_signature *VAR_0, void *VAR_1)
{
 struct ksign_signature **VAR_2 = VAR_1;

 if (VAR_0->sig_class != 0x00) {
  FUNC_0("ksign: standalone signature of class 0x%02x\n",
         VAR_0->sig_class);
  return 1;
 }

 if (*VAR_2)
  return 1;

 *VAR_2 = VAR_0;
 return 0;
}
