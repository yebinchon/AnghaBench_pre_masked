
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hostcache; } ;
struct TYPE_3__ {scalar_t__ dns_shuffle_addresses; } ;
struct Curl_easy {TYPE_2__ dns; TYPE_1__ set; } ;
struct Curl_dns_entry {int inuse; int timestamp; int * addr; } ;
typedef int entry_id ;
typedef int Curl_addrinfo ;
typedef scalar_t__ CURLcode ;


 struct Curl_dns_entry* FUNC_0 (int ,char*,size_t,void*) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,int **) ;
 int VAR_0 ;
 struct Curl_dns_entry* FUNC_2 (int,int) ;
 int FUNC_3 (char const*,int,char*,int) ;
 int FUNC_4 (struct Curl_dns_entry*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int*) ;

struct Curl_dns_entry *
FUNC_7(struct Curl_easy *VAR_1,
                Curl_addrinfo *VAR_2,
                const char *VAR_3,
                int VAR_4)
{
  char VAR_5[VAR_0];
  size_t VAR_6;
  struct Curl_dns_entry *VAR_7;
  struct Curl_dns_entry *VAR_8;



  if(VAR_1->set.dns_shuffle_addresses) {
    CURLcode VAR_9 = FUNC_1(VAR_1, &VAR_2);
    if(VAR_9)
      return ((void*)0);
  }



  VAR_7 = FUNC_2(1, sizeof(struct Curl_dns_entry));
  if(!VAR_7) {
    return ((void*)0);
  }


  FUNC_3(VAR_3, VAR_4, VAR_5, sizeof(VAR_5));
  VAR_6 = FUNC_5(VAR_5);

  VAR_7->inuse = 1;
  VAR_7->addr = VAR_2;
  FUNC_6(&VAR_7->timestamp);
  if(VAR_7->timestamp == 0)
    VAR_7->timestamp = 1;


  VAR_8 = FUNC_0(VAR_1->dns.hostcache, VAR_5, VAR_6 + 1,
                       (void *)VAR_7);
  if(!VAR_8) {
    FUNC_4(VAR_7);
    return ((void*)0);
  }

  VAR_7 = VAR_8;
  VAR_7->inuse++;
  return VAR_7;
}
