
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 long VAR_19 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 long VAR_20 ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_6 (long) ;
 int FUNC_7 (int *,int ,...) ;

int FUNC_8(char *VAR_25)
{
  CURLcode VAR_26;
  CURL *VAR_27;

  int VAR_28 = 0;


  if(FUNC_4(VAR_17) != VAR_3) {
    FUNC_5(VAR_24, "curl_global_init() failed\n");
    return VAR_18;
  }

  VAR_27 = FUNC_1();
  if(!VAR_27) {
    FUNC_5(VAR_24, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_18;
  }

  FUNC_7(VAR_27, VAR_15, VAR_25);
  FUNC_7(VAR_27, VAR_16, 1L);
  FUNC_7(VAR_27, VAR_4, 1L);





  FUNC_7(VAR_27, VAR_6, VAR_20);
  FUNC_7(VAR_27, VAR_5, &VAR_28);
  FUNC_7(VAR_27, VAR_14, VAR_23);
  FUNC_7(VAR_27, VAR_13, &VAR_28);


  FUNC_7(VAR_27, VAR_9, (long)FUNC_6(VAR_19));

  FUNC_7(VAR_27, VAR_7, 1L);
  FUNC_7(VAR_27, VAR_10, VAR_21);
  FUNC_7(VAR_27, VAR_12, VAR_22);
  FUNC_7(VAR_27, VAR_11,
                   (long) (VAR_2 | VAR_1 | VAR_0) );

  VAR_26 = FUNC_2(VAR_27);

test_cleanup:

  FUNC_0(VAR_27);
  FUNC_3();

  return (int)VAR_26;
}
