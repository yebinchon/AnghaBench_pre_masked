
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netrcbuffer ;
typedef enum host_lookup_state { ____Placeholder_host_lookup_state } host_lookup_state ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_9(const char *VAR_6,
                      char **VAR_7,
                      char **VAR_8,
                      bool *VAR_9,
                      bool *VAR_10,
                      char *VAR_11)
{
  FILE *VAR_12;
  int VAR_13 = VAR_3;
  char *VAR_14 = *VAR_7;
  char *VAR_15 = *VAR_8;
  bool VAR_16 = (VAR_14 && *VAR_14 != 0);
  bool VAR_17 = VAR_0;
  bool VAR_18 = VAR_0;
  enum host_lookup_state VAR_19 = 128;

  char VAR_20 = 0;
  char VAR_21 = 0;
  int VAR_22 = VAR_0;


  FUNC_0(VAR_11);

  VAR_12 = FUNC_3(VAR_11, VAR_1);
  if(VAR_12) {
    char *VAR_23;
    char *VAR_24;
    bool VAR_25 = VAR_0;
    char VAR_26[4096];
    int VAR_27 = (int)sizeof(VAR_26);

    while(!VAR_25 && FUNC_2(VAR_26, VAR_27, VAR_12)) {
      VAR_23 = FUNC_8(VAR_26, " \t\n", &VAR_24);
      if(VAR_23 && *VAR_23 == '#')

        continue;
      while(VAR_23) {

        if((VAR_14 && *VAR_14) && (VAR_15 && *VAR_15)) {
          VAR_25 = VAR_5;
          break;
        }

        switch(VAR_19) {
        case 128:
          if(FUNC_5("machine", VAR_23)) {




            VAR_19 = 130;
          }
          else if(FUNC_5("default", VAR_23)) {
            VAR_19 = 129;
            VAR_13 = VAR_4;
          }
          break;
        case 130:
          if(FUNC_5(VAR_6, VAR_23)) {

            VAR_19 = 129;
            VAR_13 = VAR_4;
          }
          else

            VAR_19 = 128;
          break;
        case 129:

          if(VAR_20) {
            if(VAR_16) {
              VAR_22 = FUNC_5(VAR_14, VAR_23);
            }
            else if(!VAR_14 || FUNC_6(VAR_14, VAR_23)) {
              if(VAR_17) {
                FUNC_4(VAR_14);
                VAR_17 = VAR_0;
              }
              VAR_14 = FUNC_7(VAR_23);
              if(!VAR_14) {
                VAR_13 = VAR_2;
                goto out;
              }
              VAR_17 = VAR_5;
            }
            VAR_20 = 0;
          }
          else if(VAR_21) {
            if((VAR_22 || !VAR_16)
                && (!VAR_15 || FUNC_6(VAR_15, VAR_23))) {
              if(VAR_18) {
                FUNC_4(VAR_15);
                VAR_18 = VAR_0;
              }
              VAR_15 = FUNC_7(VAR_23);
              if(!VAR_15) {
                VAR_13 = VAR_2;
                goto out;
              }
              VAR_18 = VAR_5;
            }
            VAR_21 = 0;
          }
          else if(FUNC_5("login", VAR_23))
            VAR_20 = 1;
          else if(FUNC_5("password", VAR_23))
            VAR_21 = 1;
          else if(FUNC_5("machine", VAR_23)) {

            VAR_19 = 130;
            VAR_22 = VAR_0;
          }
          break;
        }

        VAR_23 = FUNC_8(((void*)0), " \t\n", &VAR_24);
      }
    }

    out:
    if(!VAR_13) {

      *VAR_9 = VAR_0;
      *VAR_10 = VAR_0;
      if(VAR_17) {
        if(*VAR_7)
          FUNC_4(*VAR_7);
        *VAR_7 = VAR_14;
        *VAR_9 = VAR_5;
      }
      if(VAR_18) {
        if(*VAR_8)
          FUNC_4(*VAR_8);
        *VAR_8 = VAR_15;
        *VAR_10 = VAR_5;
      }
    }
    else {
      if(VAR_17)
        FUNC_4(VAR_14);
      if(VAR_18)
        FUNC_4(VAR_15);
    }
    FUNC_1(VAR_12);
  }

  return VAR_13;
}
