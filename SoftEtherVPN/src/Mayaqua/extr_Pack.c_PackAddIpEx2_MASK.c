
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmp ;
typedef int dummy ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int JsonHint_IsArray; int JsonHint_IsIP; } ;
struct TYPE_9__ {int ipv6_scope_id; int * ipv6_addr; } ;
typedef int PACK ;
typedef TYPE_1__ IP ;
typedef TYPE_2__ ELEMENT ;


 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int *,char*,int,int,int) ;
 TYPE_2__* FUNC_5 (int *,char*,int *,int,int,int) ;
 TYPE_2__* FUNC_6 (int *,char*,int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int) ;

void FUNC_9(PACK *VAR_1, char *VAR_2, IP *VAR_3, UINT VAR_4, UINT VAR_5, bool VAR_6)
{
 UINT VAR_7;
 bool VAR_8 = 0;
 char VAR_9[VAR_0];
 ELEMENT *VAR_10;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_5 >= 2)
 {
  VAR_6 = 0;
 }

 VAR_8 = FUNC_3(VAR_3);

 FUNC_0(VAR_9, sizeof(VAR_9), "%s@ipv6_bool", VAR_2);
 VAR_10 = FUNC_4(VAR_1, VAR_9, VAR_8, VAR_4, VAR_5);
 if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
 if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;

 FUNC_0(VAR_9, sizeof(VAR_9), "%s@ipv6_array", VAR_2);
 if (VAR_8)
 {
  VAR_10 = FUNC_5(VAR_1, VAR_9, VAR_3->ipv6_addr, sizeof(VAR_3->ipv6_addr), VAR_4, VAR_5);
  if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
  if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;
 }
 else
 {
  UCHAR VAR_11[16];

  FUNC_8(VAR_11, sizeof(VAR_11));

  VAR_10 = FUNC_5(VAR_1, VAR_9, VAR_11, sizeof(VAR_11), VAR_4, VAR_5);
  if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
  if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;
 }

 FUNC_0(VAR_9, sizeof(VAR_9), "%s@ipv6_scope_id", VAR_2);
 if (VAR_8)
 {
  VAR_10 = FUNC_6(VAR_1, VAR_9, VAR_3->ipv6_scope_id, VAR_4, VAR_5);
  if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
  if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;
 }
 else
 {
  VAR_10 = FUNC_6(VAR_1, VAR_9, 0, VAR_4, VAR_5);
  if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
  if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;
 }

 VAR_7 = FUNC_1(VAR_3);

 if (FUNC_2())
 {
  VAR_7 = FUNC_7(VAR_7);
 }

 VAR_10 = FUNC_6(VAR_1, VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_10 != ((void*)0) && VAR_6) VAR_10->JsonHint_IsArray = 0;
 if (VAR_10 != ((void*)0)) VAR_10->JsonHint_IsIP = 1;
}
