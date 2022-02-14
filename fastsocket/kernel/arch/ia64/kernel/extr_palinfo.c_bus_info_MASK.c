
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int s64 ;
struct TYPE_5__ {int pal_bus_features_val; } ;
typedef TYPE_1__ pal_bus_features_u_t ;


 char** VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,char const*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1)
{
 char *VAR_2 = VAR_1;
 const char **VAR_3 = VAR_0;
 pal_bus_features_u_t VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 int VAR_10;
 s64 VAR_11;

 if ((VAR_11=FUNC_0(&VAR_4, &VAR_5, &VAR_6)) != 0) return 0;

 VAR_7 = VAR_4.pal_bus_features_val;
 VAR_8 = VAR_5.pal_bus_features_val;
 VAR_9 = VAR_6.pal_bus_features_val;

 for(VAR_10=0; VAR_10 < 64; VAR_10++, VAR_3++, VAR_7 >>=1, VAR_8 >>=1, VAR_9 >>=1) {
  if ( ! *VAR_3 ) continue;
  VAR_2 += FUNC_1(VAR_2, "%-48s : %s%s %s\n", *VAR_3,
    VAR_7 & 0x1 ? "" : "NotImpl",
    VAR_7 & 0x1 ? (VAR_8 & 0x1 ? "On" : "Off"): "",
    VAR_7 & 0x1 ? (VAR_9 & 0x1 ? "Ctrl" : "NoCtrl"): "");
 }
 return VAR_2 - VAR_1;
}
