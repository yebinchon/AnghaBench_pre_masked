
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct Curl_handler {int dummy; } ;
typedef int schemebuf ;
struct TYPE_6__ {char* scratch; char* scheme; char* temppath; char* fragment; char* query; char* path; char* host; } ;
typedef scalar_t__ CURLUcode ;
typedef TYPE_1__ CURLU ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 struct Curl_handler* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (char const) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (char*,char const*,size_t) ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ FUNC_14 (TYPE_1__*,struct Curl_handler const*,char**,unsigned int) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,char*,int) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static CURLUcode FUNC_22(const char *VAR_15, CURLU *VAR_16, unsigned int VAR_17)
{
  char *VAR_18;
  bool VAR_19 = VAR_12;
  char *VAR_20;
  char *VAR_21 = ((void*)0);
  char *VAR_22 = ((void*)0);
  CURLUcode VAR_23;
  bool VAR_24 = VAR_12;
  char VAR_25[VAR_13 + 1];
  char *VAR_26 = ((void*)0);
  size_t VAR_27 = 0;
  size_t VAR_28;
  const struct Curl_handler *VAR_29 = ((void*)0);

  if(!VAR_15)
    return VAR_0;





  VAR_28 = FUNC_21(VAR_15);
  if(VAR_28 > VAR_10)

    return VAR_0;

  VAR_18 = VAR_16->scratch = FUNC_11(VAR_28 * 2 + 2);
  if(!VAR_18)
    return VAR_2;

  VAR_20 = &VAR_18[VAR_28 + 1];
  VAR_20[0] = 0;

  if(FUNC_2(VAR_15, VAR_25, sizeof(VAR_25))) {
    VAR_24 = VAR_14;
    VAR_27 = FUNC_21(VAR_25);
  }


  if(VAR_24 && FUNC_15(VAR_25, "file")) {

    FUNC_18(VAR_18, &VAR_15[5]);

    VAR_20 = ((void*)0);
    VAR_16->scheme = FUNC_20("file");
    if(!VAR_16->scheme)
      return VAR_2;







    if(VAR_18[0] == '/' && VAR_18[1] == '/') {

      char *VAR_30 = &VAR_18[2];
      if(VAR_30[0] != '/' && !FUNC_6(VAR_30)) {


        if(!FUNC_7("localhost/", VAR_30) &&
           !FUNC_7("127.0.0.1/", VAR_30)) {


          return VAR_0;
        }
        VAR_30 += 9;
      }

      VAR_18 = VAR_30;
    }




    if(('/' == VAR_18[0] && FUNC_6(&VAR_18[1])) ||
       FUNC_6(VAR_18)) {

      return VAR_0;
    }
  }
  else {

    const char *VAR_31;
    const char *VAR_32;
    size_t VAR_33;
    VAR_18[0] = 0;

    if(VAR_24) {
      int VAR_34 = 0;
      VAR_31 = &VAR_15[VAR_27 + 1];
      while(VAR_31 && (*VAR_31 == '/') && (VAR_34 < 4)) {
        VAR_31++;
        VAR_34++;
      }
      if((VAR_34 < 1) || (VAR_34>3))

        return VAR_0;

      VAR_26 = VAR_25;
      if(!FUNC_0(VAR_26) &&
         !(VAR_17 & VAR_6))
        return VAR_3;

      if(FUNC_10(VAR_26))
        return VAR_0;

    }
    else {


      if(!(VAR_17 & (VAR_4|VAR_5)))
        return VAR_0;
      if(VAR_17 & VAR_4)
        VAR_26 = (char *) VAR_11;




      VAR_31 = VAR_15;
    }
    VAR_32 = VAR_31;

    while(*VAR_31 && !FUNC_5(*VAR_31))
      VAR_31++;

    VAR_33 = VAR_31 - VAR_32;
    if(VAR_33) {
      FUNC_12(VAR_20, VAR_32, VAR_33);
      VAR_20[VAR_33] = 0;
    }
    else {
      if(!(VAR_17 & VAR_7))
        return VAR_0;
    }

    if((VAR_17 & VAR_5) && !VAR_26) {

      if(FUNC_7("ftp.", VAR_20))
        VAR_26 = (char *)"ftp";
      else if(FUNC_7("dict.", VAR_20))
        VAR_26 = (char *)"dict";
      else if(FUNC_7("ldap.", VAR_20))
        VAR_26 = (char *)"ldap";
      else if(FUNC_7("imap.", VAR_20))
        VAR_26 = (char *)"imap";
      else if(FUNC_7("smtp.", VAR_20))
        VAR_26 = (char *)"smtp";
      else if(FUNC_7("pop3.", VAR_20))
        VAR_26 = (char *)"pop3";
      else
        VAR_26 = (char *)"http";
    }

    VAR_33 = FUNC_21(VAR_31);
    FUNC_12(VAR_18, VAR_31, VAR_33);
    VAR_18[VAR_33] = 0;

    VAR_16->scheme = FUNC_20(VAR_26);
    if(!VAR_16->scheme)
      return VAR_2;
  }


  VAR_29 = FUNC_0(VAR_16->scheme);

  if(FUNC_10(VAR_18))
    return VAR_0;

  if((VAR_17 & VAR_9) && VAR_18[0]) {

    char *VAR_35 = FUNC_11(FUNC_21(VAR_18) * 3);
    if(!VAR_35)
      return VAR_2;
    VAR_19 = VAR_14;
    FUNC_19(VAR_35, VAR_18, VAR_14);
    VAR_16->temppath = VAR_18 = VAR_35;
  }

  VAR_22 = FUNC_16(VAR_18, '#');
  if(VAR_22) {
    *VAR_22++ = 0;
    if(VAR_22[0]) {
      VAR_16->fragment = FUNC_20(VAR_22);
      if(!VAR_16->fragment)
        return VAR_2;
    }
  }

  VAR_21 = FUNC_16(VAR_18, '?');
  if(VAR_21) {
    *VAR_21++ = 0;

    VAR_16->query = FUNC_20(VAR_21);
    if(!VAR_16->query)
      return VAR_2;
  }

  if(!VAR_18[0])

    VAR_18 = ((void*)0);
  else {
    if(!(VAR_17 & VAR_8)) {

      char *VAR_36 = FUNC_1(VAR_18);
      if(!VAR_36)
        return VAR_2;

      if(FUNC_17(VAR_36, VAR_18)) {

        if(VAR_19)
          FUNC_4(VAR_16->temppath);
        VAR_16->temppath = VAR_18 = VAR_36;
        VAR_19 = VAR_14;
      }
      else
        FUNC_8(VAR_36);
    }

    VAR_16->path = VAR_19?VAR_18:FUNC_20(VAR_18);
    if(!VAR_16->path)
      return VAR_2;
    VAR_16->temppath = ((void*)0);
  }

  if(VAR_20) {



    if(FUNC_10(VAR_20))
      return VAR_0;

    VAR_23 = FUNC_14(VAR_16, VAR_29, &VAR_20, VAR_17);
    if(VAR_23)
      return VAR_23;

    VAR_23 = FUNC_3(VAR_16, VAR_20);
    if(VAR_23)
      return VAR_23;

    if(0 == FUNC_21(VAR_20) && (VAR_17 & VAR_7)) {

    }
    else {
      VAR_23 = FUNC_9(VAR_16, VAR_20);
      if(VAR_23)
        return VAR_23;
    }

    VAR_16->host = FUNC_20(VAR_20);
    if(!VAR_16->host)
      return VAR_2;
  }

  FUNC_4(VAR_16->scratch);
  FUNC_4(VAR_16->temppath);

  return VAR_1;
}
