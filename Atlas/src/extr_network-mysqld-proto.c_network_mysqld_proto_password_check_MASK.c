
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsize ;
typedef int gboolean ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*,int,char const*,int,char const*,int) ;
 int FUNC_6 (int ,char const*,int) ;

gboolean FUNC_7(
  const char *VAR_2, gsize VAR_3,
  const char *VAR_4, gsize VAR_5,
  const char *VAR_6, gsize VAR_7) {

 GString *VAR_8, *VAR_9;
 gboolean VAR_10;

 FUNC_1(((void*)0) != VAR_4, VAR_0);
 FUNC_1(20 == VAR_5, VAR_0);
 FUNC_1(((void*)0) != VAR_2, VAR_0);
 FUNC_1(20 == VAR_3, VAR_0);
 FUNC_1(((void*)0) != VAR_6, VAR_0);
 FUNC_1(20 == VAR_7, VAR_0);

 VAR_8 = FUNC_3(((void*)0));

 FUNC_5(VAR_8,
   VAR_2, VAR_3,
   VAR_4, VAR_5,
   VAR_6, VAR_7);


 VAR_9 = FUNC_3(((void*)0));
 FUNC_4(VAR_9, FUNC_0(VAR_8));


 VAR_10 = FUNC_6(FUNC_0(VAR_9), VAR_6, VAR_7);

 FUNC_2(VAR_9, VAR_1);
 FUNC_2(VAR_8, VAR_1);

 return VAR_10;
}
