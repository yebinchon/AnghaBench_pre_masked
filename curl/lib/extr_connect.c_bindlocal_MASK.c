
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_7__ {void* bound; } ;
struct connectdata {long ip_version; TYPE_3__ bits; int scope_id; struct Curl_easy* data; } ;
struct Curl_sockaddr_storage {int dummy; } ;
struct TYPE_6__ {int os_errno; void* errorbuf; } ;
struct TYPE_5__ {unsigned short localport; int localportrange; char** str; } ;
struct Curl_easy {TYPE_2__ state; TYPE_1__ set; } ;
struct Curl_dns_entry {TYPE_4__* addr; } ;
typedef int myhost ;
typedef int curl_socklen_t ;
typedef int curl_socket_t ;
typedef int buffer ;
typedef int add ;
struct TYPE_8__ {int ai_family; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 int FUNC_0 (int,unsigned int,int ,char const*,char*,int) ;
 scalar_t__ FUNC_1 (int,char*,int *) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (struct connectdata*,char const*,int ,void*,struct Curl_dns_entry**) ;
 int FUNC_4 (struct Curl_easy*,struct Curl_dns_entry*) ;
 int FUNC_5 (struct connectdata*,struct Curl_dns_entry**) ;
 int FUNC_6 (int,char*,int) ;
 void* VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 void* VAR_14 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,struct sockaddr*,int) ;
 int FUNC_9 (struct Curl_easy*,char*,...) ;
 scalar_t__ FUNC_10 (int ,struct sockaddr*,int*) ;
 void* FUNC_11 (unsigned short) ;
 int FUNC_12 (struct Curl_easy*,char*,...) ;
 int FUNC_13 (struct Curl_sockaddr_storage*,int ,int) ;
 void* FUNC_14 (unsigned short) ;
 scalar_t__ FUNC_15 (int ,int ,int ,char const*,int) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char const*,char const*,int) ;

__attribute__((used)) static CURLcode FUNC_19(struct connectdata *VAR_15,
                          curl_socket_t VAR_16, int VAR_17, unsigned int VAR_18)
{
  struct Curl_easy *VAR_19 = VAR_15->data;

  struct Curl_sockaddr_storage VAR_20;
  struct sockaddr *VAR_21 = (struct sockaddr *)&VAR_20;
  curl_socklen_t VAR_22 = 0;
  struct sockaddr_in *VAR_23 = (struct sockaddr_in *)&VAR_20;




  struct Curl_dns_entry *VAR_24 = ((void*)0);
  unsigned short VAR_25 = VAR_19->set.localport;


  int VAR_26 = VAR_19->set.localportrange;
  const char *VAR_27 = VAR_19->set.str[VAR_13];
  int VAR_28;




  if(!VAR_27 && !VAR_25)

    return VAR_3;

  FUNC_13(&VAR_20, 0, sizeof(struct Curl_sockaddr_storage));

  if(VAR_27 && (FUNC_17(VAR_27)<255) ) {
    char VAR_29[256] = "";
    int VAR_30 = 0;
    bool VAR_31 = VAR_8;
    bool VAR_32 = VAR_8;
    static const char *VAR_33 = "if!";
    static const char *VAR_34 = "host!";

    if(FUNC_18(VAR_33, VAR_27, FUNC_17(VAR_33)) == 0) {
      VAR_27 += FUNC_17(VAR_33);
      VAR_31 = VAR_14;
    }
    else if(FUNC_18(VAR_34, VAR_27, FUNC_17(VAR_34)) == 0) {
      VAR_27 += FUNC_17(VAR_34);
      VAR_32 = VAR_14;
    }


    if(!VAR_32) {
      switch(FUNC_0(VAR_17, VAR_18, VAR_15->scope_id, VAR_27,
                        VAR_29, sizeof(VAR_29))) {
        case 128:
          if(VAR_31) {

            FUNC_9(VAR_19, "Couldn't bind to interface '%s'", VAR_27);
            return VAR_2;
          }
          break;
        case 130:

          return VAR_4;
        case 129:
          VAR_31 = VAR_14;



          FUNC_12(VAR_19, "Local Interface %s is ip %s using address family %i\n",
                VAR_27, VAR_29, VAR_17);
          VAR_30 = 1;
          break;
      }
    }
    if(!VAR_31) {
      long VAR_35 = VAR_15->ip_version;
      int VAR_36;

      if(VAR_17 == VAR_0)
        VAR_15->ip_version = VAR_6;





      VAR_36 = FUNC_3(VAR_15, VAR_27, 0, VAR_8, &VAR_24);
      if(VAR_36 == VAR_5)
        (void)FUNC_5(VAR_15, &VAR_24);
      VAR_15->ip_version = VAR_35;

      if(VAR_24) {

        FUNC_2(VAR_24->addr, VAR_29, sizeof(VAR_29));
        FUNC_12(VAR_19, "Name '%s' family %i resolved to '%s' family %i\n",
              VAR_27, VAR_17, VAR_29, VAR_24->addr->ai_family);
        FUNC_4(VAR_19, VAR_24);
        if(VAR_17 != VAR_24->addr->ai_family) {


          return VAR_4;
        }
        VAR_30 = 1;
      }
      else {




        VAR_30 = -1;
      }
    }

    if(VAR_30 > 0) {
      if((VAR_17 == VAR_0) &&
         (FUNC_1(VAR_0, VAR_29, &VAR_23->sin_addr) > 0)) {
        VAR_23->sin_family = VAR_0;
        VAR_23->sin_port = FUNC_11(VAR_25);
        VAR_22 = sizeof(struct sockaddr_in);
      }
    }

    if(VAR_30 < 1) {



      VAR_19->state.errorbuf = VAR_8;
      FUNC_9(VAR_19, "Couldn't bind to '%s'", VAR_27);
      return VAR_2;
    }
  }
  else {
    if(VAR_17 == VAR_0) {
      VAR_23->sin_family = VAR_0;
      VAR_23->sin_port = FUNC_11(VAR_25);
      VAR_22 = sizeof(struct sockaddr_in);
    }
  }

  for(;;) {
    if(FUNC_8(VAR_16, VAR_21, VAR_22) >= 0) {

      struct Curl_sockaddr_storage VAR_37;
      curl_socklen_t VAR_38 = sizeof(VAR_37);
      FUNC_13(&VAR_37, 0, sizeof(struct Curl_sockaddr_storage));
      if(FUNC_10(VAR_16, (struct sockaddr *) &VAR_37, &VAR_38) < 0) {
        char VAR_39[VAR_12];
        VAR_19->state.os_errno = VAR_28 = VAR_9;
        FUNC_9(VAR_19, "getsockname() failed with errno %d: %s",
              VAR_28, FUNC_6(VAR_28, VAR_39, sizeof(VAR_39)));
        return VAR_2;
      }
      FUNC_12(VAR_19, "Local port: %hu\n", VAR_25);
      VAR_15->bits.bound = VAR_14;
      return VAR_3;
    }

    if(--VAR_26 > 0) {
      FUNC_12(VAR_19, "Bind to local port %hu failed, trying next\n", VAR_25);
      VAR_25++;

      if(VAR_21->sa_family == VAR_0)
        VAR_23->sin_port = FUNC_14(VAR_25);




    }
    else
      break;
  }
  {
    char VAR_40[VAR_12];
    VAR_19->state.os_errno = VAR_28 = VAR_9;
    FUNC_9(VAR_19, "bind failed with errno %d: %s",
          VAR_28, FUNC_6(VAR_28, VAR_40, sizeof(VAR_40)));
  }

  return VAR_2;
}
