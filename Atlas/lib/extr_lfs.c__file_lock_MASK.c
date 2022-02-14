
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {void* l_len; void* l_start; int l_whence; int l_type; } ;
typedef void* off_t ;
typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,long) ;
 int FUNC_1 (int ,int ,struct flock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,long const,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_8, FILE *VAR_9, const char *VAR_10, const long VAR_11, long VAR_12, const char *VAR_13) {
 int VAR_14;
 struct flock VAR_15;
 switch (*VAR_10) {
  case 'w': VAR_15.l_type = VAR_3; break;
  case 'r': VAR_15.l_type = VAR_0; break;
  case 'u': VAR_15.l_type = VAR_2; break;
  default : return FUNC_5 (VAR_8, "%s: invalid mode", VAR_13);
 }
 VAR_15.l_whence = VAR_7;
 VAR_15.l_start = (off_t)VAR_11;
 VAR_15.l_len = (off_t)VAR_12;
 VAR_14 = FUNC_1 (FUNC_2(VAR_9), VAR_1, &VAR_15);

 return (VAR_14 != -1);
}
