
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Length; int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_6__ {int Length; int MaximumLength; void* Buffer; } ;
struct TYPE_8__ {TYPE_1__ String; } ;
typedef TYPE_3__ SL_UNICODE ;


 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (int) ;

SL_UNICODE *FUNC_2(UNICODE_STRING *VAR_0)
{
 SL_UNICODE *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_1 = FUNC_1(sizeof(SL_UNICODE));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1->String.Length = VAR_1->String.MaximumLength = VAR_0->Length;

 VAR_1->String.Buffer = FUNC_1(VAR_0->Length);
 FUNC_0(VAR_1->String.Buffer, VAR_0->Buffer, VAR_0->Length);

 return VAR_1;
}
