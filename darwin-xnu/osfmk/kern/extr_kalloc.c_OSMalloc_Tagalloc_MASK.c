
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int queue_entry_t ;
struct TYPE_3__ {int OSMT_refcnt; int OSMT_state; int OSMT_name; int OSMT_attr; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char const*,int ) ;

OSMallocTag
FUNC_6(
 const char *VAR_5,
 uint32_t VAR_6)
{
 OSMallocTag VAR_7;

 VAR_7 = (OSMallocTag)FUNC_4(sizeof(*VAR_7));

 FUNC_2((void *)VAR_7, sizeof(*VAR_7));

 if (VAR_6 & VAR_2)
  VAR_7->OSMT_attr = VAR_0;

 VAR_7->OSMT_refcnt = 1;

 FUNC_5(VAR_7->OSMT_name, VAR_5, VAR_1);

 FUNC_0();
 FUNC_3(&VAR_4, (queue_entry_t)VAR_7);
 FUNC_1();
 VAR_7->OSMT_state = VAR_3;
 return(VAR_7);
}
