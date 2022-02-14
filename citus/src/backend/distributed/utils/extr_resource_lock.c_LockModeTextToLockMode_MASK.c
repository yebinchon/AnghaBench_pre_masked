
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LockModeToStringType {int lockMode; int name; } ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_3 ;
 struct LockModeToStringType* VAR_4 ;
 scalar_t__ FUNC_3 (int ,char const*,int ) ;

LOCKMODE
FUNC_4(const char *VAR_5)
{
 LOCKMODE VAR_6 = -1;

 int VAR_7 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  const struct LockModeToStringType *VAR_8 = VAR_4 + VAR_7;
  if (FUNC_3(VAR_8->name, VAR_5, VAR_2) == 0)
  {
   VAR_6 = VAR_8->lockMode;
   break;
  }
 }


 if (VAR_6 == -1)
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("unknown lock mode: %s", VAR_5)));
 }

 return VAR_6;
}
