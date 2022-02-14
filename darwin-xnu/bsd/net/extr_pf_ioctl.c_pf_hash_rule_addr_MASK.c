
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_9__ {int type; } ;
struct pf_rule_addr {TYPE_1__ addr; } ;
struct TYPE_11__ {int addr32; } ;
struct TYPE_10__ {int addr32; } ;
struct TYPE_12__ {TYPE_3__ mask; TYPE_2__ addr; } ;
struct TYPE_13__ {int rtlabelname; TYPE_4__ a; int tblname; int ifname; } ;
struct TYPE_16__ {TYPE_5__ v; int iflags; int type; } ;
struct TYPE_14__ {int op; int * port; } ;
struct TYPE_15__ {TYPE_6__ range; } ;
typedef int MD5_CTX ;
 int FUNC_0 (struct pf_rule_addr*,int ) ;
 TYPE_8__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(MD5_CTX *VAR_3, struct pf_rule_addr *VAR_4, u_int8_t VAR_5)
{
 FUNC_0(VAR_4, VAR_0.type);
 switch (VAR_4->addr.type) {
 case 130:
  FUNC_0(VAR_4, VAR_0.v.ifname);
  FUNC_0(VAR_4, VAR_0.iflags);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_0.v.tblname);
  break;
 case 131:

  FUNC_0(VAR_4, VAR_0.v.a.addr.addr32);
  FUNC_0(VAR_4, VAR_0.v.a.mask.addr32);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_0.v.rtlabelname);
  break;
 }

 switch (VAR_5) {
 case 133:
 case 132:
  FUNC_0(VAR_4, VAR_2.range.port[0]);
  FUNC_0(VAR_4, VAR_2.range.port[1]);
  FUNC_0(VAR_4, VAR_2.range.op);
  break;

 default:
  break;
 }

 FUNC_0(VAR_4, VAR_1);
}
