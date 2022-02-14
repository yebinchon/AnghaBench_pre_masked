
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* dirlist; } ;
struct TYPE_8__ {TYPE_1__ Dir; } ;
struct TYPE_9__ {scalar_t__ dn_type; TYPE_2__ dn_typeinfo; } ;
typedef TYPE_3__ devnode_t ;
struct TYPE_10__ {TYPE_3__* de_dnp; } ;
typedef TYPE_4__ devdirent_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(devdirent_t * VAR_1)
{
 devnode_t * VAR_2 = VAR_1->de_dnp;

 if(VAR_2) {
  if(VAR_2->dn_type == VAR_0)
  {
   while(VAR_2->dn_typeinfo.Dir.dirlist)
   {
    FUNC_1(VAR_2->dn_typeinfo.Dir.dirlist);
    FUNC_0(VAR_2->dn_typeinfo.Dir.dirlist);
   }
  }
 }
}
