
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int txt ;
typedef int tmp ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_OBJECT ;


 size_t FUNC_0 (int*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,size_t,int*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,int *,int) ;
 scalar_t__ FUNC_11 (void*,int,char*,int) ;
 int FUNC_12 (int*,int) ;
 int * FUNC_13 (size_t) ;

wchar_t *FUNC_14(void *VAR_3, int VAR_4)
{
 UCHAR VAR_5[1024];
 bool VAR_6 = 0;
 UINT VAR_7, VAR_8;
 int VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 ASN1_OBJECT *VAR_12;
 ASN1_STRING *VAR_13;

 if (VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return ((void*)0);
 }

 FUNC_12(VAR_5, sizeof(VAR_5));
 if (FUNC_11(VAR_3, VAR_4, (char *)VAR_5, sizeof(VAR_5) - 2) <= 0)
 {
  return ((void*)0);
 }

 VAR_12 = FUNC_3(VAR_4);
 if (VAR_12 == ((void*)0))
 {
  return ((void*)0);
 }
 VAR_9 = FUNC_10(VAR_3, VAR_12, -1);
 if (VAR_9 < 0)
 {
  return ((void*)0);
 }
 VAR_13 = FUNC_8(FUNC_9(VAR_3, VAR_9));
 if (VAR_13 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_13->type == VAR_0)
 {
  VAR_10 = 1;
 }
 if (VAR_13->type == VAR_2 || VAR_13->type == VAR_1)
 {
  VAR_11 = 1;
 }

 VAR_8 = FUNC_6((wchar_t *)VAR_5) * 4 + 8;
 for (VAR_7 = 0;VAR_7 < VAR_8;VAR_7++)
 {
  if (VAR_5[VAR_7] >= 0x80)
  {
   VAR_10 = 1;
   break;
  }
 }

 if (VAR_11)
 {
  wchar_t *VAR_14;
  UINT VAR_15;

  VAR_15 = FUNC_0(VAR_5, FUNC_4(VAR_5));
  VAR_14 = FUNC_13(VAR_15 + 8);
  FUNC_7(VAR_14, VAR_15, VAR_5, FUNC_4(VAR_5));

  return VAR_14;
 }
 else if (VAR_10 == 0)
 {
  wchar_t VAR_16[1024];
  FUNC_5(VAR_16, sizeof(VAR_16), (char *)VAR_5);
  return FUNC_1(VAR_16);
 }
 else
 {
  FUNC_2((wchar_t *)VAR_5);
  return FUNC_1((wchar_t *)VAR_5);
 }
}
