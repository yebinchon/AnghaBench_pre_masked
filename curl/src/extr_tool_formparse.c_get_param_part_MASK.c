
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {char* data; } ;
struct OperationConfig {TYPE_1__* global; } ;
struct TYPE_2__ {int errors; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (struct curl_slist*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char**,char**,char) ;
 int FUNC_7 (struct OperationConfig*,char*,int *,struct curl_slist**) ;
 scalar_t__ FUNC_8 (struct curl_slist**,char*) ;
 int FUNC_9 (char*,char*,char*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_13(struct OperationConfig *VAR_2, char VAR_3,
                          char **VAR_4, char **VAR_5, char **VAR_6,
                          char **VAR_7, char **VAR_8,
                          struct curl_slist **VAR_9)
{
  char *VAR_10 = *VAR_4;
  char *VAR_11 = ((void*)0);
  char *VAR_12 = ((void*)0);
  char *VAR_13 = ((void*)0);
  char *VAR_14;
  char *VAR_15;
  char VAR_16;
  char VAR_17[128] = "";
  char VAR_18[128] = "";
  char *VAR_19 = ((void*)0);
  struct curl_slist *VAR_20 = ((void*)0);

  if(VAR_6)
    *VAR_6 = ((void*)0);
  if(VAR_7)
    *VAR_7 = ((void*)0);
  if(VAR_9)
    *VAR_9 = ((void*)0);
  if(VAR_8)
    *VAR_8 = ((void*)0);
  while(FUNC_0(*VAR_10))
    VAR_10++;
  VAR_15 = VAR_10;
  *VAR_5 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

  if(*VAR_5 == VAR_15)
    while(VAR_14 > *VAR_5 && FUNC_0(VAR_14[-1]))
      VAR_14--;
  VAR_16 = *VAR_10;
  *VAR_14 = '\0';
  while(VAR_16 == ';') {
    while(FUNC_0(*++VAR_10))
      ;

    if(!VAR_19 && FUNC_1("type=", VAR_10)) {
      for(VAR_10 += 5; FUNC_0(*VAR_10); VAR_10++)
        ;

      VAR_11 = VAR_10;


      if(2 != FUNC_9(VAR_11, "%127[^/ ]/%127[^;, \n]", VAR_17, VAR_18)) {
        FUNC_12(VAR_2->global, "Illegally formatted content-type field!\n");
        FUNC_2(VAR_20);
        return -1;
      }


      VAR_10 = VAR_11 + FUNC_11(VAR_17) + FUNC_11(VAR_18) + 1;
      for(VAR_19 = VAR_10; *VAR_10 && *VAR_10 != ';' && *VAR_10 != VAR_3; VAR_10++)
        if(!FUNC_0(*VAR_10))
          VAR_19 = VAR_10 + 1;
      VAR_16 = *VAR_10;
    }
    else if(FUNC_1("filename=", VAR_10)) {
      if(VAR_19) {
        *VAR_19 = '\0';
        VAR_19 = ((void*)0);
      }
      for(VAR_10 += 9; FUNC_0(*VAR_10); VAR_10++)
        ;
      VAR_15 = VAR_10;
      VAR_12 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

      if(VAR_12 == VAR_15)
        while(VAR_14 > VAR_12 && FUNC_0(VAR_14[-1]))
          VAR_14--;
      VAR_16 = *VAR_10;
      *VAR_14 = '\0';
    }
    else if(FUNC_1("headers=", VAR_10)) {
      if(VAR_19) {
        *VAR_19 = '\0';
        VAR_19 = ((void*)0);
      }
      VAR_10 += 8;
      if(*VAR_10 == '@' || *VAR_10 == '<') {
        char *VAR_21;
        FILE *VAR_22;


        do {
          VAR_10++;
        } while(FUNC_0(*VAR_10));
        VAR_15 = VAR_10;
        VAR_21 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

        if(VAR_21 == VAR_15)
          while(VAR_14 > VAR_21 && FUNC_0(VAR_14[-1]))
            VAR_14--;
        VAR_16 = *VAR_10;
        *VAR_14 = '\0';
        VAR_22 = FUNC_4(VAR_21, VAR_0);
        if(!VAR_22)
          FUNC_12(VAR_2->global, "Cannot read from %s: %s\n", VAR_21,
                FUNC_10(VAR_1));
        else {
          int VAR_23 = FUNC_7(VAR_2, VAR_21, VAR_22, &VAR_20);

          FUNC_3(VAR_22);
          if(VAR_23) {
            FUNC_2(VAR_20);
            return -1;
          }
        }
      }
      else {
        char *VAR_24;

        while(FUNC_0(*VAR_10))
          VAR_10++;
        VAR_15 = VAR_10;
        VAR_24 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

        if(VAR_24 == VAR_15)
          while(VAR_14 > VAR_24 && FUNC_0(VAR_14[-1]))
            VAR_14--;
        VAR_16 = *VAR_10;
        *VAR_14 = '\0';
        if(FUNC_8(&VAR_20, VAR_24)) {
          FUNC_5(VAR_2->global->errors, "Out of memory for field header!\n");
          FUNC_2(VAR_20);
          return -1;
        }
      }
    }
    else if(FUNC_1("encoder=", VAR_10)) {
      if(VAR_19) {
        *VAR_19 = '\0';
        VAR_19 = ((void*)0);
      }
      for(VAR_10 += 8; FUNC_0(*VAR_10); VAR_10++)
        ;
      VAR_15 = VAR_10;
      VAR_13 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

      if(VAR_13 == VAR_15)
        while(VAR_14 > VAR_13 && FUNC_0(VAR_14[-1]))
          VAR_14--;
      VAR_16 = *VAR_10;
      *VAR_14 = '\0';
    }
    else if(VAR_19) {

      for(VAR_19 = VAR_10; *VAR_10 && *VAR_10 != ';' && *VAR_10 != VAR_3; VAR_10++)
        if(!FUNC_0(*VAR_10))
          VAR_19 = VAR_10 + 1;
      VAR_16 = *VAR_10;
    }
    else {

      char *VAR_25 = FUNC_6(&VAR_10, &VAR_14, VAR_3);

      VAR_16 = *VAR_10;
      *VAR_14 = '\0';
      if(*VAR_25)
        FUNC_12(VAR_2->global, "skip unknown form field: %s\n", VAR_25);
    }
  }


  if(VAR_19)
    *VAR_19 = '\0';

  if(VAR_6)
    *VAR_6 = VAR_11;
  else if(VAR_11)
    FUNC_12(VAR_2->global, "Field content type not allowed here: %s\n", VAR_11);

  if(VAR_7)
    *VAR_7 = VAR_12;
  else if(VAR_12)
    FUNC_12(VAR_2->global,
          "Field file name not allowed here: %s\n", VAR_12);

  if(VAR_8)
    *VAR_8 = VAR_13;
  else if(VAR_13)
    FUNC_12(VAR_2->global,
          "Field encoder not allowed here: %s\n", VAR_13);

  if(VAR_9)
    *VAR_9 = VAR_20;
  else if(VAR_20) {
    FUNC_12(VAR_2->global,
          "Field headers not allowed here: %s\n", VAR_20->data);
    FUNC_2(VAR_20);
  }

  *VAR_4 = VAR_10;
  return VAR_16 & 0xFF;
}
