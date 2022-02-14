
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_3__ {scalar_t__ MinFreeSpace; int DirName; } ;
typedef TYPE_1__ ERASER ;


 int FUNC_0 (int ,scalar_t__*,int *,int *) ;

bool FUNC_1(ERASER *VAR_0)
{
 UINT64 VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 1;
 }


 if (FUNC_0(VAR_0->DirName, &VAR_1, ((void*)0), ((void*)0)) == 0)
 {

  return 1;
 }

 if (VAR_0->MinFreeSpace > VAR_1)
 {

  return 0;
 }


 return 1;
}
