
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int pwbuf ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_6 (char const*,char**,char**,int*,int*,char*) ;

int FUNC_7(const char *VAR_2,
                    char **VAR_3,
                    char **VAR_4,
                    bool *VAR_5,
                    bool *VAR_6,
                    char *VAR_7)
{
  int VAR_8 = 1;
  char *VAR_9 = ((void*)0);

  if(!VAR_7) {
    char *VAR_10 = ((void*)0);
    char *VAR_11 = FUNC_0("HOME");
    if(VAR_11) {
      VAR_10 = VAR_11;
    }

    if(!VAR_10)
      return VAR_8;


    VAR_9 = FUNC_1("%s%s.netrc", VAR_10, VAR_0);
    if(!VAR_9) {
      FUNC_2(VAR_11);
      return -1;
    }
    VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5,
                         VAR_6, VAR_9);
    FUNC_2(VAR_9);
    FUNC_2(VAR_11);
  }
  else
    VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5,
                         VAR_6, VAR_7);
  return VAR_8;
}
