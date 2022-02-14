
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* name; scalar_t__ namelen; } ;
struct TYPE_8__ {TYPE_1__ Slnk; } ;
struct TYPE_9__ {scalar_t__ dn_type; TYPE_2__ dn_typeinfo; } ;
typedef TYPE_3__ devnode_t ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;

void
FUNC_4(devnode_t * VAR_2)
{



    if (VAR_2->dn_type == VAR_0) {
        FUNC_1(VAR_2->dn_typeinfo.Slnk.namelen + 1);
 FUNC_2(VAR_2->dn_typeinfo.Slnk.name, VAR_1);
    }
    FUNC_0();
    FUNC_2(VAR_2, VAR_1);
}
