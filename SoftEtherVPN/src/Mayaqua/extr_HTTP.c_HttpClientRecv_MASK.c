
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_14__ {int Target; int Method; } ;
struct TYPE_13__ {int Data; } ;
struct TYPE_12__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef TYPE_2__ HTTP_VALUE ;
typedef TYPE_3__ HTTP_HEADER ;
typedef int BUF ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_6 (scalar_t__,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,int *,scalar_t__) ;

PACK *FUNC_13(SOCK *VAR_2)
{
 BUF *VAR_3;
 PACK *VAR_4;
 HTTP_HEADER *VAR_5;
 UINT VAR_6;
 UCHAR *VAR_7;
 HTTP_VALUE *VAR_8;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_9(VAR_2);
 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_11(VAR_5->Method, "HTTP/1.1") != 0 ||
  FUNC_11(VAR_5->Target, "200") != 0)
 {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_8 = FUNC_5(VAR_5, "Content-Type");
 if (VAR_8 == ((void*)0) || FUNC_11(VAR_8->Data, VAR_0) != 0)
 {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == 0 || VAR_6 > VAR_1)
 {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_7 = FUNC_6(VAR_6, 1);
 if (FUNC_8(VAR_2, VAR_7, VAR_6, VAR_2->SecureMode) == 0)
 {
  FUNC_1(VAR_7);
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_3 = FUNC_7();
 FUNC_12(VAR_3, VAR_7, VAR_6);
 FUNC_1(VAR_7);
 FUNC_3(VAR_5);

 FUNC_10(VAR_3, 0, 0);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_3);

 return VAR_4;
}
