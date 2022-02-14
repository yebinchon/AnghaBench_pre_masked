
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {TYPE_1__* a_entries; } ;
typedef int mode_t ;
typedef int gfp_t ;
struct TYPE_2__ {int e_perm; void* e_id; int e_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct posix_acl* FUNC_1 (int,int ) ;

struct posix_acl *
FUNC_2(mode_t VAR_8, gfp_t VAR_9)
{
 struct posix_acl *VAR_10 = FUNC_1(3, VAR_9);
 if (!VAR_10)
  return FUNC_0(-VAR_4);

 VAR_10->a_entries[0].e_tag = VAR_3;
 VAR_10->a_entries[0].e_id = VAR_2;
 VAR_10->a_entries[0].e_perm = (VAR_8 & VAR_7) >> 6;

 VAR_10->a_entries[1].e_tag = VAR_0;
 VAR_10->a_entries[1].e_id = VAR_2;
 VAR_10->a_entries[1].e_perm = (VAR_8 & VAR_5) >> 3;

 VAR_10->a_entries[2].e_tag = VAR_1;
 VAR_10->a_entries[2].e_id = VAR_2;
 VAR_10->a_entries[2].e_perm = (VAR_8 & VAR_6);
 return VAR_10;
}
