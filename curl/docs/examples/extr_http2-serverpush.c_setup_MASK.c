
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,...) ;
 int * FUNC_1 (int ,char*) ;
 long VAR_10 ;

__attribute__((used)) static int FUNC_2(CURL *VAR_11)
{
  FILE *VAR_12 = FUNC_1(VAR_9, "wb");
  if(!VAR_12)

    return 1;


  FUNC_0(VAR_11, VAR_7, VAR_12);


  FUNC_0(VAR_11, VAR_5, "https://localhost:8443/index.html");


  FUNC_0(VAR_11, VAR_6, 1L);
  FUNC_0(VAR_11, VAR_0, VAR_10);


  FUNC_0(VAR_11, VAR_1, VAR_8);


  FUNC_0(VAR_11, VAR_4, 0L);
  FUNC_0(VAR_11, VAR_3, 0L);





  return 0;
}
