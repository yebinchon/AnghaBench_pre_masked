
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int gchar ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int ,char*,int const*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,struct stat*) ;

int FUNC_4(const gchar *VAR_6, int VAR_7, GError **VAR_8) {

 struct stat VAR_9;
 mode_t VAR_10;

 if (FUNC_3(VAR_6, &VAR_9) == -1) {
  FUNC_1(VAR_8, VAR_0, FUNC_0(VAR_5),
    "cannot stat(%s): %s", VAR_6,
    FUNC_2(VAR_5));
  return -1;
 }

 VAR_10 = VAR_9.st_mode;
 if ((VAR_10 & VAR_3) != VAR_4) {
  FUNC_1(VAR_8, VAR_0, VAR_1,
    "%s isn't a regular file", VAR_6);
  return -1;
 }

 if ((VAR_10 & VAR_7) != 0) {
  FUNC_1(VAR_8, VAR_0, VAR_2,
    "permissions of %s aren't secure (0660 or stricter required)", VAR_6);
  return 1;
 }




 return 0;
}
