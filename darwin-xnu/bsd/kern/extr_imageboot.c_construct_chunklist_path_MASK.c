
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char*) ;
 size_t FUNC_6 (char const*,size_t) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_3, char **VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_0("failed to allocate space for chunklist path");
  VAR_5 = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_2);
 if (VAR_7 < VAR_2 && VAR_7 > FUNC_5(".dmg")) {

 } else {
  FUNC_0("malformed root path");
  VAR_5 = VAR_0;
  goto out;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_2);
 if (VAR_7 >= VAR_2) {
  FUNC_0("root path is too long");
  VAR_5 = VAR_0;
  goto out;
 }

 VAR_6[VAR_7 - FUNC_5(".dmg")] = '\0';
 VAR_7 = FUNC_3(VAR_6, ".chunklist", VAR_2);
 if (VAR_7 >= VAR_2) {
  FUNC_0("chunklist path is too long");
  VAR_5 = VAR_0;
  goto out;
 }

out:
 if (VAR_5) {
  FUNC_2(VAR_6);
 } else {
  *VAR_4 = VAR_6;
 }
 return VAR_5;
}
