
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int currentline; char* source; char* short_src; } ;
typedef TYPE_1__ lua_Debug ;
struct TYPE_6__ {scalar_t__ base_dir; } ;
typedef TYPE_2__ chassis ;


 int VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int ,int const,char*,char const*,int,char const*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (int *,int,char*,char const* const*) ;
 char* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*,TYPE_1__*) ;
 int FUNC_6 (int *,int,TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_4) {
    static const char *const VAR_5[] = {"error", "critical",
        "warning", "message", "info", "debug", ((void*)0)};
 static const int VAR_6[] = {131, 133,
        128, 129,
        130, 132};

    int VAR_7 = FUNC_2(VAR_4, 1, "message", VAR_5);
 const char *VAR_8 = FUNC_3(VAR_4, 2, "nil");
 const char *VAR_9 = ((void*)0);
 const char *VAR_10 = "unknown";
 int VAR_11 = -1;
 int VAR_12 = -1;
 int VAR_13 = 1;
 lua_Debug VAR_14;
 chassis *VAR_15;


 do {

        if (!FUNC_6(VAR_4, VAR_13, &VAR_14)) break;
        if (!FUNC_5(VAR_4, "Sl", &VAR_14)) break;

  VAR_11 = VAR_14.currentline;
        VAR_9 = VAR_14.source;



  if (VAR_13 == 1) {
   VAR_10 = VAR_14.short_src;
   VAR_12 = VAR_14.currentline;
  }

 } while (++VAR_13 < 11 && VAR_9 && VAR_9[0] != '/' && VAR_9[0] != '@');

 if (VAR_9) {
  if (VAR_9[0] == '@') {

   VAR_9++;
  }
        FUNC_4(VAR_4, VAR_3, VAR_0);
        VAR_15 = (chassis*) FUNC_8(VAR_4, -1);
        FUNC_7(VAR_4, 1);
        if (VAR_15 && VAR_15->base_dir) {
            if (FUNC_1(VAR_9, VAR_15->base_dir)) {
                VAR_9 += FUNC_9(VAR_15->base_dir);

                if (VAR_9[0] == VAR_1) VAR_9++;
            }
        }
 }
    FUNC_0(VAR_2, VAR_6[VAR_7], "(%s:%d) %s", (VAR_9 ? VAR_9 : VAR_10),
   (VAR_9 ? VAR_11 : VAR_12), VAR_8);

 return 0;
}
