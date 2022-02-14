
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int entrycount; TYPE_1__** dirlast; TYPE_4__* parent; scalar_t__ dirlist; } ;
struct TYPE_11__ {TYPE_2__ Dir; } ;
struct TYPE_12__ {scalar_t__ dn_type; int dn_len; TYPE_3__ dn_typeinfo; TYPE_5__* dn_linklist; } ;
typedef TYPE_4__ devnode_t ;
struct TYPE_13__ {int de_name; TYPE_1__** de_prevp; TYPE_1__* de_next; struct TYPE_13__* de_nextlink; struct TYPE_13__** de_prevlinkp; TYPE_4__* de_dnp; TYPE_4__* de_parent; } ;
typedef TYPE_5__ devdirent_t ;
struct TYPE_9__ {struct TYPE_9__** de_prevp; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(devdirent_t * VAR_3)
{
 devnode_t * VAR_4 = VAR_3->de_parent;
 devnode_t * VAR_5 = VAR_3->de_dnp;

 if(VAR_5) {
  if(VAR_5->dn_type == VAR_0)
  {
       devnode_t * VAR_6;

   if(VAR_5->dn_typeinfo.Dir.dirlist)
    return (VAR_1);
   VAR_6 = VAR_5->dn_typeinfo.Dir.parent;
   FUNC_2(VAR_5);
   FUNC_2(VAR_6);
  }






  if(VAR_3->de_nextlink == VAR_3) {
    VAR_5->dn_linklist = ((void*)0);
  } else {
   if(VAR_5->dn_linklist == VAR_3) {
    VAR_5->dn_linklist = VAR_3->de_nextlink;
   }
  }
  FUNC_2(VAR_5);
 }

 VAR_3->de_nextlink->de_prevlinkp = VAR_3->de_prevlinkp;
 *(VAR_3->de_prevlinkp) = VAR_3->de_nextlink;




 if(VAR_4)
 {
  if( (*VAR_3->de_prevp = VAR_3->de_next) )
  {
   VAR_3->de_next->de_prevp = VAR_3->de_prevp;
  }
  else
  {
   VAR_4->dn_typeinfo.Dir.dirlast
    = VAR_3->de_prevp;
  }
  VAR_4->dn_typeinfo.Dir.entrycount--;
  VAR_4->dn_len -= FUNC_3(VAR_3->de_name) + 8;
 }

 FUNC_0();
 FUNC_1(VAR_3, VAR_2);
 return 0;
}
