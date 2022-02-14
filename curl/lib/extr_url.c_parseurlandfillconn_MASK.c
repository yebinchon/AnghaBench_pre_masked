
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* rawalloc; void* name; } ;
struct TYPE_10__ {void* ipv6_ip; void* user_passwd; } ;
struct connectdata {scalar_t__ scope_id; TYPE_1__ host; TYPE_4__ bits; int remote_port; int port; void* options; void* passwd; void* user; } ;
struct TYPE_8__ {scalar_t__ scope_id; scalar_t__ path_as_is; scalar_t__ disallow_username_in_url; scalar_t__ uh; scalar_t__* str; } ;
struct TYPE_11__ {char* scheme; char* user; char* password; char* options; char* hostname; char* path; char* port; char* query; } ;
struct TYPE_12__ {TYPE_5__ up; int * uh; } ;
struct TYPE_9__ {char* url; void* url_alloc; } ;
struct Curl_easy {TYPE_2__ set; TYPE_6__ state; TYPE_3__ change; } ;
typedef scalar_t__ CURLcode ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_20 ;
 size_t VAR_21 ;
 void* VAR_22 ;
 char* FUNC_3 (char*,scalar_t__,char*) ;
 int * FUNC_4 () ;
 int * FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ,char**,int ) ;
 scalar_t__ FUNC_7 (int *,int ,char*,int) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (struct Curl_easy*,struct connectdata*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct Curl_easy*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 void* FUNC_13 (char*) ;
 size_t FUNC_14 (char*) ;
 unsigned long FUNC_15 (char*,int *,int) ;
 int FUNC_16 (struct Curl_easy*) ;
 int FUNC_17 (int *,struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_18(struct Curl_easy *VAR_23,
                                    struct connectdata *VAR_24)
{
  CURLcode VAR_25;
  CURLU *VAR_26;
  CURLUcode VAR_27;
  char *VAR_28;

  FUNC_16(VAR_23);


  if(VAR_23->set.uh) {
    VAR_26 = VAR_23->state.uh = FUNC_5(VAR_23->set.uh);
  }
  else {
    VAR_26 = VAR_23->state.uh = FUNC_4();
  }

  if(!VAR_26)
    return VAR_1;

  if(VAR_23->set.str[VAR_21] &&
     !FUNC_0(VAR_23->change.url, ((void*)0), VAR_20)) {
    char *VAR_29;
    if(VAR_23->change.url_alloc)
      FUNC_10(VAR_23->change.url);
    VAR_29 = FUNC_3("%s://%s", VAR_23->set.str[VAR_21],
                  VAR_23->change.url);
    if(!VAR_29)
      return VAR_1;
    VAR_23->change.url = VAR_29;
    VAR_23->change.url_alloc = VAR_22;
  }

  if(!VAR_23->set.uh) {
    char *VAR_30;
    VAR_27 = FUNC_7(VAR_26, VAR_12, VAR_23->change.url,
                    VAR_16 |
                    VAR_17 |
                    (VAR_23->set.disallow_username_in_url ?
                     VAR_15 : 0) |
                    (VAR_23->set.path_as_is ? VAR_18 : 0));
    if(VAR_27) {
      FUNC_2(FUNC_11(VAR_23, "curl_url_set rejected %s\n", VAR_23->change.url));
      return FUNC_1(VAR_27);
    }


    VAR_27 = FUNC_6(VAR_26, VAR_12, &VAR_30, 0);
    if(VAR_27)
      return FUNC_1(VAR_27);
    if(VAR_23->change.url_alloc)
      FUNC_10(VAR_23->change.url);
    VAR_23->change.url = VAR_30;
    VAR_23->change.url_alloc = VAR_22;
  }

  VAR_27 = FUNC_6(VAR_26, VAR_11, &VAR_23->state.up.scheme, 0);
  if(VAR_27)
    return FUNC_1(VAR_27);

  VAR_25 = FUNC_9(VAR_23, VAR_24, VAR_23->state.up.scheme);
  if(VAR_25)
    return VAR_25;

  VAR_27 = FUNC_6(VAR_26, VAR_13, &VAR_23->state.up.user,
                    VAR_19);
  if(!VAR_27) {
    VAR_24->user = FUNC_13(VAR_23->state.up.user);
    if(!VAR_24->user)
      return VAR_1;
    VAR_24->bits.user_passwd = VAR_22;
  }
  else if(VAR_27 != VAR_4)
    return FUNC_1(VAR_27);

  VAR_27 = FUNC_6(VAR_26, VAR_7, &VAR_23->state.up.password,
                    VAR_19);
  if(!VAR_27) {
    VAR_24->passwd = FUNC_13(VAR_23->state.up.password);
    if(!VAR_24->passwd)
      return VAR_1;
    VAR_24->bits.user_passwd = VAR_22;
  }
  else if(VAR_27 != VAR_3)
    return FUNC_1(VAR_27);

  VAR_27 = FUNC_6(VAR_26, VAR_6, &VAR_23->state.up.options,
                    VAR_19);
  if(!VAR_27) {
    VAR_24->options = FUNC_13(VAR_23->state.up.options);
    if(!VAR_24->options)
      return VAR_1;
  }
  else if(VAR_27 != VAR_2)
    return FUNC_1(VAR_27);

  VAR_27 = FUNC_6(VAR_26, VAR_5, &VAR_23->state.up.hostname, 0);
  if(VAR_27) {
    if(!FUNC_12("file", VAR_23->state.up.scheme))
      return VAR_1;
  }

  VAR_27 = FUNC_6(VAR_26, VAR_8, &VAR_23->state.up.path, 0);
  if(VAR_27)
    return FUNC_1(VAR_27);

  VAR_27 = FUNC_6(VAR_26, VAR_9, &VAR_23->state.up.port,
                    VAR_14);
  if(VAR_27) {
    if(!FUNC_12("file", VAR_23->state.up.scheme))
      return VAR_1;
  }
  else {
    unsigned long VAR_31 = FUNC_15(VAR_23->state.up.port, ((void*)0), 10);
    VAR_24->port = VAR_24->remote_port = FUNC_8(VAR_31);
  }

  (void)FUNC_6(VAR_26, VAR_10, &VAR_23->state.up.query, 0);

  VAR_28 = VAR_23->state.up.hostname;
  if(VAR_28 && VAR_28[0] == '[') {


    size_t VAR_32;
    VAR_24->bits.ipv6_ip = VAR_22;

    VAR_28++;
    VAR_32 = FUNC_14(VAR_28);
    VAR_28[VAR_32 - 1] = 0;

    FUNC_17(VAR_26, VAR_24);
  }


  VAR_24->host.rawalloc = FUNC_13(VAR_28 ? VAR_28 : "");
  if(!VAR_24->host.rawalloc)
    return VAR_1;
  VAR_24->host.name = VAR_24->host.rawalloc;

  if(VAR_23->set.scope_id)

    VAR_24->scope_id = VAR_23->set.scope_id;

  return VAR_0;
}
