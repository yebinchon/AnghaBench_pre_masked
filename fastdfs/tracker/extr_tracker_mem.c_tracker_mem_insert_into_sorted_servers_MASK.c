
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ FDFSStorageDetail ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1( FDFSStorageDetail *VAR_0, FDFSStorageDetail **VAR_1, const int VAR_2)


{
 FDFSStorageDetail **VAR_3;
 FDFSStorageDetail **VAR_4;

 VAR_4 = VAR_1 + VAR_2;
 for (VAR_3=VAR_4; VAR_3>VAR_1; VAR_3--)
 {
  if (FUNC_0(VAR_0->id, (*(VAR_3-1))->id) > 0)
  {
   break;
  }
  else
  {
   *VAR_3 = *(VAR_3-1);
  }
 }

 *VAR_3 = VAR_0;
}
