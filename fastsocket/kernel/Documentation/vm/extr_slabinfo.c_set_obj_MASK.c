
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_5(struct slabinfo *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3[100];
 FILE *VAR_4;

 FUNC_4(VAR_3, 100, "%s/%s", VAR_0->name, VAR_1);
 VAR_4 = FUNC_2(VAR_3, "w");
 if (!VAR_4)
  FUNC_0("Cannot write to %s\n", VAR_3);

 FUNC_3(VAR_4, "%d\n", VAR_2);
 FUNC_1(VAR_4);
}
