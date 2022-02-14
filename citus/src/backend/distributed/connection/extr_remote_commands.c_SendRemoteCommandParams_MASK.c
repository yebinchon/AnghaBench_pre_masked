
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pgConn; } ;
typedef int PGconn ;
typedef int Oid ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int const*,char const* const*,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(MultiConnection *VAR_1, const char *VAR_2,
      int VAR_3, const Oid *VAR_4,
      const char *const *VAR_5)
{
 PGconn *VAR_6 = VAR_1->pgConn;
 int VAR_7 = 0;

 FUNC_1(VAR_1, VAR_2);





 if (!VAR_6 || FUNC_4(VAR_6) != VAR_0)
 {
  return 0;
 }

 FUNC_0(FUNC_2(VAR_6));

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4,
         VAR_5, ((void*)0), ((void*)0), 0);

 return VAR_7;
}
