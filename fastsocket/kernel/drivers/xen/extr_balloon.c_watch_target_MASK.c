
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_watch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int ,char*,char*,char*,unsigned long long*) ;

__attribute__((used)) static void FUNC_2(struct xenbus_watch *VAR_2,
    const char **VAR_3, unsigned int VAR_4)
{
 unsigned long long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, "memory", "target", "%llu", &VAR_5);
 if (VAR_6 != 1) {

  return;
 }




 FUNC_0(VAR_5 >> (VAR_0 - 10));
}
