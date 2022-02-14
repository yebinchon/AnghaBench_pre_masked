
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ attgenerated; scalar_t__ attisdropped; int attname; } ;
struct TYPE_6__ {int natts; } ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 char* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int *,char*) ;

__attribute__((used)) static List *
FUNC_3(TupleDesc VAR_2)
{
 List *VAR_3 = VAR_1;
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->natts; VAR_4++)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_2, VAR_4);
  char *VAR_6 = FUNC_0(VAR_5->attname);

  if (VAR_5->attisdropped



   )
  {
   continue;
  }

  VAR_3 = FUNC_2(VAR_3, VAR_6);
 }

 return VAR_3;
}
