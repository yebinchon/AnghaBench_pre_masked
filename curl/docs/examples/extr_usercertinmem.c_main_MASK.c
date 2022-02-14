
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char** VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;

int FUNC_7(void)
{
  CURL *VAR_20;
  CURLcode VAR_21;

  FUNC_5(VAR_15);
  VAR_20 = FUNC_1();
  FUNC_3(VAR_20, VAR_12, 0L);
  FUNC_3(VAR_20, VAR_1, 0L);
  FUNC_3(VAR_20, VAR_4, 1L);
  FUNC_3(VAR_20, VAR_5, 1L);
  FUNC_3(VAR_20, VAR_14, VAR_19);
  FUNC_3(VAR_20, VAR_13, VAR_18);
  FUNC_3(VAR_20, VAR_3, VAR_19);
  FUNC_3(VAR_20, VAR_2, VAR_17);
  FUNC_3(VAR_20, VAR_6, "PEM");




  FUNC_3(VAR_20, VAR_10, 0L);
  FUNC_3(VAR_20, VAR_9, 0L);
  FUNC_3(VAR_20, VAR_11, "https://www.example.com/");
  FUNC_3(VAR_20, VAR_7, "PEM");



  VAR_21 = FUNC_2(VAR_20);
  if(VAR_21 == VAR_0) {
    FUNC_6("*** transfer succeeded ***\n");
  }
  else {
    FUNC_6("*** transfer failed ***\n");
  }





  FUNC_3(VAR_20, VAR_8, *VAR_16);
  VAR_21 = FUNC_2(VAR_20);
  if(VAR_21 == VAR_0) {
    FUNC_6("*** transfer succeeded ***\n");
  }
  else {
    FUNC_6("*** transfer failed ***\n");
  }

  FUNC_0(VAR_20);
  FUNC_4();
  return VAR_21;
}
