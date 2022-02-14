
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void *VAR_2, const char *VAR_3)
{
 (void)VAR_2;
 if (VAR_0)
 {
  FUNC_1(VAR_1, "Error: %s\n", VAR_3);
  FUNC_0(1);
 }
 else
  FUNC_2("Expected error hit: %s.\n", VAR_3);
}
