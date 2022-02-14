
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ethtool_string {char* name; } ;


 int FUNC_0 (char*,int,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0,
     struct ethtool_string *VAR_1, u64 *VAR_2,
     int *VAR_3, const char *VAR_4, int VAR_5,
     const char *VAR_6, const char *VAR_7)
{
 struct ethtool_string VAR_8, VAR_9;


 if (VAR_2)
  VAR_2[VAR_0] = *VAR_3;


 if (VAR_1) {
  if (FUNC_1(VAR_4, '%'))
   FUNC_0(VAR_8.name, sizeof(VAR_8.name),
     VAR_4, VAR_5);
  else
   FUNC_2(VAR_8.name, VAR_4);
  FUNC_0(VAR_9.name, sizeof(VAR_9.name),
    VAR_6, VAR_7);
  FUNC_0(VAR_1[VAR_0].name,
    sizeof(VAR_1[VAR_0].name),
    "%-6s %-24s", VAR_8.name, VAR_9.name);
 }
}
