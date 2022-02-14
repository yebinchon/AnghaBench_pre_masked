
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsize ;
typedef int gboolean ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,char*,int ) ;

gboolean FUNC_6(const GString *VAR_2, const GString *VAR_3) {
 char *VAR_4, *VAR_5;
 gsize VAR_6, VAR_7;
 gboolean VAR_8 = VAR_0;

 if (FUNC_2(VAR_2, VAR_3)) return VAR_1;

 VAR_4 = FUNC_3(FUNC_0(VAR_2));
 VAR_6 = FUNC_4(VAR_4);

 VAR_5 = FUNC_3(FUNC_0(VAR_3));
 VAR_7 = FUNC_4(VAR_5);

 VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_5, VAR_7);

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 return VAR_8;
}
