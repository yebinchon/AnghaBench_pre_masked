
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int * name; } ;
struct TYPE_4__ {TYPE_1__ name; } ;
struct nfs_unlinkdata {TYPE_2__ args; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs_unlinkdata *VAR_0)
{
 FUNC_0(VAR_0->args.name.name);
 VAR_0->args.name.name = ((void*)0);
 VAR_0->args.name.len = 0;
}
