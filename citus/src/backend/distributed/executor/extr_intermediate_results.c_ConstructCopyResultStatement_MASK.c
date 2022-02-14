
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 () ;

__attribute__((used)) static StringInfo
FUNC_2(const char *VAR_0)
{
 StringInfo VAR_1 = FUNC_1();

 FUNC_0(VAR_1, "COPY \"%s\" FROM STDIN WITH (format result)",
      VAR_0);

 return VAR_1;
}
