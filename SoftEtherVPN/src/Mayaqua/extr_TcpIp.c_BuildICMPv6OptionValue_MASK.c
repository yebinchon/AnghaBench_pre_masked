
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
typedef void* UCHAR ;
struct TYPE_2__ {void* Type; void* Length; } ;
typedef TYPE_1__ ICMPV6_OPTION ;
typedef int BUF ;


 int FUNC_0 (void**,void*,int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (int *,void**,int) ;
 void** FUNC_3 (int) ;

void FUNC_4(BUF *VAR_0, UCHAR VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4;
 UCHAR *VAR_5;
 ICMPV6_OPTION *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = ((VAR_3 + 7) / 8) * 8;
 VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_5, VAR_2, VAR_3);
 VAR_6 = (ICMPV6_OPTION *)VAR_5;
 VAR_6->Length = (UCHAR)(VAR_4 / 8);
 VAR_6->Type = VAR_1;

 FUNC_2(VAR_0, VAR_5, VAR_4);

 FUNC_1(VAR_5);
}
