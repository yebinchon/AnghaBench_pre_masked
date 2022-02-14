
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_4__ {TYPE_2__ server; } ;
typedef TYPE_1__ FDFSStorageServer ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

int FUNC_2()
{
 FDFSStorageServer *VAR_3;
 FDFSStorageServer *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2 + VAR_1;
 for (VAR_3=VAR_2; VAR_3<VAR_4;
  VAR_3++)
 {
  if (FUNC_0(&(VAR_3->server)))
  {
   continue;
  }

  if ((VAR_5=FUNC_1( VAR_3->server.id)) != 0)

  {
   if (VAR_5 != VAR_0)
   {
    return VAR_5;
   }
  }
 }

 return 0;
}
