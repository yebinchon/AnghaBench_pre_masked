
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ aggdistinct; scalar_t__ aggorder; } ;
typedef size_t AggregateType ;
typedef TYPE_1__ Aggref ;


 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(AggregateType VAR_3,
        Aggref *VAR_4)
{

 if (VAR_4->aggorder)
 {
  const char *VAR_5 = VAR_0[VAR_3];
  FUNC_0(VAR_2, (FUNC_1(VAR_1),
      FUNC_2("%s with order by is unsupported", VAR_5)));
 }


 if (VAR_4->aggdistinct)
 {
  const char *VAR_6 = VAR_0[VAR_3];
  FUNC_0(VAR_2, (FUNC_1(VAR_1),
      FUNC_2("%s (distinct) is unsupported", VAR_6)));
 }
}
