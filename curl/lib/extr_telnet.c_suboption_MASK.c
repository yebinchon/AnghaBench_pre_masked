
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct curl_slist {int data; struct curl_slist* next; } ;
struct connectdata {int * sock; struct Curl_easy* data; } ;
struct TELNET {struct curl_slist* telnet_vars; int subopt_xdisploc; int subopt_ttype; scalar_t__ subbuffer; } ;
struct TYPE_2__ {scalar_t__ protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct TELNET*) ;
 size_t FUNC_1 (struct TELNET*) ;
 int VAR_4 ;



 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct Curl_easy*,char*,int) ;
 int FUNC_3 (char*,int,char*,int ,char*,...) ;
 int FUNC_4 (struct Curl_easy*,char,unsigned char*,size_t) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_8(struct connectdata *VAR_8)
{
  struct curl_slist *VAR_9;
  unsigned char VAR_10[2048];
  ssize_t VAR_11;
  size_t VAR_12;
  int VAR_13;
  char VAR_14[128] = "";
  char VAR_15[128] = "";
  struct Curl_easy *VAR_16 = VAR_8->data;
  struct TELNET *VAR_17 = (struct TELNET *)VAR_16->req.protop;

  FUNC_4(VAR_16, '<', (unsigned char *)VAR_17->subbuffer, FUNC_1(VAR_17) + 2);
  switch(FUNC_0(VAR_17)) {
    case 129:
      VAR_12 = FUNC_6(VAR_17->subopt_ttype) + 4 + 2;
      FUNC_3((char *)VAR_10, sizeof(VAR_10),
                "%c%c%c%c%s%c%c", VAR_0, VAR_3, 129,
                VAR_5, VAR_17->subopt_ttype, VAR_0, VAR_4);
      VAR_11 = FUNC_7(VAR_8->sock[VAR_6], VAR_10, VAR_12);
      if(VAR_11 < 0) {
        VAR_13 = VAR_7;
        FUNC_2(VAR_16,"Sending data failed (%d)",VAR_13);
      }
      FUNC_4(VAR_16, '>', &VAR_10[2], VAR_12-2);
      break;
    case 128:
      VAR_12 = FUNC_6(VAR_17->subopt_xdisploc) + 4 + 2;
      FUNC_3((char *)VAR_10, sizeof(VAR_10),
                "%c%c%c%c%s%c%c", VAR_0, VAR_3, 128,
                VAR_5, VAR_17->subopt_xdisploc, VAR_0, VAR_4);
      VAR_11 = FUNC_7(VAR_8->sock[VAR_6], VAR_10, VAR_12);
      if(VAR_11 < 0) {
        VAR_13 = VAR_7;
        FUNC_2(VAR_16,"Sending data failed (%d)",VAR_13);
      }
      FUNC_4(VAR_16, '>', &VAR_10[2], VAR_12-2);
      break;
    case 130:
      FUNC_3((char *)VAR_10, sizeof(VAR_10),
                "%c%c%c%c", VAR_0, VAR_3, 130,
                VAR_5);
      VAR_12 = 4;

      for(VAR_9 = VAR_17->telnet_vars; VAR_9; VAR_9 = VAR_9->next) {
        size_t VAR_18 = (FUNC_6(VAR_9->data) + 1);

        if(VAR_12 + VAR_18 < (int)sizeof(VAR_10)-6) {
          if(FUNC_5(VAR_9->data, "%127[^,],%127s", VAR_14, VAR_15)) {
            FUNC_3((char *)&VAR_10[VAR_12], sizeof(VAR_10) - VAR_12,
                      "%c%s%c%s", VAR_2, VAR_14,
                      VAR_1, VAR_15);
            VAR_12 += VAR_18;
          }
        }
      }
      FUNC_3((char *)&VAR_10[VAR_12], sizeof(VAR_10) - VAR_12,
                "%c%c", VAR_0, VAR_4);
      VAR_12 += 2;
      VAR_11 = FUNC_7(VAR_8->sock[VAR_6], VAR_10, VAR_12);
      if(VAR_11 < 0) {
        VAR_13 = VAR_7;
        FUNC_2(VAR_16,"Sending data failed (%d)",VAR_13);
      }
      FUNC_4(VAR_16, '>', &VAR_10[2], VAR_12-2);
      break;
  }
  return;
}
