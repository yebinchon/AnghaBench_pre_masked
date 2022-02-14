
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dohentry {char* ttl; int numaddr; int numcname; TYPE_2__* cname; struct dohaddr* addr; } ;
struct TYPE_3__ {int * v6; int * v4; } ;
struct dohaddr {scalar_t__ type; TYPE_1__ ip; } ;
struct Curl_easy {int dummy; } ;
struct TYPE_4__ {char* alloc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*,char*,...) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct Curl_easy *VAR_2,
                    struct dohentry *VAR_3)
{
  int VAR_4;
  FUNC_0(VAR_2, "TTL: %u seconds\n", VAR_3->ttl);
  for(VAR_4 = 0; VAR_4 < VAR_3->numaddr; VAR_4++) {
    struct dohaddr *VAR_5 = &VAR_3->addr[VAR_4];
    if(VAR_5->type == VAR_0) {
      FUNC_0(VAR_2, "DOH A: %u.%u.%u.%u\n",
            VAR_5->ip.v4[0], VAR_5->ip.v4[1],
            VAR_5->ip.v4[2], VAR_5->ip.v4[3]);
    }
    else if(VAR_5->type == VAR_1) {
      int VAR_6;
      char VAR_7[128];
      char *VAR_8;
      size_t VAR_9;
      FUNC_1(VAR_7, 128, "DOH AAAA: ");
      VAR_8 = &VAR_7[10];
      VAR_9 = 118;
      for(VAR_6 = 0; VAR_6 < 16; VAR_6 += 2) {
        size_t VAR_10;
        FUNC_1(VAR_8, VAR_9, "%s%02x%02x", VAR_6?":":"", VAR_3->addr[VAR_4].ip.v6[VAR_6],
                  VAR_3->addr[VAR_4].ip.v6[VAR_6 + 1]);
        VAR_10 = FUNC_2(VAR_8);
        VAR_9 -= VAR_10;
        VAR_8 += VAR_10;
      }
      FUNC_0(VAR_2, "%s\n", VAR_7);
    }
  }
  for(VAR_4 = 0; VAR_4 < VAR_3->numcname; VAR_4++) {
    FUNC_0(VAR_2, "CNAME: %s\n", VAR_3->cname[VAR_4].alloc);
  }
}
