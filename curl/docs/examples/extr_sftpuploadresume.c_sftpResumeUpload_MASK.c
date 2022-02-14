
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_off_t ;
typedef int FILE ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,...) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,long,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 long VAR_8 ;
 int FUNC_10 (char const*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(CURL *VAR_10, const char *VAR_11,
                            const char *VAR_12)
{
  FILE *VAR_13 = ((void*)0);
  CURLcode VAR_14 = VAR_0;

  curl_off_t VAR_15 = FUNC_10(VAR_11);
  if(-1 == VAR_15) {
    FUNC_9("Error reading the remote file size: unable to resume upload\n");
    return -1;
  }

  VAR_13 = FUNC_5(VAR_12, "rb");
  if(!VAR_13) {
    FUNC_8(((void*)0));
    return 0;
  }

  FUNC_2(VAR_10, VAR_5, 1L);
  FUNC_2(VAR_10, VAR_6, VAR_11);
  FUNC_2(VAR_10, VAR_4, VAR_8);
  FUNC_2(VAR_10, VAR_3, VAR_13);




  FUNC_7(VAR_13, (long)VAR_15, VAR_7);

  FUNC_2(VAR_10, VAR_2, 1L);
  VAR_14 = FUNC_1(VAR_10);

  FUNC_4(VAR_13);

  if(VAR_14 == VAR_1)
    return 1;
  else {
    FUNC_6(VAR_9, "%s\n", FUNC_3(VAR_14));
    return 0;
  }
}
