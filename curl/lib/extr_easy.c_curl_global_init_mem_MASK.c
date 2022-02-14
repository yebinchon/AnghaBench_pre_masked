
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ curl_strdup_callback ;
typedef scalar_t__ curl_realloc_callback ;
typedef scalar_t__ curl_malloc_callback ;
typedef scalar_t__ curl_free_callback ;
typedef scalar_t__ curl_calloc_callback ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (long,int ) ;
 scalar_t__ VAR_8 ;

CURLcode FUNC_1(long VAR_9, curl_malloc_callback VAR_10,
                              curl_free_callback VAR_11, curl_realloc_callback VAR_12,
                              curl_strdup_callback VAR_13, curl_calloc_callback VAR_14)
{

  if(!VAR_10 || !VAR_11 || !VAR_12 || !VAR_13 || !VAR_14)
    return VAR_0;

  if(VAR_8) {



    VAR_8++;
    return VAR_1;
  }



  VAR_4 = VAR_10;
  VAR_3 = VAR_11;
  VAR_6 = VAR_13;
  VAR_5 = VAR_12;
  VAR_2 = VAR_14;


  return FUNC_0(VAR_9, VAR_7);
}
