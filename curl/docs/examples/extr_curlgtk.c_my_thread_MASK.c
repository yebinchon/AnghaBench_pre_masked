
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int FILE ;
typedef int CURL ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,long) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;

void *FUNC_6(void *VAR_11)
{
  CURL *VAR_12;

  VAR_12 = FUNC_1();
  if(VAR_12) {
    gchar *VAR_13 = VAR_11;
    const char *VAR_14 = "test.curl";
    FILE *VAR_15 = FUNC_5(VAR_14, "wb");

    FUNC_3(VAR_12, VAR_5, VAR_13);
    FUNC_3(VAR_12, VAR_6, VAR_15);
    FUNC_3(VAR_12, VAR_7, VAR_10);
    FUNC_3(VAR_12, VAR_4, VAR_9);
    FUNC_3(VAR_12, VAR_1, 0L);
    FUNC_3(VAR_12, VAR_3, VAR_8);
    FUNC_3(VAR_12, VAR_2, VAR_0);

    FUNC_2(VAR_12);

    FUNC_4(VAR_15);

    FUNC_0(VAR_12);
  }

  return ((void*)0);
}
