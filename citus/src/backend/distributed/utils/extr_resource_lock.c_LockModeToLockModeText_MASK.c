
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LockModeToStringType {scalar_t__ lockMode; char* name; } ;
typedef scalar_t__ LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 struct LockModeToStringType* VAR_3 ;

const char *
FUNC_3(LOCKMODE VAR_4)
{
 const char *VAR_5 = ((void*)0);

 int VAR_6 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  const struct LockModeToStringType *VAR_7 = VAR_3 + VAR_6;
  if (VAR_4 == VAR_7->lockMode)
  {
   VAR_5 = VAR_7->name;
   break;
  }
 }


 if (VAR_5 == ((void*)0))
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("unknown lock mode enum: %d", (int) VAR_4)));
 }

 return VAR_5;
}
