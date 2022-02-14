
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* user_passwd; void* netrc; } ;
struct TYPE_6__ {int name; } ;
struct connectdata {TYPE_3__ bits; TYPE_2__ host; } ;
struct TYPE_8__ {int uh; } ;
struct TYPE_5__ {scalar_t__ use_netrc; scalar_t__* str; } ;
struct Curl_easy {TYPE_4__ state; TYPE_1__ set; } ;
typedef int CURLcode ;
typedef scalar_t__ CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char**,char**,int*,int*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 void* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_3 (int ,int ,char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct Curl_easy*,char*,int ) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static CURLcode FUNC_7(struct Curl_easy *VAR_12,
                               struct connectdata *VAR_13,
                               char **VAR_14, char **VAR_15, char **VAR_16)
{
  bool VAR_17 = VAR_6;
  bool VAR_18 = VAR_6;
  CURLUcode VAR_19;

  if(VAR_12->set.use_netrc == VAR_5 && VAR_13->bits.user_passwd) {

    if(*VAR_14) {
      FUNC_1(*VAR_14);
      VAR_17 = VAR_11;
    }
    if(*VAR_15) {
      FUNC_1(*VAR_15);
      VAR_18 = VAR_11;
    }
    VAR_13->bits.user_passwd = VAR_6;
  }

  if(VAR_12->set.str[VAR_10]) {
    FUNC_4(*VAR_14);
    *VAR_14 = FUNC_6(VAR_12->set.str[VAR_10]);
    if(!*VAR_14)
      return VAR_1;
    VAR_13->bits.user_passwd = VAR_11;
    VAR_17 = VAR_11;
  }

  if(VAR_12->set.str[VAR_9]) {
    FUNC_4(*VAR_15);
    *VAR_15 = FUNC_6(VAR_12->set.str[VAR_9]);
    if(!*VAR_15)
      return VAR_1;
    VAR_13->bits.user_passwd = VAR_11;
    VAR_18 = VAR_11;
  }

  if(VAR_12->set.str[VAR_8]) {
    FUNC_4(*VAR_16);
    *VAR_16 = FUNC_6(VAR_12->set.str[VAR_8]);
    if(!*VAR_16)
      return VAR_1;
  }

  VAR_13->bits.netrc = VAR_6;
  if(VAR_12->set.use_netrc != VAR_4 &&
      (!*VAR_14 || !**VAR_14 || !*VAR_15 || !**VAR_15)) {
    bool VAR_20 = VAR_6;
    bool VAR_21 = VAR_6;
    int VAR_22;

    VAR_22 = FUNC_0(VAR_13->host.name,
                          VAR_14, VAR_15,
                          &VAR_20, &VAR_21,
                          VAR_12->set.str[VAR_7]);
    if(VAR_22 > 0) {
      FUNC_5(VAR_12, "Couldn't find host %s in the .netrc file; using defaults\n",
            VAR_13->host.name);
    }
    else if(VAR_22 < 0) {
      return VAR_1;
    }
    else {



      VAR_13->bits.netrc = VAR_11;
      VAR_13->bits.user_passwd = VAR_11;

      if(VAR_20) {
        VAR_17 = VAR_11;
      }
      if(VAR_21) {
        VAR_18 = VAR_11;
      }
    }
  }


  if(VAR_17) {
    VAR_19 = FUNC_3(VAR_12->state.uh, VAR_3, *VAR_14, 0);
    if(VAR_19)
      return FUNC_2(VAR_19);
  }
  if(VAR_18) {
    VAR_19 = FUNC_3(VAR_12->state.uh, VAR_2, *VAR_15, 0);
    if(VAR_19)
      return FUNC_2(VAR_19);
  }
  return VAR_0;
}
