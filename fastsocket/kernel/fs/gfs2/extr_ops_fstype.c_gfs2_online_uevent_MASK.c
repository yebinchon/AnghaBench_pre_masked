
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_2__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {int sd_kobj; TYPE_1__ sd_args; struct super_block* sd_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2(struct gfs2_sbd *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->sd_vfs;
 char VAR_4[20];
 char VAR_5[20];
 char *VAR_6[] = { VAR_4, VAR_5, ((void*)0) };
 FUNC_1(VAR_4, "RDONLY=%d", (VAR_3->s_flags & VAR_1) ? 1 : 0);
 FUNC_1(VAR_5, "SPECTATOR=%d", VAR_2->sd_args.ar_spectator ? 1 : 0);
 FUNC_0(&VAR_2->sd_kobj, VAR_0, VAR_6);
}
