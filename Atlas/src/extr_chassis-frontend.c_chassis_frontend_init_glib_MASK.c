
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6() {
 const gchar *VAR_7 = ((void*)0);




 if (!FUNC_0(2, 6, 0)) {
  FUNC_1("the glib header are too old, need at least 2.6.0, got: %d.%d.%d",
    VAR_0, VAR_2, VAR_1);

  return -1;
 }

 VAR_7 = FUNC_5(VAR_0, VAR_2, VAR_1);

 if (VAR_7) {
  FUNC_1("%s, got: lib=%d.%d.%d, headers=%d.%d.%d",
   VAR_7,
   VAR_3, VAR_6, VAR_5,
   VAR_0, VAR_2, VAR_1);

  return -1;
 }

 if (!FUNC_3()) {
  FUNC_1("loading modules is not supported on this platform");
  return -1;
 }

 FUNC_4(((void*)0));

 return 0;
}
