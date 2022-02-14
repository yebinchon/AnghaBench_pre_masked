
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int requiremember ;
typedef int ntlm_timeout ;
typedef int buffer ;
typedef int answer ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int Buf; } ;
typedef scalar_t__ PID ;
typedef int FILE ;
typedef TYPE_1__ BUF ;


 unsigned int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (int *,int ,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (char*,...) ;
 unsigned int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (char*,char**,int*) ;
 TYPE_1__* FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int,char*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char*,int,int *) ;
 int FUNC_17 (char*,int *) ;
 int FUNC_18 (char*,int,char*,...) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 scalar_t__ FUNC_21 (char*,char*,int) ;
 char* FUNC_22 (char*,char*) ;

bool FUNC_23(char* VAR_0, char* VAR_1, char* VAR_2, char* VAR_3, UINT VAR_4, UCHAR* VAR_5, UCHAR* VAR_6, UCHAR* VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9[2];
 FILE* VAR_10, *VAR_11;
 PID VAR_12;
 char VAR_13[255];
 char VAR_14[32];
 char* VAR_15[6];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  FUNC_4("Sam.c - SmbAuthenticate - wrong password parameter\n");
  return 0;
 }

 if (VAR_1[0] == '\0' && (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)))
 {
  FUNC_4("Sam.c - SmbAuthenticate - wrong MsCHAPv2 parameter\n");
  return 0;
 }

 FUNC_11(VAR_13, sizeof(VAR_13));


 FUNC_6(VAR_2, '\0');

 if (FUNC_20(VAR_2) > 255)
 {


  VAR_2[255] = '\0';
 }


 if (VAR_4 <= 0 || VAR_4 > 900)
 {
  VAR_4 = 999;
 }

 FUNC_18(VAR_14, sizeof(VAR_14), "%is", VAR_4);
 FUNC_4("Sam.c - timeout for ntlm_auth %s\n", VAR_14);

 VAR_15[0] = "timeout";
 VAR_15[1] = VAR_14;
 VAR_15[2] = "ntlm_auth";
 VAR_15[3] = "--helper-protocol=ntlm-server-1";
 VAR_15[4] = 0;

 if (FUNC_20(VAR_3) > 1)
 {

  char VAR_16[352];


  FUNC_6(VAR_3, '\0');

  FUNC_18(VAR_16, sizeof(VAR_16), "--require-membership-of=%s\\%s", VAR_2, VAR_3);

  VAR_15[4] = VAR_16;
  VAR_15[5] = 0;
 }

 VAR_12 = FUNC_9("timeout", VAR_15, VAR_9);

 if (VAR_12 < 0)
 {
  FUNC_4("Sam.c - SmbCheckLogon - error fork child process (ntlm_auth)\n");
  return 0;
 }

 VAR_10 = FUNC_14(VAR_9[1], "w");
 if (VAR_10 == 0)
 {
  FUNC_1(VAR_12, VAR_9);

  FUNC_4("Sam.c - cant open out pipe (ntlm_auth)\n");
  return 0;
 }

 VAR_11 = FUNC_14(VAR_9[0], "r");
 if (VAR_11 == 0)
 {
  FUNC_13(VAR_10);
  FUNC_1(VAR_12, VAR_9);

  FUNC_4("Sam.c - cant open in pipe (ntlm_auth)\n");
  return 0;
 }

 if (FUNC_12((unsigned int)FUNC_20(VAR_0)) < sizeof(VAR_13)-1 &&
  FUNC_12((unsigned int)FUNC_20(VAR_1)) < sizeof(VAR_13)-1 &&
  FUNC_12((unsigned int)FUNC_20(VAR_2)) < sizeof(VAR_13)-1)
 {
  char VAR_17[300];

  unsigned int VAR_18 = FUNC_0(VAR_13, VAR_0, (int)FUNC_20(VAR_0));
  VAR_13[VAR_18] = '\0';
  FUNC_17("Username:: ", VAR_10);
  FUNC_17(VAR_13, VAR_10);
  FUNC_17("\n", VAR_10);
  FUNC_4("Username: %s\n", VAR_13);
  VAR_13[0] = 0;

  VAR_18 = FUNC_0(VAR_13, VAR_2, (int)FUNC_20(VAR_2));
  VAR_13[VAR_18] = '\0';
  FUNC_17("NT-Domain:: ", VAR_10);
  FUNC_17(VAR_13, VAR_10);
  FUNC_17("\n", VAR_10);
  FUNC_4("NT-Domain: %s\n", VAR_13);
  VAR_13[0] = 0;

  if (VAR_1[0] != '\0')
  {
   FUNC_4("Password authentication\n");
   VAR_18 = FUNC_0(VAR_13, VAR_1, (int)FUNC_20(VAR_1));
   VAR_13[VAR_18] = '\0';
   FUNC_17("Password:: ", VAR_10);
   FUNC_17(VAR_13, VAR_10);
   FUNC_17("\n", VAR_10);
   FUNC_4("Password: %s\n", VAR_13);
   VAR_13[0] = 0;
  }
  else
  {
   char* VAR_19;
   char* VAR_20;

   FUNC_4("MsChapV2 authentication\n");
   VAR_19 = FUNC_3(VAR_6, 24);
   VAR_18 = FUNC_0(VAR_13, VAR_19, 48);
   VAR_13[VAR_18] = '\0';
   FUNC_17("NT-Response:: ", VAR_10);
   FUNC_17(VAR_13, VAR_10);
   FUNC_17("\n", VAR_10);
   FUNC_4("NT-Response:: %s\n", VAR_13);
   VAR_13[0] = 0;
   FUNC_7(VAR_19);

   VAR_20 = FUNC_3(VAR_5, 8);
   VAR_18 = FUNC_0(VAR_13, VAR_20 , 16);
   VAR_13[VAR_18] = '\0';
   FUNC_17("LANMAN-Challenge:: ", VAR_10);
   FUNC_17(VAR_13, VAR_10);
   FUNC_17("\n", VAR_10);
   FUNC_4("LANMAN-Challenge:: %s\n", VAR_13);
   VAR_13[0] = 0;
   FUNC_7(VAR_20);

   FUNC_17("Request-User-Session-Key: Yes\n", VAR_10);
   }


  FUNC_17( ".\n", VAR_10 );
  FUNC_15 (VAR_10);


  FUNC_11(VAR_17, sizeof(VAR_17));

  while (FUNC_16(VAR_17, sizeof(VAR_17)-1, VAR_11))
  {
   char* VAR_21;

   if (FUNC_21(VAR_17, ".\n", sizeof(VAR_17)-1 ) == 0)
   {
    break;
   }


   VAR_21 = FUNC_22(VAR_17, ":: ");
   if (!VAR_21) {
    char* VAR_22;

    VAR_21 = FUNC_22(VAR_17, ": ");

    if (!VAR_21) {
     continue;
    }

    VAR_21[0] ='\0';
    VAR_21++;
    VAR_21[0] ='\0';
    VAR_21++;

    VAR_22 = FUNC_22(VAR_21, "\n");
    if( VAR_22 )
     VAR_22[0] = '\0';
   } else {
    VAR_21[0] ='\0';
    VAR_21++;
    VAR_21[0] ='\0';
    VAR_21++;
    VAR_21[0] ='\0';
    VAR_21++;

    VAR_18 = FUNC_5(VAR_21, VAR_21);
    VAR_21[VAR_18] = '\0';
   }

   if (FUNC_21(VAR_17, "Authenticated", sizeof(VAR_17)-1 ) == 0)
   {
    if (FUNC_19(VAR_21, "Yes") == 0)
    {
     FUNC_4("Authenticated!\n");
     VAR_8 = 1;
    }
    else if (FUNC_19(VAR_21, "No") == 0)
    {
     FUNC_4("Authentication failed!\n");
     VAR_8 = 0;
    }
   }
   else if (FUNC_21(VAR_17, "User-Session-Key", sizeof(VAR_17)-1 ) == 0)
   {
    if (VAR_7 != ((void*)0))
    {
     BUF* VAR_23 = FUNC_10(VAR_21);
     FUNC_2(VAR_7, VAR_23->Buf, 16);
     FUNC_8(VAR_23);
    }
   }
  }
 }

 FUNC_13(VAR_11);
 FUNC_13(VAR_10);

 FUNC_1(VAR_12, VAR_9);

 return VAR_8;
}
