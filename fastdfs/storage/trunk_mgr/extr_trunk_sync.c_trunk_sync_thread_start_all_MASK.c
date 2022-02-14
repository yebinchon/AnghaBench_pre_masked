
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int server; } ;
typedef TYPE_1__ FDFSStorageServer ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1()
{
 FDFSStorageServer *VAR_2;
 FDFSStorageServer *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = 0;
 VAR_3 = VAR_1 + VAR_0;
 for (VAR_2=VAR_1; VAR_2<VAR_3; VAR_2++)
 {
  VAR_5 = FUNC_0(&(VAR_2->server));
  if (VAR_5 != 0)
  {
   VAR_4 = VAR_5;
  }
 }

 return VAR_4;
}
