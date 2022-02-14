
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_dir; } ;


 char* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(void){
  static char *VAR_0 = ((void*)0);
  if( VAR_0 ) return VAR_0;


  {
    struct passwd *VAR_1;
    uid_t VAR_2 = FUNC_2();
    if( (VAR_1=FUNC_1(VAR_2)) != ((void*)0)) {
      VAR_0 = VAR_1->pw_dir;
    }
  }
  if (!VAR_0) {
    VAR_0 = FUNC_0("HOME");
  }
  if( VAR_0 ){
    int VAR_3 = FUNC_6(VAR_0) + 1;
    char *VAR_4 = FUNC_3( VAR_3 );
    if( VAR_4 ) FUNC_4(VAR_4, VAR_0, VAR_3);
    VAR_0 = VAR_4;
  }

  return VAR_0;
}
