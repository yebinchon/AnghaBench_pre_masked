
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opcode; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
union viosrp_iu {TYPE_2__ srp; } ;
typedef int u8 ;
struct iu_entry {int dummy; } ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct iu_entry*) ;
 int FUNC_2 (struct iu_entry*) ;
 int FUNC_3 (struct iu_entry*) ;
 union viosrp_iu* FUNC_4 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_5(struct iu_entry *VAR_0)
{
 union viosrp_iu *VAR_1 = FUNC_4(VAR_0);
 int VAR_2 = 1;
 u8 VAR_3 = VAR_1->srp.rsp.opcode;

 switch (VAR_3) {
 case 132:
  FUNC_1(VAR_0);
  break;
 case 129:
  VAR_2 = FUNC_2(VAR_0);
  break;
 case 136:
  FUNC_3(VAR_0);
  VAR_2 = 0;
  break;
 case 131:
 case 133:
 case 128:
 case 130:
 case 135:
 case 134:
 case 138:
 case 137:
  FUNC_0("Unsupported type %u\n", VAR_3);
  break;
 default:
  FUNC_0("Unknown type %u\n", VAR_3);
 }

 return VAR_2;
}
