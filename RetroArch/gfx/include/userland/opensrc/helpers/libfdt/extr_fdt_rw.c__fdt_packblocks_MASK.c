
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_header {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_11(const char *VAR_0, char *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(sizeof(struct fdt_header), 8);
 VAR_5 = VAR_4 + VAR_2;
 VAR_6 = VAR_5 + VAR_3;

 FUNC_10(VAR_1 + VAR_4, VAR_0 + FUNC_3(VAR_0), VAR_2);
 FUNC_6(VAR_1, VAR_4);

 FUNC_10(VAR_1 + VAR_5, VAR_0 + FUNC_2(VAR_0), VAR_3);
 FUNC_5(VAR_1, VAR_5);
 FUNC_8(VAR_1, VAR_3);

 FUNC_10(VAR_1 + VAR_6, VAR_0 + FUNC_1(VAR_0),
  FUNC_9(VAR_0));
 FUNC_4(VAR_1, VAR_6);
 FUNC_7(VAR_1, FUNC_9(VAR_0));
}
