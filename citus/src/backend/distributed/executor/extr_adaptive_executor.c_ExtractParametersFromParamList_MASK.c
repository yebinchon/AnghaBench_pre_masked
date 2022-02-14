
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ptype; int value; scalar_t__ isnull; } ;
struct TYPE_4__ {int numParams; TYPE_2__* params; } ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__*,int*) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(ParamListInfo VAR_3,
          Oid **VAR_4,
          const char ***VAR_5, bool
          VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = VAR_3->numParams;

 *VAR_4 = (Oid *) FUNC_2(VAR_8 * sizeof(Oid));
 *VAR_5 = (const char **) FUNC_2(VAR_8 * sizeof(char *));


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
 {
  ParamExternData *VAR_9 = &VAR_3->params[VAR_7];
  Oid VAR_10 = VAR_1;
  bool VAR_11 = 0;






  if (VAR_9->ptype >= VAR_0 && !VAR_6)
  {
   (*VAR_4)[VAR_7] = 0;
  }
  else
  {
   (*VAR_4)[VAR_7] = VAR_9->ptype;
  }







  if (VAR_9->ptype == 0)
  {
   (*VAR_5)[VAR_7] = ((void*)0);
   (*VAR_4)[VAR_7] = VAR_2;

   continue;
  }





  if (VAR_9->isnull)
  {
   (*VAR_5)[VAR_7] = ((void*)0);

   continue;
  }

  FUNC_1(VAR_9->ptype, &VAR_10,
        &VAR_11);

  (*VAR_5)[VAR_7] = FUNC_0(VAR_10,
                   VAR_9->value);
 }
}
