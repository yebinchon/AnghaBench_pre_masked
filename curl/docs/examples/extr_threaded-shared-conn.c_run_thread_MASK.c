
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initurl {long url; long share; int threadno; } ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,long) ;
 int FUNC_4 (int ,char*,int,int) ;
 int VAR_5 ;
 long VAR_6 ;

__attribute__((used)) static void *FUNC_5(void *VAR_7)
{
  struct initurl *VAR_8 = (struct initurl *)VAR_7;
  int VAR_9;

  for(VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
    CURL *VAR_10 = FUNC_1();
    FUNC_3(VAR_10, VAR_1, VAR_8->url);
    FUNC_3(VAR_10, VAR_2, 0L);
    FUNC_3(VAR_10, VAR_0, VAR_8->share);
    FUNC_3(VAR_10, VAR_3, VAR_6);
    FUNC_2(VAR_10);
    FUNC_0(VAR_10);
    FUNC_4(VAR_5, "Thread %d transfer %d\n", VAR_8->threadno, VAR_9);
  }

  return ((void*)0);
}
