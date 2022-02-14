
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 char* FUNC_2 (scalar_t__) ;
 long VAR_17 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int *,long,int ) ;
 long VAR_18 ;
 int FUNC_7 (int *) ;
 long VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_8(CURL *VAR_21, const char *VAR_22,
                  const char *VAR_23, long VAR_24, long VAR_25)
{
  FILE *VAR_26;
  long VAR_27 = 0;
  CURLcode VAR_28 = VAR_0;
  int VAR_29;

  VAR_26 = FUNC_4(VAR_23, "rb");
  if(!VAR_26) {
    FUNC_7(((void*)0));
    return 0;
  }

  FUNC_1(VAR_21, VAR_12, 1L);

  FUNC_1(VAR_21, VAR_13, VAR_22);

  if(VAR_24)
    FUNC_1(VAR_21, VAR_5, VAR_24);

  FUNC_1(VAR_21, VAR_8, VAR_18);
  FUNC_1(VAR_21, VAR_7, &VAR_27);

  FUNC_1(VAR_21, VAR_15, VAR_17);

  FUNC_1(VAR_21, VAR_11, VAR_19);
  FUNC_1(VAR_21, VAR_10, VAR_26);


  FUNC_1(VAR_21, VAR_3, "-");
  FUNC_1(VAR_21, VAR_4, 1L);

  FUNC_1(VAR_21, VAR_14, 1L);

  for(VAR_29 = 0; (VAR_28 != VAR_1) && (VAR_29 < VAR_25); VAR_29++) {

    if(VAR_29) {
      FUNC_1(VAR_21, VAR_9, 1L);
      FUNC_1(VAR_21, VAR_6, 1L);

      VAR_28 = FUNC_0(VAR_21);
      if(VAR_28 != VAR_1)
        continue;

      FUNC_1(VAR_21, VAR_9, 0L);
      FUNC_1(VAR_21, VAR_6, 0L);

      FUNC_6(VAR_26, VAR_27, VAR_16);

      FUNC_1(VAR_21, VAR_2, 1L);
    }
    else {
      FUNC_1(VAR_21, VAR_2, 0L);
    }

    VAR_28 = FUNC_0(VAR_21);
  }

  FUNC_3(VAR_26);

  if(VAR_28 == VAR_1)
    return 1;
  else {
    FUNC_5(VAR_20, "%s\n", FUNC_2(VAR_28));
    return 0;
  }
}
