
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int targetServer ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ server; } ;
typedef TYPE_2__ FDFSStorageServer ;


 scalar_t__ FUNC_0 (TYPE_2__**,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static FDFSStorageServer *FUNC_3(const char *VAR_3)
{
 FDFSStorageServer VAR_4;
 FDFSStorageServer *VAR_5;
 FDFSStorageServer **VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_4.server.id, VAR_3);

 VAR_5 = &VAR_4;
 VAR_6 = (FDFSStorageServer **)FUNC_0(&VAR_5, VAR_0, VAR_1, sizeof(FDFSStorageServer *), VAR_2);


 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }
 else
 {
  return *VAR_6;
 }
}
