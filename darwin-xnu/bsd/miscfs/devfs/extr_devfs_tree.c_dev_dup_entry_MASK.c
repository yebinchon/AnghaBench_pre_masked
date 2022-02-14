
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct devfsmount {int dummy; } ;
struct TYPE_11__ {TYPE_4__* dirlist; } ;
struct TYPE_12__ {TYPE_1__ Dir; } ;
struct TYPE_13__ {int dn_type; TYPE_2__ dn_typeinfo; struct devfsmount* dn_dvm; } ;
typedef TYPE_3__ devnode_t ;
struct TYPE_14__ {char* de_name; TYPE_3__* de_dnp; struct TYPE_14__* de_next; } ;
typedef TYPE_4__ devdirent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_3__*,int,int *,TYPE_3__*,struct devfsmount*,TYPE_4__**) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(devnode_t * VAR_2, devdirent_t * VAR_3, devdirent_t * *VAR_4,
       struct devfsmount *VAR_5)
{
 devdirent_t * VAR_6 = ((void*)0);
 devdirent_t * VAR_7;
 devdirent_t * VAR_8;
 int VAR_9;
 devnode_t * VAR_10 = VAR_3->de_dnp;
 int VAR_11 = VAR_10->dn_type;





    VAR_9 = FUNC_0(VAR_3->de_name, VAR_2, VAR_11, ((void*)0), VAR_10,
                          VAR_2?VAR_2->dn_dvm:VAR_5, &VAR_6);
    if (!VAR_9 && (VAR_6 == ((void*)0))) {
        VAR_9 = VAR_1;
    }
 if (VAR_9 != 0) {
  FUNC_1("duplicating %s failed\n",VAR_3->de_name);
        goto out;
 }





 if(VAR_5) {
  VAR_6->de_dnp->dn_dvm = VAR_5;
 }






 if (VAR_11 == VAR_0)
 {
  for(VAR_7 = VAR_3->de_dnp->dn_typeinfo.Dir.dirlist;
    VAR_7; VAR_7 = VAR_7->de_next)
  {
   if((VAR_9 = FUNC_2(VAR_6->de_dnp,
         VAR_7, &VAR_8, ((void*)0))) != 0)
   {
    break;
   }
  }
 }
out:
 *VAR_4 = VAR_6;
 return VAR_9;
}
