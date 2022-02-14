
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_size; } ;
typedef TYPE_1__ struct_stat ;
struct curl_slist {int dummy; } ;
typedef char* curl_off_t ;
typedef char FILE ;
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
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (char*,int ) ;
 int VAR_18 ;
 char* VAR_19 ;
 char* FUNC_13 (char*,int ) ;
 int FUNC_14 (int *,int ,...) ;

int FUNC_15(char *VAR_20)
{
  int VAR_21;
  CURL *VAR_22;
  int VAR_23;
  FILE *VAR_24 = ((void*)0);
  struct_stat VAR_25;
  char *VAR_26 = ((void*)0);
  int VAR_27 = 1;
  struct curl_slist *VAR_28 = ((void*)0);

  if(FUNC_5(VAR_12) != VAR_0) {
    FUNC_9(VAR_18, "curl_global_init() failed\n");
    return VAR_17;
  }

  VAR_22 = FUNC_2();
  if(!VAR_22) {
    FUNC_9(VAR_18, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_17;
  }


  FUNC_14(VAR_22, VAR_1, VAR_19);
  FUNC_14(VAR_22, VAR_11, VAR_19);
  FUNC_14(VAR_22, VAR_10, 1L);

  FUNC_14(VAR_22, VAR_9, VAR_20);


  VAR_26 = FUNC_13(VAR_20, VAR_27++);
  if(!VAR_26) {
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_6, VAR_26);
  FUNC_10(VAR_26);
  VAR_26 = ((void*)0);

  FUNC_14(VAR_22, VAR_7, "Planes/Trains/Automobiles");
  FUNC_14(VAR_22, VAR_5, VAR_15);
  VAR_21 = FUNC_3(VAR_22);
  if(VAR_21)
    goto test_cleanup;

  VAR_26 = FUNC_13(VAR_20, VAR_27++);
  if(!VAR_26) {
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_6, VAR_26);
  FUNC_10(VAR_26);
  VAR_26 = ((void*)0);


  VAR_23 = FUNC_12("log/file572.txt", VAR_16);
  FUNC_11(VAR_23, &VAR_25);
  FUNC_0(VAR_23);

  VAR_24 = FUNC_8("log/file572.txt", "rb");
  if(VAR_24 == ((void*)0)) {
    FUNC_9(VAR_18, "can't open log/file572.txt\n");
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_5, VAR_13);

  FUNC_14(VAR_22, VAR_4, VAR_24);
  FUNC_14(VAR_22, VAR_8, 1L);
  FUNC_14(VAR_22, VAR_2, (curl_off_t) VAR_25.st_size);

  VAR_21 = FUNC_3(VAR_22);
  if(VAR_21)
    goto test_cleanup;

  FUNC_14(VAR_22, VAR_8, 0L);
  FUNC_7(VAR_24);
  VAR_24 = ((void*)0);


  VAR_26 = FUNC_13(VAR_20, VAR_27++);
  if(!VAR_26) {
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_6, VAR_26);
  FUNC_10(VAR_26);
  VAR_26 = ((void*)0);

  VAR_21 = FUNC_3(VAR_22);
  if(VAR_21)
    goto test_cleanup;



  VAR_26 = FUNC_13(VAR_20, VAR_27++);
  if(!VAR_26) {
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_6, VAR_26);
  FUNC_10(VAR_26);
  VAR_26 = ((void*)0);

  FUNC_14(VAR_22, VAR_5, VAR_13);
  FUNC_14(VAR_22, VAR_3, "packets_received\njitter\n");

  VAR_21 = FUNC_3(VAR_22);
  if(VAR_21)
    goto test_cleanup;

  FUNC_14(VAR_22, VAR_3, ((void*)0));


  VAR_26 = FUNC_13(VAR_20, VAR_27++);
  if(!VAR_26) {
    VAR_21 = VAR_17;
    goto test_cleanup;
  }
  FUNC_14(VAR_22, VAR_6, VAR_26);
  FUNC_10(VAR_26);
  VAR_26 = ((void*)0);

  FUNC_14(VAR_22, VAR_5, VAR_14);
  VAR_21 = FUNC_3(VAR_22);

test_cleanup:

  if(VAR_24)
    FUNC_7(VAR_24);

  FUNC_10(VAR_26);

  if(VAR_28)
    FUNC_6(VAR_28);

  FUNC_1(VAR_22);
  FUNC_4();

  return VAR_21;
}
