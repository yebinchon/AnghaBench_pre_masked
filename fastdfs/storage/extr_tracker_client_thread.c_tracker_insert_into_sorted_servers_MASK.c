
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ server; } ;
typedef TYPE_2__ FDFSStorageServer ;


 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1( FDFSStorageServer *VAR_2)

{
 FDFSStorageServer **VAR_3;
 FDFSStorageServer **VAR_4;
 int VAR_5;

 VAR_4 = VAR_0 + VAR_1;
 for (VAR_3=VAR_4; VAR_3 > VAR_0; VAR_3--)
 {
  VAR_5 = FUNC_0(VAR_2->server.id, (*(VAR_3-1))->server.id);

  if (VAR_5 > 0)
  {
   *VAR_3 = VAR_2;
   return 1;
  }
  else if (VAR_5 < 0)
  {
   *VAR_3 = *(VAR_3-1);
  }
  else
  {
   for (; VAR_3 < VAR_4; VAR_3++)
   {
    *VAR_3 = *(VAR_3+1);
   }
   return 0;
  }
 }

 *VAR_3 = VAR_2;
 return 1;
}
