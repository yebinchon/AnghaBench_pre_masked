
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int * sock; struct Curl_easy* data; } ;
struct TELNET {scalar_t__ subbuffer; int subopt_wsy; int subopt_wsx; } ;
struct TYPE_2__ {scalar_t__ protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct TELNET*,int const) ;
 int FUNC_1 (struct TELNET*) ;
 int FUNC_2 (struct TELNET*) ;
 int FUNC_3 (struct TELNET*) ;
 unsigned char VAR_2 ;

 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct Curl_easy*,char*,int) ;
 unsigned short FUNC_5 (int ) ;
 int FUNC_6 (struct Curl_easy*,char,unsigned char*,int ) ;
 int FUNC_7 (struct connectdata*,char*,int) ;
 int FUNC_8 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct connectdata *VAR_5, int VAR_6)
{
  ssize_t VAR_7;
  int VAR_8;
  unsigned short VAR_9, VAR_10;
  unsigned char *VAR_11, *VAR_12;

  struct Curl_easy *VAR_13 = VAR_5->data;
  struct TELNET *VAR_14 = (struct TELNET *)VAR_13->req.protop;

  switch(VAR_6) {
  case 128:

    FUNC_1(VAR_14);
    FUNC_0(VAR_14, VAR_0);
    FUNC_0(VAR_14, VAR_1);
    FUNC_0(VAR_14, 128);


    VAR_9 = FUNC_5(VAR_14->subopt_wsx);
    VAR_10 = FUNC_5(VAR_14->subopt_wsy);
    VAR_11 = (unsigned char *)&VAR_9;
    VAR_12 = (unsigned char *)&VAR_10;
    FUNC_0(VAR_14, VAR_11[0]);
    FUNC_0(VAR_14, VAR_11[1]);
    FUNC_0(VAR_14, VAR_12[0]);
    FUNC_0(VAR_14, VAR_12[1]);

    FUNC_0(VAR_14, VAR_0);
    FUNC_0(VAR_14, VAR_2);
    FUNC_3(VAR_14);


    FUNC_6(VAR_13, '>', (unsigned char *)VAR_14->subbuffer + 2,
             FUNC_2(VAR_14)-2);


    VAR_7 = FUNC_8(VAR_5->sock[VAR_3], VAR_14->subbuffer, 3);
    if(VAR_7 < 0) {
      VAR_8 = VAR_4;
      FUNC_4(VAR_13, "Sending data failed (%d)", VAR_8);
    }


    FUNC_7(VAR_5, (char *)VAR_14->subbuffer + 3, 4);

    VAR_7 = FUNC_8(VAR_5->sock[VAR_3], VAR_14->subbuffer + 7, 2);
    if(VAR_7 < 0) {
      VAR_8 = VAR_4;
      FUNC_4(VAR_13, "Sending data failed (%d)", VAR_8);
    }
    break;
  }
}
