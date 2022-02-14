
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_8__ {int wildcard_resolve; struct curl_slist* resolve; } ;
struct TYPE_7__ {int hostcache; } ;
struct Curl_easy {TYPE_2__ change; scalar_t__ share; TYPE_1__ dns; } ;
struct Curl_dns_entry {int inuse; scalar_t__ timestamp; } ;
typedef int ptrdiff_t ;
typedef int hostname ;
typedef int entry_id ;
typedef int address ;
struct TYPE_9__ {struct TYPE_9__* ai_next; } ;
typedef TYPE_3__ Curl_addrinfo ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Curl_dns_entry* FUNC_0 (struct Curl_easy*,TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,size_t) ;
 struct Curl_dns_entry* FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (struct Curl_easy*,int ,int ) ;
 int FUNC_5 (struct Curl_easy*,int ) ;
 TYPE_3__* FUNC_6 (char*,int) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (struct Curl_easy*,char*,char*,...) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char*,char*,int*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;
 unsigned long FUNC_13 (char*,char**,int) ;

CURLcode FUNC_14(struct Curl_easy *VAR_6)
{
  struct curl_slist *VAR_7;
  char VAR_8[256];
  int VAR_9 = 0;


  VAR_6->change.wildcard_resolve = 0;

  for(VAR_7 = VAR_6->change.resolve; VAR_7; VAR_7 = VAR_7->next) {
    char VAR_10[VAR_4];
    if(!VAR_7->data)
      continue;
    if(VAR_7->data[0] == '-') {
      size_t VAR_11;

      if(2 != FUNC_10(VAR_7->data + 1, "%255[^:]:%d", VAR_8, &VAR_9)) {
        FUNC_8(VAR_6, "Couldn't parse CURLOPT_RESOLVE removal entry '%s'!\n",
              VAR_7->data);
        continue;
      }


      FUNC_7(VAR_8, VAR_9, VAR_10, sizeof(VAR_10));
      VAR_11 = FUNC_12(VAR_10);

      if(VAR_6->share)
        FUNC_4(VAR_6, VAR_3, VAR_2);


      FUNC_2(VAR_6->dns.hostcache, VAR_10, VAR_11 + 1);

      if(VAR_6->share)
        FUNC_5(VAR_6, VAR_3);
    }
    else {
      struct Curl_dns_entry *VAR_12;
      Curl_addrinfo *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
      size_t VAR_15;
      char VAR_16[64];

      char *VAR_17 = ((void*)0);

      char *VAR_18;
      char *VAR_19;
      char *VAR_20;
      char *VAR_21;
      char *VAR_22;
      unsigned long VAR_23;
      bool VAR_24 = 1;

      VAR_22 = FUNC_11(VAR_7->data, ':');
      if(!VAR_22 ||
         ((VAR_22 - VAR_7->data) >= (ptrdiff_t)sizeof(VAR_8)))
        goto err;

      FUNC_9(VAR_8, VAR_7->data, VAR_22 - VAR_7->data);
      VAR_8[VAR_22 - VAR_7->data] = '\0';

      VAR_20 = VAR_22 + 1;
      VAR_23 = FUNC_13(VAR_20, &VAR_21, 10);
      if(VAR_23 > VAR_5 || VAR_21 == VAR_20 || *VAR_21 != ':')
        goto err;

      VAR_9 = (int)VAR_23;

      VAR_17 = VAR_21 + 1;


      while(*VAR_21) {
        size_t VAR_25;
        Curl_addrinfo *VAR_26;

        VAR_18 = VAR_21 + 1;
        VAR_19 = FUNC_11(VAR_18, ',');
        if(!VAR_19)
          VAR_19 = VAR_18 + FUNC_12(VAR_18);
        VAR_21 = VAR_19;


        if(*VAR_18 == '[') {
          if(VAR_19 == VAR_18 || *(VAR_19 - 1) != ']')
            goto err;
          ++VAR_18;
          --VAR_19;
        }

        VAR_25 = VAR_19 - VAR_18;
        if(!VAR_25)
          continue;

        if(VAR_25 >= sizeof(VAR_16))
          goto err;

        FUNC_9(VAR_16, VAR_18, VAR_25);
        VAR_16[VAR_25] = '\0';


        if(FUNC_11(VAR_16, ':')) {
          FUNC_8(VAR_6, "Ignoring resolve address '%s', missing IPv6 support.\n",
                VAR_16);
          continue;
        }


        VAR_26 = FUNC_6(VAR_16, VAR_9);
        if(!VAR_26) {
          FUNC_8(VAR_6, "Resolve address '%s' found illegal!\n", VAR_16);
          goto err;
        }

        if(VAR_14) {
          VAR_14->ai_next = VAR_26;
          VAR_14 = VAR_14->ai_next;
        }
        else {
          VAR_13 = VAR_14 = VAR_26;
        }
      }

      if(!VAR_13)
        goto err;

      VAR_24 = 0;
   err:
      if(VAR_24) {
        FUNC_8(VAR_6, "Couldn't parse CURLOPT_RESOLVE entry '%s'!\n",
              VAR_7->data);
        FUNC_1(VAR_13);
        continue;
      }


      FUNC_7(VAR_8, VAR_9, VAR_10, sizeof(VAR_10));
      VAR_15 = FUNC_12(VAR_10);

      if(VAR_6->share)
        FUNC_4(VAR_6, VAR_3, VAR_2);


      VAR_12 = FUNC_3(VAR_6->dns.hostcache, VAR_10, VAR_15 + 1);

      if(VAR_12) {
        FUNC_8(VAR_6, "RESOLVE %s:%d is - old addresses discarded!\n",
                VAR_8, VAR_9);







        FUNC_2(VAR_6->dns.hostcache, VAR_10, VAR_15 + 1);
      }


      VAR_12 = FUNC_0(VAR_6, VAR_13, VAR_8, VAR_9);
      if(VAR_12) {
        VAR_12->timestamp = 0;


            VAR_12->inuse--;
      }

      if(VAR_6->share)
        FUNC_5(VAR_6, VAR_3);

      if(!VAR_12) {
        FUNC_1(VAR_13);
        return VAR_1;
      }
      FUNC_8(VAR_6, "Added %s:%d:%s to DNS cache\n",
            VAR_8, VAR_9, VAR_17);


      if(VAR_8[0] == '*' && VAR_8[1] == '\0') {
        FUNC_8(VAR_6, "RESOLVE %s:%d is wildcard, enabling wildcard checks\n",
              VAR_8, VAR_9);
        VAR_6->change.wildcard_resolve = 1;
      }
    }
  }
  VAR_6->change.resolve = ((void*)0);

  return VAR_0;
}
