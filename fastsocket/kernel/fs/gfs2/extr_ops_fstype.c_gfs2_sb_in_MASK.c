
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* no_formal_ino; void* no_addr; } ;
struct TYPE_7__ {void* no_formal_ino; void* no_addr; } ;
struct gfs2_sb_host {int sb_uuid; int sb_locktable; int sb_lockproto; TYPE_4__ sb_root_dir; TYPE_2__ sb_master_dir; void* sb_bsize_shift; void* sb_bsize; void* sb_multihost_format; void* sb_fs_format; void* sb_format; void* sb_type; void* sb_magic; } ;
struct TYPE_10__ {int no_formal_ino; int no_addr; } ;
struct TYPE_8__ {int no_formal_ino; int no_addr; } ;
struct TYPE_6__ {int mh_format; int mh_type; int mh_magic; } ;
struct gfs2_sb {int sb_uuid; int sb_locktable; int sb_lockproto; TYPE_5__ sb_root_dir; TYPE_3__ sb_master_dir; int sb_bsize_shift; int sb_bsize; int sb_multihost_format; int sb_fs_format; TYPE_1__ sb_header; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gfs2_sb_host *VAR_1, const void *VAR_2)
{
 const struct gfs2_sb *VAR_3 = VAR_2;

 VAR_1->sb_magic = FUNC_0(VAR_3->sb_header.mh_magic);
 VAR_1->sb_type = FUNC_0(VAR_3->sb_header.mh_type);
 VAR_1->sb_format = FUNC_0(VAR_3->sb_header.mh_format);
 VAR_1->sb_fs_format = FUNC_0(VAR_3->sb_fs_format);
 VAR_1->sb_multihost_format = FUNC_0(VAR_3->sb_multihost_format);
 VAR_1->sb_bsize = FUNC_0(VAR_3->sb_bsize);
 VAR_1->sb_bsize_shift = FUNC_0(VAR_3->sb_bsize_shift);
 VAR_1->sb_master_dir.no_addr = FUNC_1(VAR_3->sb_master_dir.no_addr);
 VAR_1->sb_master_dir.no_formal_ino = FUNC_1(VAR_3->sb_master_dir.no_formal_ino);
 VAR_1->sb_root_dir.no_addr = FUNC_1(VAR_3->sb_root_dir.no_addr);
 VAR_1->sb_root_dir.no_formal_ino = FUNC_1(VAR_3->sb_root_dir.no_formal_ino);

 FUNC_2(VAR_1->sb_lockproto, VAR_3->sb_lockproto, VAR_0);
 FUNC_2(VAR_1->sb_locktable, VAR_3->sb_locktable, VAR_0);
 FUNC_2(VAR_1->sb_uuid, VAR_3->sb_uuid, 16);
}
