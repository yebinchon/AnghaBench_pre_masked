
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != 0)
 {
  FUNC_0(VAR_0, (FUNC_1(),
        FUNC_2("could not delete file \"%s\": %m", VAR_1)));
 }
}
