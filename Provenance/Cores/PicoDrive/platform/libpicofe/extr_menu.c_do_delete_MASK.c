
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int,int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int,int,char const*,int) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,int,char*) ;

__attribute__((used)) static void FUNC_10(const char *VAR_8, const char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 const char *VAR_13;
 char VAR_14[64];

 FUNC_3(1, 0);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10 > VAR_4 / VAR_7)
  VAR_10 = VAR_4 / VAR_7;

 VAR_11 = VAR_4 / 2;
 FUNC_9(VAR_11 - VAR_6 * 15 / 2, 8 * VAR_5, "About to delete");
 FUNC_6(VAR_11 - VAR_10 * VAR_7 / 2, 9 * VAR_5 + 5, VAR_9, 0xbdff);
 FUNC_9(VAR_11 - VAR_6 * 13 / 2, 11 * VAR_5, "Are you sure?");

 VAR_13 = FUNC_0(-1, -VAR_1);
 FUNC_7(VAR_14, sizeof(VAR_14), "(%s - confirm, ", VAR_13);
 VAR_10 = FUNC_8(VAR_14);
 VAR_13 = FUNC_0(-1, -VAR_2);
 FUNC_7(VAR_14 + VAR_10, sizeof(VAR_14) - VAR_10, "%s - cancel)", VAR_13);
 VAR_10 = FUNC_8(VAR_14);

 FUNC_9(VAR_11 - VAR_6 * VAR_10 / 2, 12 * VAR_5, VAR_14);
 FUNC_4();

 while (FUNC_2(((void*)0), 50) & (VAR_3|VAR_0));
 VAR_12 = FUNC_1(VAR_1|VAR_2, ((void*)0), 100);
 if (VAR_12 & VAR_1)
  FUNC_5(VAR_8);
}
