
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,char const*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(const char *VAR_5, int VAR_6)
{
  char VAR_7[50];
  FILE *VAR_8;
  CURL *VAR_9;

  FUNC_5(VAR_7, 50, "%d.download", VAR_6);

  VAR_8 = FUNC_3(VAR_7, "wb");
  if(!VAR_8) {
    FUNC_4(VAR_4, "Error opening %s\n", VAR_7);
    return;
  }

  VAR_9 = FUNC_0();
  FUNC_1(VAR_9, VAR_2, VAR_8);
  FUNC_1(VAR_9, VAR_0, VAR_8);
  FUNC_1(VAR_9, VAR_1, VAR_5);
  FUNC_2(VAR_3, VAR_9);
  FUNC_4(VAR_4, "Added download %s -> %s\n", VAR_5, VAR_7);
}
