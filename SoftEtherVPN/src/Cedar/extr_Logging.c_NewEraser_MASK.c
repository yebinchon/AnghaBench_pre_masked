
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dir ;
typedef scalar_t__ UINT64 ;
struct TYPE_7__ {int OsType; } ;
struct TYPE_6__ {int Thread; int HaltEvent; int DirName; scalar_t__ MinFreeSpace; int * Log; } ;
typedef int LOG ;
typedef TYPE_1__ ERASER ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 TYPE_5__* FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int) ;

ERASER *FUNC_7(LOG *VAR_5, UINT64 VAR_6)
{
 ERASER *VAR_7;
 char VAR_8[VAR_4];

 if (VAR_6 == 0)
 {
  if (FUNC_5(FUNC_2()->OsType))
  {
   VAR_6 = VAR_1;
  }
  else
  {
   VAR_6 = VAR_0;
  }
 }

 if (VAR_6 < VAR_2)
 {
  VAR_6 = VAR_2;
 }

 VAR_7 = FUNC_6(sizeof(ERASER));

 FUNC_1(VAR_8, sizeof(VAR_8));

 VAR_7->Log = VAR_5;
 VAR_7->MinFreeSpace = VAR_6;
 VAR_7->DirName = FUNC_0(VAR_8);
 VAR_7->HaltEvent = FUNC_3();

 VAR_7->Thread = FUNC_4(VAR_3, VAR_7);

 return VAR_7;
}
