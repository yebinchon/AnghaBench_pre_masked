
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer {long out; int * easy; } ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,...) ;
 long FUNC_2 (char*,char*) ;
 long VAR_10 ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_4(struct transfer *VAR_11, int VAR_12)
{
  char VAR_13[128];
  CURL *VAR_14;

  VAR_14 = VAR_11->easy = FUNC_0();

  FUNC_3(VAR_13, 128, "dl-%d", VAR_12);

  VAR_11->out = FUNC_2(VAR_13, "wb");


  FUNC_1(VAR_14, VAR_8, VAR_11->out);


  FUNC_1(VAR_14, VAR_6, "https://localhost:8443/index.html");


  FUNC_1(VAR_14, VAR_7, 1L);
  FUNC_1(VAR_14, VAR_1, VAR_10);
  FUNC_1(VAR_14, VAR_0, VAR_11);


  FUNC_1(VAR_14, VAR_2, VAR_9);


  FUNC_1(VAR_14, VAR_5, 0L);
  FUNC_1(VAR_14, VAR_4, 0L);





}
