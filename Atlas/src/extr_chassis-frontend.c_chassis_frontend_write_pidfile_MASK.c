
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ,char*,int ,char const*,int *,...) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int *,int ) ;

int FUNC_10(const char *VAR_6, GError **VAR_7) {
 int VAR_8;
 int VAR_9 = 0;

 gchar *VAR_10;





 if (-1 == (VAR_8 = FUNC_7(VAR_6, VAR_4|VAR_3|VAR_2, 0600))) {
  FUNC_3(VAR_7,
    VAR_0,
    FUNC_1(VAR_5),
    "%s: open(%s) failed: %s",
    VAR_1,
    VAR_6,
    FUNC_5(VAR_5));

  return -1;
 }

 VAR_10 = FUNC_4("%d", FUNC_6());

 if (FUNC_9(VAR_8, VAR_10, FUNC_8(VAR_10)) < 0) {
  FUNC_3(VAR_7,
    VAR_0,
    FUNC_1(VAR_5),
    "%s: write(%s) of %s failed: %s",
    VAR_1,
    VAR_6,
    VAR_10,
    FUNC_5(VAR_5));
  VAR_9 = -1;
 }
 FUNC_2(VAR_10);

 FUNC_0(VAR_8);

 return VAR_9;
}
