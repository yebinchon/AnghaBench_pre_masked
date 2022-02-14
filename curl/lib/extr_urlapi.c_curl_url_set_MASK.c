
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* scheme; char* user; char* password; char* options; char* host; char* zoneid; long portnum; char* port; char* path; char* query; char* fragment; } ;
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
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *,int ) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 int FUNC_3 (char**) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 size_t VAR_13 ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_14 ;
 char* FUNC_7 (char*,char const*) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int const,char**,unsigned int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,char*) ;
 char* FUNC_13 (size_t) ;
 int FUNC_14 (char*,int,char*,unsigned char const) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_16 (char const*,TYPE_1__*,unsigned int) ;
 int FUNC_17 (char*,char const*) ;
 char* FUNC_18 (char const*) ;
 size_t FUNC_19 (char const*) ;
 long FUNC_20 (char const*,char**,int) ;

CURLUcode FUNC_21(CURLU *VAR_15, CURLUPart VAR_16,
                       const char *VAR_17, unsigned int VAR_18)
{
  char **VAR_19 = ((void*)0);
  long VAR_20 = 0;
  bool VAR_21 = (VAR_18 & VAR_10)? 1 : 0;
  bool VAR_22 = VAR_12;
  bool VAR_23 = VAR_12;
  bool VAR_24 = VAR_12;
  bool VAR_25 = VAR_12;

  if(!VAR_15)
    return VAR_0;
  if(!VAR_17) {

    switch(VAR_16) {
    case 130:
      break;
    case 131:
      VAR_19 = &VAR_15->scheme;
      break;
    case 129:
      VAR_19 = &VAR_15->user;
      break;
    case 135:
      VAR_19 = &VAR_15->password;
      break;
    case 136:
      VAR_19 = &VAR_15->options;
      break;
    case 137:
      VAR_19 = &VAR_15->host;
      break;
    case 128:
      VAR_19 = &VAR_15->zoneid;
      break;
    case 133:
      VAR_15->portnum = 0;
      VAR_19 = &VAR_15->port;
      break;
    case 134:
      VAR_19 = &VAR_15->path;
      break;
    case 132:
      VAR_19 = &VAR_15->query;
      break;
    case 138:
      VAR_19 = &VAR_15->fragment;
      break;
    default:
      return VAR_5;
    }
    if(VAR_19 && *VAR_19) {
      FUNC_11(*VAR_19);
      *VAR_19 = ((void*)0);
    }
    return VAR_3;
  }

  switch(VAR_16) {
  case 131:
    if(FUNC_19(VAR_17) > VAR_13)

      return VAR_2;
    if(!(VAR_18 & VAR_8) &&

       !FUNC_0(VAR_17))
      return VAR_6;
    VAR_19 = &VAR_15->scheme;
    VAR_21 = VAR_12;
    break;
  case 129:
    VAR_19 = &VAR_15->user;
    break;
  case 135:
    VAR_19 = &VAR_15->password;
    break;
  case 136:
    VAR_19 = &VAR_15->options;
    break;
  case 137:
    VAR_19 = &VAR_15->host;
    FUNC_11(VAR_15->zoneid);
    VAR_15->zoneid = ((void*)0);
    break;
  case 128:
    VAR_19 = &VAR_15->zoneid;
    break;
  case 133:
  {
    char *VAR_26;
    VAR_21 = VAR_12;
    VAR_20 = FUNC_20(VAR_17, &VAR_26, 10);
    if((VAR_20 <= 0) || (VAR_20 > 0xffff))
      return VAR_1;
    if(*VAR_26)

      return VAR_2;
    VAR_19 = &VAR_15->port;
  }
  break;
  case 134:
    VAR_23 = VAR_14;
    VAR_19 = &VAR_15->path;
    break;
  case 132:
    VAR_22 = VAR_21;
    VAR_24 = (VAR_18 & VAR_7)?1:0;
    VAR_25 = VAR_24;
    VAR_19 = &VAR_15->query;
    break;
  case 138:
    VAR_19 = &VAR_15->fragment;
    break;
  case 130: {






    CURLUcode VAR_27;
    char *VAR_28;
    char *VAR_29;
    CURLU *VAR_30;

    if(FUNC_1(VAR_17, ((void*)0), VAR_13 + 1)) {
      VAR_30 = FUNC_8();
      if(!VAR_30)
        return VAR_4;
      VAR_27 = FUNC_16(VAR_17, VAR_30, VAR_18);
      if(!VAR_27)
        FUNC_15(VAR_30, VAR_15);
      else
        FUNC_9(VAR_30);
      return VAR_27;
    }

    VAR_27 = FUNC_10(VAR_15, 130, &VAR_28, VAR_18);
    if(VAR_27) {

      VAR_30 = FUNC_8();
      if(!VAR_30)
        return VAR_4;
      VAR_27 = FUNC_16(VAR_17, VAR_30, VAR_18);
      if(!VAR_27)
        FUNC_15(VAR_30, VAR_15);
      else
        FUNC_9(VAR_30);
      return VAR_27;
    }


    VAR_29 = FUNC_7(VAR_28, VAR_17);
    FUNC_11(VAR_28);
    if(!VAR_29)
      return VAR_4;


    VAR_30 = FUNC_8();
    if(!VAR_30) {
      FUNC_11(VAR_29);
      return VAR_4;
    }
    VAR_27 = FUNC_16(VAR_29, VAR_30, VAR_18);
    FUNC_11(VAR_29);
    if(!VAR_27)
      FUNC_15(VAR_30, VAR_15);
    else
      FUNC_9(VAR_30);
    return VAR_27;
  }
  default:
    return VAR_5;
  }
  FUNC_3(VAR_19);
  {
    const char *VAR_31 = VAR_17;
    size_t VAR_32 = FUNC_19(VAR_17);

    if(VAR_32 > VAR_11)

      return VAR_2;

    if(VAR_21) {
      const unsigned char *VAR_33;
      char *VAR_34;
      bool VAR_35 = VAR_12;
      char *VAR_36 = FUNC_13(VAR_32 * 3 + 1);
      if(!VAR_36)
        return VAR_4;
      if(VAR_22) {

        VAR_33 = (const unsigned char *)VAR_17;
        for(VAR_34 = VAR_36; *VAR_33; ++VAR_34, ++VAR_33)
          *VAR_34 = (*VAR_33 == ' ') ? '+' : *VAR_33;
        *VAR_34 = 0;
        VAR_17 = FUNC_18(VAR_36);
        if(!VAR_17) {
          FUNC_11(VAR_36);
          return VAR_4;
        }
        VAR_35 = VAR_14;
      }
      for(VAR_33 = (const unsigned char *)VAR_17, VAR_34 = VAR_36; *VAR_33; VAR_33++) {
        if(FUNC_2(*VAR_33) ||
           ((*VAR_33 == '/') && VAR_23) ||
           ((*VAR_33 == '=') && VAR_25) ||
           ((*VAR_33 == '+') && VAR_22)) {
          if((*VAR_33 == '=') && VAR_25)

            VAR_25 = VAR_12;
          *VAR_34 = *VAR_33;
          VAR_34++;
        }
        else {
          FUNC_14(VAR_34, 4, "%%%02x", *VAR_33);
          VAR_34 += 3;
        }
      }
      *VAR_34 = 0;
      VAR_31 = VAR_36;
      if(VAR_35)
        FUNC_11((char *)VAR_17);
    }
    else {
      char *VAR_37;
      VAR_31 = FUNC_18(VAR_17);
      if(!VAR_31)
        return VAR_4;
      VAR_37 = (char *)VAR_31;
      while(*VAR_37) {

        if((*VAR_37 == '%') && FUNC_5(VAR_37[1]) && FUNC_5(VAR_37[2]) &&
           (FUNC_4(VAR_37[1]) || FUNC_4(VAR_37[2]))) {
          VAR_37[1] = (char)FUNC_6(VAR_37[1]);
          VAR_37[2] = (char)FUNC_6(VAR_37[2]);
          VAR_37 += 3;
        }
        else
          VAR_37++;
      }
    }

    if(VAR_24) {


      size_t VAR_38 = VAR_15->query ? FUNC_19(VAR_15->query) : 0;
      bool VAR_39 = VAR_38 && (VAR_15->query[VAR_38 -1] != '&');
      if(VAR_38) {
        size_t VAR_40 = FUNC_19(VAR_31);
        char *VAR_41 = FUNC_13(VAR_38 + VAR_39 + VAR_40 + 1);
        if(!VAR_41) {
          FUNC_11((char *)VAR_31);
          return VAR_4;
        }
        FUNC_17(VAR_41, VAR_15->query);
        if(VAR_39)
          VAR_41[VAR_38] = '&';
        FUNC_17(&VAR_41[VAR_38 + VAR_39], VAR_31);
        FUNC_11((char *)VAR_31);
        FUNC_11(*VAR_19);
        *VAR_19 = VAR_41;
        return VAR_3;
      }
    }

    if(VAR_16 == 137) {
      if(0 == FUNC_19(VAR_31) && (VAR_18 & VAR_9)) {

      }
      else {
        if(FUNC_12(VAR_15, (char *)VAR_31)) {
          FUNC_11((char *)VAR_31);
          return VAR_2;
        }
      }
    }

    FUNC_11(*VAR_19);
    *VAR_19 = (char *)VAR_31;
  }


  if(VAR_20)
    VAR_15->portnum = VAR_20;
  return VAR_3;
}
