
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int VAR_16 ;
 char* VAR_17 ;
 char* FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int ,...) ;

int FUNC_9(char *VAR_18)
{
  int VAR_19;
  CURL *VAR_20;
  int VAR_21 = 1;
  char *VAR_22 = ((void*)0);

  if(FUNC_4(VAR_11) != VAR_0) {
    FUNC_5(VAR_16, "curl_global_init() failed\n");
    return VAR_15;
  }

  VAR_20 = FUNC_1();
  if(!VAR_20) {
    FUNC_5(VAR_16, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_15;
  }

  FUNC_8(VAR_20, VAR_3, VAR_17);
  FUNC_8(VAR_20, VAR_10, VAR_17);
  FUNC_8(VAR_20, VAR_9, 1L);

  FUNC_8(VAR_20, VAR_8, VAR_18);

  FUNC_8(VAR_20, VAR_5, VAR_12);

  VAR_22 = FUNC_7(VAR_18, VAR_21++);
  if(!VAR_22) {
    VAR_19 = VAR_15;
    goto test_cleanup;
  }
  FUNC_8(VAR_20, VAR_6, VAR_22);
  FUNC_6(VAR_22);
  VAR_22 = ((void*)0);

  VAR_19 = FUNC_2(VAR_20);
  if(VAR_19 != (int)VAR_1) {
    FUNC_5(VAR_16, "Failed to detect CSeq mismatch");
    VAR_19 = VAR_15;
    goto test_cleanup;
  }

  FUNC_8(VAR_20, VAR_4, 999L);
  FUNC_8(VAR_20, VAR_7,
                    "RAW/RAW/UDP;unicast;client_port=3056-3057");
  FUNC_8(VAR_20, VAR_5, VAR_14);

  VAR_22 = FUNC_7(VAR_18, VAR_21++);
  if(!VAR_22) {
    VAR_19 = VAR_15;
    goto test_cleanup;
  }
  FUNC_8(VAR_20, VAR_6, VAR_22);
  FUNC_6(VAR_22);
  VAR_22 = ((void*)0);

  VAR_19 = FUNC_2(VAR_20);
  if(VAR_19)
    goto test_cleanup;

  FUNC_8(VAR_20, VAR_5, VAR_13);

  VAR_22 = FUNC_7(VAR_18, VAR_21++);
  if(!VAR_22) {
    VAR_19 = VAR_15;
    goto test_cleanup;
  }
  FUNC_8(VAR_20, VAR_6, VAR_22);
  FUNC_6(VAR_22);
  VAR_22 = ((void*)0);

  VAR_19 = FUNC_2(VAR_20);
  if(VAR_19 != VAR_2) {
    FUNC_5(VAR_16, "Failed to detect a Session ID mismatch");
  }

test_cleanup:
  FUNC_6(VAR_22);

  FUNC_0(VAR_20);
  FUNC_3();

  return VAR_19;
}
