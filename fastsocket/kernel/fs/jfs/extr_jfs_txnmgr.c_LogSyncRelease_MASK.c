
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {struct jfs_log* nohomeok; struct jfs_log* log; } ;
struct jfs_log {int dummy; } ;


 int FUNC_0 (struct jfs_log*) ;
 int FUNC_1 (struct metapage*) ;

__attribute__((used)) static void FUNC_2(struct metapage * VAR_0)
{
 struct jfs_log *VAR_1 = VAR_0->log;

 FUNC_0(VAR_0->nohomeok);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
