
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  FUNC_0(1, "Failed to open %s", VAR_0);
 return VAR_2;
}
