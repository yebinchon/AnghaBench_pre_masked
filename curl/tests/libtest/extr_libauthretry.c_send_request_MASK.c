
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,char const*,int) ;
 int VAR_7 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,...) ;

__attribute__((used)) static CURLcode FUNC_7(CURL *VAR_8, const char *VAR_9, int VAR_10,
                             long VAR_11, const char *VAR_12)
{
  CURLcode VAR_13;
  size_t VAR_14 = FUNC_5(VAR_9) + 4 + 1;
  char *VAR_15 = FUNC_3(VAR_14);
  if(!VAR_15) {
    FUNC_1(VAR_7, "Not enough memory for full url\n");
    return VAR_0;
  }

  FUNC_4(VAR_15, VAR_14, "%s%04d", VAR_9, VAR_10);
  FUNC_1(VAR_7, "Sending new request %d to %s with credential %s "
          "(auth %ld)\n", VAR_10, VAR_15, VAR_12, VAR_11);
  FUNC_6(VAR_8, VAR_4, VAR_15);
  FUNC_6(VAR_8, VAR_6, 1L);
  FUNC_6(VAR_8, VAR_1, 1L);
  FUNC_6(VAR_8, VAR_3, 1L);
  FUNC_6(VAR_8, VAR_5, VAR_12);
  FUNC_6(VAR_8, VAR_2, VAR_11);

  VAR_13 = FUNC_0(VAR_8);

test_cleanup:
  FUNC_2(VAR_15);
  return VAR_13;
}
