
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_2__* kauth_filesec_t ;
typedef TYPE_3__* kauth_acl_t ;
struct TYPE_8__ {scalar_t__ acl_entrycount; scalar_t__ acl_flags; TYPE_1__* acl_ace; } ;
struct TYPE_7__ {scalar_t__ fsec_magic; TYPE_3__ fsec_acl; } ;
struct TYPE_6__ {scalar_t__ ace_flags; scalar_t__ ace_rights; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

void
FUNC_1(int VAR_2, kauth_filesec_t VAR_3, kauth_acl_t VAR_4)
{
  uint32_t VAR_5 = VAR_0;
 uint32_t VAR_6 = FUNC_0(VAR_0);
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (VAR_5 == VAR_6)
  return;


 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_3->fsec_acl;

 VAR_7 = VAR_4->acl_entrycount;






  switch(VAR_2) {
 case 128:
  if (VAR_3->fsec_magic != VAR_6)
   return;

  VAR_7 = FUNC_0(VAR_4->acl_entrycount);
  break;
 case 129:
  if (VAR_3->fsec_magic != VAR_5)
   return;
  break;
 default:
  return;
 }


 VAR_3->fsec_magic = FUNC_0(VAR_3->fsec_magic);
 VAR_4->acl_entrycount = FUNC_0(VAR_4->acl_entrycount);
 if (VAR_7 != VAR_1) {
  VAR_4->acl_flags = FUNC_0(VAR_4->acl_flags);


  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_4->acl_ace[VAR_8].ace_flags = FUNC_0(VAR_4->acl_ace[VAR_8].ace_flags);
   VAR_4->acl_ace[VAR_8].ace_rights = FUNC_0(VAR_4->acl_ace[VAR_8].ace_rights);
  }
 }
 }
