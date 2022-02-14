
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* user_addr_t ;
struct TYPE_11__ {scalar_t__ infoptr; } ;
typedef TYPE_1__ user64_namespace_handler_info_ext ;
struct TYPE_12__ {scalar_t__ fdptr; scalar_t__ flags; scalar_t__ token; } ;
typedef TYPE_2__ user64_namespace_handler_info ;
struct TYPE_13__ {scalar_t__ objid; } ;
typedef TYPE_3__ user64_namespace_handler_data ;
struct TYPE_14__ {int infoptr; } ;
typedef TYPE_4__ user32_namespace_handler_info_ext ;
struct TYPE_15__ {int fdptr; int flags; int token; } ;
typedef TYPE_5__ user32_namespace_handler_info ;
struct TYPE_16__ {scalar_t__ objid; } ;
typedef TYPE_6__ user32_namespace_handler_data ;
typedef int u_int ;
typedef int nspace_type_t ;
struct TYPE_17__ {void* objid; void* infoptr; void* fdptr; void* flags; void* token; } ;
typedef TYPE_7__ namespace_handler_data ;
typedef scalar_t__ caddr_t ;
struct TYPE_18__ {int p_acflag; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int) ;
 TYPE_9__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_7__*,int ) ;

__attribute__((used)) static int FUNC_7(nspace_type_t VAR_0, int VAR_1, u_int VAR_2, caddr_t VAR_3)
{
 int VAR_4 = 0;
 namespace_handler_data VAR_5;

 FUNC_1 (&VAR_5, sizeof(namespace_handler_data));

 if ((VAR_4 = FUNC_4(FUNC_3(), &(FUNC_2()->p_acflag)))) {
  return VAR_4;
 }

 VAR_4 = FUNC_5 (VAR_1, VAR_2);
 if (VAR_4) {
  return VAR_4;
 }



 if (VAR_1) {

  VAR_5.token = (user_addr_t)((user64_namespace_handler_info *)VAR_3)->token;
  VAR_5.flags = (user_addr_t)((user64_namespace_handler_info *)VAR_3)->flags;
  VAR_5.fdptr = (user_addr_t)((user64_namespace_handler_info *)VAR_3)->fdptr;


  if (VAR_2 > (sizeof(user64_namespace_handler_info))) {
   if (VAR_2 >= (sizeof(user64_namespace_handler_info_ext))) {
    VAR_5.infoptr = (user_addr_t)((user64_namespace_handler_info_ext *)VAR_3)->infoptr;
   }
   if (VAR_2 == (sizeof(user64_namespace_handler_data))) {
    VAR_5.objid = (user_addr_t)((user64_namespace_handler_data*)VAR_3)->objid;
   }

  }
 }
 else {

  VAR_5.token = FUNC_0(((user32_namespace_handler_info *)VAR_3)->token);
  VAR_5.flags = FUNC_0(((user32_namespace_handler_info *)VAR_3)->flags);
  VAR_5.fdptr = FUNC_0(((user32_namespace_handler_info *)VAR_3)->fdptr);

  if (VAR_2 > (sizeof(user32_namespace_handler_info))) {
   if (VAR_2 >= (sizeof(user32_namespace_handler_info_ext))) {
    VAR_5.infoptr = FUNC_0(((user32_namespace_handler_info_ext *)VAR_3)->infoptr);
   }
   if (VAR_2 == (sizeof(user32_namespace_handler_data))) {
    VAR_5.objid = (user_addr_t)((user32_namespace_handler_data*)VAR_3)->objid;
   }

  }
 }

 return FUNC_6(&VAR_5, VAR_0);
}
