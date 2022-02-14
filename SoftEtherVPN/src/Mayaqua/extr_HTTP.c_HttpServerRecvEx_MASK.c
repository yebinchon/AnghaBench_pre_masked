
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_15__ {int Version; int Target; int Method; } ;
struct TYPE_14__ {int Data; } ;
struct TYPE_13__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef TYPE_2__ HTTP_VALUE ;
typedef TYPE_3__ HTTP_HEADER ;
typedef int BUF ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_9 (scalar_t__,int) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,char*,int) ;
 int * FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int FUNC_14 (TYPE_1__*,int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *,int ,int ) ;
 scalar_t__ FUNC_17 (int ,char*) ;
 int FUNC_18 (int *,int *,scalar_t__) ;

PACK *FUNC_19(SOCK *VAR_4, UINT VAR_5)
{
 BUF *VAR_6;
 PACK *VAR_7;
 HTTP_HEADER *VAR_8;
 UINT VAR_9;
 UCHAR *VAR_10;
 HTTP_VALUE *VAR_11;
 UINT VAR_12 = 0;
 if (VAR_5 == 0) VAR_5 = VAR_1;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

START:
 VAR_8 = FUNC_15(VAR_4);
 if (VAR_8 == ((void*)0))
 {
  goto BAD_REQUEST;
 }

 if (FUNC_17(VAR_8->Method, "POST") != 0 ||
  FUNC_17(VAR_8->Target, VAR_2) != 0 ||
  FUNC_17(VAR_8->Version, "HTTP/1.1") != 0)
 {
  FUNC_4(VAR_8);
  goto BAD_REQUEST;
 }

 VAR_11 = FUNC_7(VAR_8, "Content-Type");
 if (VAR_11 == ((void*)0) || FUNC_17(VAR_11->Data, VAR_0) != 0)
 {
  FUNC_4(VAR_8);
  goto BAD_REQUEST;
 }

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 == 0 || (VAR_9 > VAR_5))
 {
  FUNC_4(VAR_8);
  goto BAD_REQUEST;
 }

 VAR_10 = FUNC_9(VAR_9, 1);
 if (FUNC_14(VAR_4, VAR_10, VAR_9, VAR_4->SecureMode) == 0)
 {
  FUNC_2(VAR_10);
  FUNC_4(VAR_8);
  return ((void*)0);
 }

 VAR_6 = FUNC_10();
 FUNC_18(VAR_6, VAR_10, VAR_9);
 FUNC_2(VAR_10);
 FUNC_4(VAR_8);

 FUNC_16(VAR_6, 0, 0);
 VAR_7 = FUNC_0(VAR_6);
 FUNC_3(VAR_6);


 if (FUNC_13(VAR_7, "noop") != 0)
 {
  FUNC_1("recv: noop\n");
  FUNC_5(VAR_7);

  VAR_7 = FUNC_12(0);
  FUNC_11(VAR_7, "noop", 1);
  if (FUNC_8(VAR_4, VAR_7) == 0)
  {
   FUNC_5(VAR_7);
   return ((void*)0);
  }

  FUNC_5(VAR_7);

  VAR_12++;

  if (VAR_12 > VAR_3)
  {
   return ((void*)0);
  }

  goto START;
 }

 return VAR_7;

BAD_REQUEST:

 return ((void*)0);
}
