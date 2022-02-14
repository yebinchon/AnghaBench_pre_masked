
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*,int,size_t,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_6, size_t VAR_7)
{
  int VAR_8;
  int VAR_9 = 0;
  size_t VAR_10;
  size_t VAR_11;
  FILE *VAR_12;
  const char *VAR_13 = VAR_5?VAR_2:VAR_1;

  if(VAR_6 == ((void*)0))
    return;
  if(VAR_7 == 0)
    return;

  do {
    VAR_12 = FUNC_1(VAR_13, "ab");
  } while((VAR_12 == ((void*)0)) && ((VAR_9 = VAR_3) == VAR_0));
  if(VAR_12 == ((void*)0)) {
    FUNC_3("[2] Error opening file %s error: %d %s",
           VAR_13, VAR_9, FUNC_4(VAR_9));
    FUNC_3("Failed to write request input ");
    return;
  }

  VAR_11 = VAR_7;
  do {
    VAR_10 = FUNC_2(&VAR_6[VAR_7-VAR_11],
                     1, VAR_11, VAR_12);
    if(VAR_4)
      goto storerequest_cleanup;
    if(VAR_10 > 0)
      VAR_11 -= VAR_10;
  } while((VAR_11 > 0) && ((VAR_9 = VAR_3) == VAR_0));

  if(VAR_11 == 0)
    FUNC_3("Wrote request (%zu bytes) input to %s", VAR_7, VAR_13);
  else if(VAR_11 > 0) {
    FUNC_3("Error writing file %s error: %d %s",
           VAR_13, VAR_9, FUNC_4(VAR_9));
    FUNC_3("Wrote only (%zu bytes) of (%zu bytes) request input to %s",
           VAR_7-VAR_11, VAR_7, VAR_13);
  }

storerequest_cleanup:

  do {
    VAR_8 = FUNC_0(VAR_12);
  } while(VAR_8 && ((VAR_9 = VAR_3) == VAR_0));
  if(VAR_8)
    FUNC_3("Error closing file %s error: %d %s",
           VAR_13, VAR_9, FUNC_4(VAR_9));
}
