
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, bool VAR_1, int VAR_2)
{
 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_1, VAR_2);
 }
 FUNC_0("multithreaded_bind_test %s", VAR_1 ? "IPv6" : "IPv4");
}
