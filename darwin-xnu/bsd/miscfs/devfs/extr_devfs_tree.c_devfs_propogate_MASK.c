
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int dn_type; int dn_dvm; struct TYPE_9__* dn_nextsibling; } ;
typedef TYPE_1__ devnode_t ;
typedef int * devfs_event_log_t ;
struct TYPE_10__ {char* de_name; TYPE_1__* de_dnp; } ;
typedef TYPE_2__ devdirent_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_1__*,int,int *,TYPE_1__*,int ,TYPE_2__**) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(devdirent_t * VAR_4,devdirent_t * VAR_5, devfs_event_log_t VAR_6)
{
 int VAR_7;
 devdirent_t * VAR_8;
 devnode_t * VAR_9 = VAR_5->de_dnp;
 devnode_t * VAR_10 = VAR_4->de_dnp;
 devnode_t * VAR_11 = VAR_4->de_dnp;
 int VAR_12 = VAR_5->de_dnp->dn_type;
 uint32_t VAR_13;

 VAR_13 = (VAR_9->dn_type == VAR_0 ? VAR_1 : VAR_2);
 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_6, VAR_10, VAR_13);
 }




 for (VAR_11 = VAR_10->dn_nextsibling;
  VAR_11 != VAR_10;
  VAR_11 = VAR_11->dn_nextsibling)
 {





  if ((VAR_7 = FUNC_0(VAR_5->de_name, VAR_11, VAR_12,
        ((void*)0), VAR_9, VAR_11->dn_dvm,
        &VAR_8)) != 0) {
   FUNC_2("duplicating %s failed\n",VAR_5->de_name);
  } else {
   if (VAR_6 != ((void*)0)) {
    FUNC_1(VAR_6, VAR_11, VAR_13);
    FUNC_1(VAR_6, VAR_8->de_dnp, VAR_3);
   }
  }
 }
 return 0;
}
