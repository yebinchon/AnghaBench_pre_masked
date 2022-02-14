
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Curl_handler {char* defport; int flags; } ;
typedef int portbuf ;
struct TYPE_3__ {char* scheme; char* user; char* password; char* options; char* host; char* zoneid; char* port; char* portnum; char* path; char* query; char* fragment; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLUcode ;
typedef int CURLUPart ;
typedef TYPE_1__ CURLU ;


 int VAR_0 ;
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
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 struct Curl_handler* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char**,size_t*,int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* FUNC_2 (char*,char*,char*,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 void* FUNC_8 (char*) ;
 size_t FUNC_9 (char*) ;

CURLUcode FUNC_10(CURLU *VAR_22, CURLUPart VAR_23,
                       char **VAR_24, unsigned int VAR_25)
{
  char *VAR_26;
  CURLUcode VAR_27 = VAR_12;
  char VAR_28[7];
  bool VAR_29 = (VAR_25 & VAR_17)?1:0;
  bool VAR_30 = VAR_19;
  (void)VAR_25;
  if(!VAR_22)
    return VAR_0;
  if(!VAR_24)
    return VAR_1;
  *VAR_24 = ((void*)0);

  switch(VAR_23) {
  case 131:
    VAR_26 = VAR_22->scheme;
    VAR_27 = VAR_8;
    VAR_29 = VAR_19;
    break;
  case 129:
    VAR_26 = VAR_22->user;
    VAR_27 = VAR_9;
    break;
  case 135:
    VAR_26 = VAR_22->password;
    VAR_27 = VAR_5;
    break;
  case 136:
    VAR_26 = VAR_22->options;
    VAR_27 = VAR_4;
    break;
  case 137:
    VAR_26 = VAR_22->host;
    VAR_27 = VAR_3;
    break;
  case 128:
    VAR_26 = VAR_22->zoneid;
    break;
  case 133:
    VAR_26 = VAR_22->port;
    VAR_27 = VAR_6;
    VAR_29 = VAR_19;
    if(!VAR_26 && (VAR_25 & VAR_14) && VAR_22->scheme) {


      const struct Curl_handler *VAR_31 =
        FUNC_0(VAR_22->scheme);
      if(VAR_31) {
        FUNC_6(VAR_28, sizeof(VAR_28), "%ld", VAR_31->defport);
        VAR_26 = VAR_28;
      }
    }
    else if(VAR_26 && VAR_22->scheme) {


      const struct Curl_handler *VAR_32 =
        FUNC_0(VAR_22->scheme);
      if(VAR_32 && (VAR_32->defport == VAR_22->portnum) &&
         (VAR_25 & VAR_16))
        VAR_26 = ((void*)0);
    }
    break;
  case 134:
    VAR_26 = VAR_22->path;
    if(!VAR_26) {
      VAR_26 = VAR_22->path = FUNC_8("/");
      if(!VAR_22->path)
        return VAR_11;
    }
    break;
  case 132:
    VAR_26 = VAR_22->query;
    VAR_27 = VAR_7;
    VAR_30 = VAR_29;
    break;
  case 138:
    VAR_26 = VAR_22->fragment;
    VAR_27 = VAR_2;
    break;
  case 130: {
    char *VAR_33;
    char *VAR_34;
    char *VAR_35 = VAR_22->options;
    char *VAR_36 = VAR_22->port;
    char *VAR_37 = ((void*)0);
    if(VAR_22->scheme && FUNC_7("file", VAR_22->scheme)) {
      VAR_33 = FUNC_2("file://%s%s%s",
                    VAR_22->path,
                    VAR_22->fragment? "#": "",
                    VAR_22->fragment? VAR_22->fragment : "");
    }
    else if(!VAR_22->host)
      return VAR_3;
    else {
      const struct Curl_handler *VAR_38 = ((void*)0);
      if(VAR_22->scheme)
        VAR_34 = VAR_22->scheme;
      else if(VAR_25 & VAR_15)
        VAR_34 = (char *) VAR_18;
      else
        return VAR_8;

      VAR_38 = FUNC_0(VAR_34);
      if(!VAR_36 && (VAR_25 & VAR_14)) {


        if(VAR_38) {
          FUNC_6(VAR_28, sizeof(VAR_28), "%ld", VAR_38->defport);
          VAR_36 = VAR_28;
        }
      }
      else if(VAR_36) {


        if(VAR_38 && (VAR_38->defport == VAR_22->portnum) &&
           (VAR_25 & VAR_16))
          VAR_36 = ((void*)0);
      }

      if(VAR_38 && !(VAR_38->flags & VAR_20))
        VAR_35 = ((void*)0);

      if((VAR_22->host[0] == '[') && VAR_22->zoneid) {

        size_t VAR_39 = FUNC_9(VAR_22->host);
        size_t VAR_40 = VAR_39 + 3 + FUNC_9(VAR_22->zoneid) + 1;
        VAR_37 = FUNC_4(VAR_40);
        if(!VAR_37)
          return VAR_11;
        FUNC_5(VAR_37, VAR_22->host, VAR_39 - 1);
        FUNC_6(&VAR_37[VAR_39 - 1], VAR_40 - VAR_39 + 1,
                  "%%25%s]", VAR_22->zoneid);
      }

      VAR_33 = FUNC_2("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
                    VAR_34,
                    VAR_22->user ? VAR_22->user : "",
                    VAR_22->password ? ":": "",
                    VAR_22->password ? VAR_22->password : "",
                    VAR_35 ? ";" : "",
                    VAR_35 ? VAR_35 : "",
                    (VAR_22->user || VAR_22->password || VAR_35) ? "@": "",
                    VAR_37 ? VAR_37 : VAR_22->host,
                    VAR_36 ? ":": "",
                    VAR_36 ? VAR_36 : "",
                    (VAR_22->path && (VAR_22->path[0] != '/')) ? "/": "",
                    VAR_22->path ? VAR_22->path : "/",
                    (VAR_22->query && VAR_22->query[0]) ? "?": "",
                    (VAR_22->query && VAR_22->query[0]) ? VAR_22->query : "",
                    VAR_22->fragment? "#": "",
                    VAR_22->fragment? VAR_22->fragment : "");
      FUNC_3(VAR_37);
    }
    if(!VAR_33)
      return VAR_11;
    *VAR_24 = VAR_33;
    return VAR_10;
  }
  default:
    VAR_26 = ((void*)0);
    break;
  }
  if(VAR_26) {
    *VAR_24 = FUNC_8(VAR_26);
    if(!*VAR_24)
      return VAR_11;
    if(VAR_30) {

      char *VAR_41;
      for(VAR_41 = *VAR_24; *VAR_41; ++VAR_41) {
        if(*VAR_41 == '+')
          *VAR_41 = ' ';
      }
    }
    if(VAR_29) {
      char *VAR_42;
      size_t VAR_43;
      CURLcode VAR_44 = FUNC_1(((void*)0), *VAR_24, 0, &VAR_42, &VAR_43, VAR_21);
      FUNC_3(*VAR_24);
      if(VAR_44) {
        *VAR_24 = ((void*)0);
        return VAR_13;
      }
      *VAR_24 = VAR_42;
    }
    return VAR_10;
  }
  else
    return VAR_27;
}
