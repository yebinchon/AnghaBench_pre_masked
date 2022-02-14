
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {int pgConn; } ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

bool
FUNC_2(int32 VAR_4)
{
 MultiConnection *VAR_5 = ((void*)0);
 ConnStatusType VAR_6 = VAR_1;
 bool VAR_7 = 1;

 FUNC_0(VAR_4 != VAR_3);
 VAR_5 = VAR_2[VAR_4];
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = FUNC_1(VAR_5->pgConn);
 if (VAR_6 == VAR_0)
 {
  VAR_7 = 0;
 }

 return VAR_7;
}
