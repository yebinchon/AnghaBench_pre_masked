
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_5__ {scalar_t__ user_passwd; } ;
struct connectdata {int user; TYPE_2__ bits; struct Curl_easy* data; } ;
struct TELNET {char subopt_wsx; char subopt_wsy; struct curl_slist* telnet_vars; void** him_preferred; void** us_preferred; scalar_t__* subopt_xdisploc; scalar_t__* subopt_ttype; } ;
struct TYPE_6__ {struct curl_slist* telnet_options; } ;
struct TYPE_4__ {scalar_t__ protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef int option_arg ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (char*) ;
 struct curl_slist* FUNC_1 (struct curl_slist*,char*) ;
 int FUNC_2 (struct curl_slist*) ;
 int FUNC_3 (struct Curl_easy*,char*,char*) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (scalar_t__*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_8(struct connectdata *VAR_11)
{
  struct curl_slist *VAR_12;
  struct curl_slist *VAR_13;
  char VAR_14[128] = "";
  char VAR_15[256] = "";
  struct Curl_easy *VAR_16 = VAR_11->data;
  struct TELNET *VAR_17 = (struct TELNET *)VAR_11->data->req.protop;
  CURLcode VAR_18 = VAR_0;
  int VAR_19;



  if(VAR_11->bits.user_passwd) {
    FUNC_4(VAR_15, sizeof(VAR_15), "USER,%s", VAR_11->user);
    VAR_13 = FUNC_1(VAR_17->telnet_vars, VAR_15);
    if(!VAR_13) {
      FUNC_2(VAR_17->telnet_vars);
      VAR_17->telnet_vars = ((void*)0);
      return VAR_1;
    }
    VAR_17->telnet_vars = VAR_13;
    VAR_17->us_preferred[VAR_7] = VAR_10;
  }

  for(VAR_12 = VAR_16->set.telnet_options; VAR_12; VAR_12 = VAR_12->next) {
    if(FUNC_5(VAR_12->data, "%127[^= ]%*[ =]%255s",
              VAR_14, VAR_15) == 2) {


      if(FUNC_6(VAR_14, "TTYPE")) {
        FUNC_7(VAR_17->subopt_ttype, VAR_15, 31);
        VAR_17->subopt_ttype[31] = 0;
        VAR_17->us_preferred[VAR_8] = VAR_10;
        continue;
      }


      if(FUNC_6(VAR_14, "XDISPLOC")) {
        FUNC_7(VAR_17->subopt_xdisploc, VAR_15, 127);
        VAR_17->subopt_xdisploc[127] = 0;
        VAR_17->us_preferred[VAR_9] = VAR_10;
        continue;
      }


      if(FUNC_6(VAR_14, "NEW_ENV")) {
        VAR_13 = FUNC_1(VAR_17->telnet_vars, VAR_15);
        if(!VAR_13) {
          VAR_18 = VAR_1;
          break;
        }
        VAR_17->telnet_vars = VAR_13;
        VAR_17->us_preferred[VAR_7] = VAR_10;
        continue;
      }


      if(FUNC_6(VAR_14, "WS")) {
        if(FUNC_5(VAR_15, "%hu%*[xX]%hu",
                  &VAR_17->subopt_wsx, &VAR_17->subopt_wsy) == 2)
          VAR_17->us_preferred[VAR_6] = VAR_10;
        else {
          FUNC_3(VAR_16, "Syntax error in telnet option: %s", VAR_12->data);
          VAR_18 = VAR_2;
          break;
        }
        continue;
      }


      if(FUNC_6(VAR_14, "BINARY")) {
        VAR_19 = FUNC_0(VAR_15);
        if(VAR_19 != 1) {
          VAR_17->us_preferred[VAR_5] = VAR_4;
          VAR_17->him_preferred[VAR_5] = VAR_4;
        }
        continue;
      }

      FUNC_3(VAR_16, "Unknown telnet option %s", VAR_12->data);
      VAR_18 = VAR_3;
      break;
    }
    FUNC_3(VAR_16, "Syntax error in telnet option: %s", VAR_12->data);
    VAR_18 = VAR_2;
    break;
  }

  if(VAR_18) {
    FUNC_2(VAR_17->telnet_vars);
    VAR_17->telnet_vars = ((void*)0);
  }

  return VAR_18;
}
