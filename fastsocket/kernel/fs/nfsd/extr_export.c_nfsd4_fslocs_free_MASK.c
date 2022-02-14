
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_fs_locations {int locations_count; TYPE_1__* locations; } ;
struct TYPE_2__ {struct TYPE_2__* hosts; struct TYPE_2__* path; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct nfsd4_fs_locations *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->locations_count; VAR_1++) {
  FUNC_0(VAR_0->locations[VAR_1].path);
  FUNC_0(VAR_0->locations[VAR_1].hosts);
 }
 FUNC_0(VAR_0->locations);
}
