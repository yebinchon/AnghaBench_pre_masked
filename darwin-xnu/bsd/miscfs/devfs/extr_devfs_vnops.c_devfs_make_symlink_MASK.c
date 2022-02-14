
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* name; int namelen; } ;
struct TYPE_13__ {TYPE_1__ Slnk; } ;
typedef TYPE_2__ devnode_type_t ;
struct TYPE_14__ {int dn_mode; int dn_gid; int dn_uid; } ;
typedef TYPE_3__ devnode_t ;
struct TYPE_15__ {TYPE_3__* de_dnp; } ;
typedef TYPE_4__ devdirent_t ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*,int ,TYPE_2__*,int *,int *,TYPE_4__**) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(devnode_t *VAR_1, char *VAR_2, int VAR_3, char *VAR_4, devdirent_t **VAR_5)
{
 int VAR_6 = 0;
 devnode_type_t VAR_7;
 devdirent_t * VAR_8;
 devnode_t * VAR_9;

 VAR_7.Slnk.name = VAR_4;
 VAR_7.Slnk.namelen = FUNC_2(VAR_4);

 VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_0,
         &VAR_7, ((void*)0), ((void*)0), &VAR_8);
 if (VAR_6) {
     goto failure;
 }
 VAR_9 = VAR_8->de_dnp;
 VAR_9->dn_uid = VAR_1->dn_uid;
 VAR_9->dn_gid = VAR_1->dn_gid;
 VAR_9->dn_mode = VAR_3;
 FUNC_1(VAR_9, VAR_1);

 if (VAR_5) {
  *VAR_5 = VAR_8;
 }

failure:

 return VAR_6;
}
