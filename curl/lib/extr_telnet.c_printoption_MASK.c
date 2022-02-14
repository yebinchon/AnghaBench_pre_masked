
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ verbose; } ;
struct Curl_easy {TYPE_1__ set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct Curl_easy*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_5(struct Curl_easy *VAR_6,
                        const char *VAR_7, int VAR_8, int VAR_9)
{
  if(VAR_6->set.verbose) {
    if(VAR_8 == VAR_2) {
      if(FUNC_1(VAR_9))
        FUNC_4(VAR_6, "%s IAC %s\n", VAR_7, FUNC_0(VAR_9));
      else
        FUNC_4(VAR_6, "%s IAC %d\n", VAR_7, VAR_9);
    }
    else {
      const char *VAR_10 = (VAR_8 == VAR_4) ? "WILL" :
                        (VAR_8 == VAR_5) ? "WONT" :
                        (VAR_8 == VAR_0) ? "DO" :
                        (VAR_8 == VAR_1) ? "DONT" : 0;
      if(VAR_10) {
        const char *VAR_11;
        if(FUNC_3(VAR_9))
          VAR_11 = FUNC_2(VAR_9);
        else if(VAR_9 == VAR_3)
          VAR_11 = "EXOPL";
        else
          VAR_11 = ((void*)0);

        if(VAR_11)
          FUNC_4(VAR_6, "%s %s %s\n", VAR_7, VAR_10, VAR_11);
        else
          FUNC_4(VAR_6, "%s %s %d\n", VAR_7, VAR_10, VAR_9);
      }
      else
        FUNC_4(VAR_6, "%s %d %d\n", VAR_7, VAR_8, VAR_9);
    }
  }
}
