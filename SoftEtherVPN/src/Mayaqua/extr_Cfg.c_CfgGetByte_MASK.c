
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Type; scalar_t__ size; int Buf; } ;
typedef TYPE_1__ ITEM ;
typedef int FOLDER ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;

UINT FUNC_2(FOLDER *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4)
{
 ITEM *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }
 if (VAR_5->Type != VAR_0)
 {
  return 0;
 }
 if (VAR_5->size <= VAR_4)
 {
  FUNC_1(VAR_3, VAR_5->Buf, VAR_5->size);
  return VAR_5->size;
 }
 else
 {
  FUNC_1(VAR_3, VAR_5->Buf, VAR_4);
  return VAR_5->size;
 }
}
