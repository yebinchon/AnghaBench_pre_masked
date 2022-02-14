
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ server; } ;
typedef TYPE_2__ FDFSStorageServer ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 return FUNC_0((*((FDFSStorageServer **)VAR_0))->server.id,
  (*((FDFSStorageServer **)VAR_1))->server.id);
}
