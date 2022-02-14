
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_start; scalar_t__ cpuid; } ;
struct TYPE_3__ {TYPE_2__ regatta_frame; } ;
struct el_subpacket {scalar_t__ class; int type; scalar_t__ length; TYPE_1__ by_type; } ;
struct el_common {int dummy; } ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (struct el_subpacket*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct el_common*,int) ;

__attribute__((used)) static struct el_subpacket *
FUNC_3(struct el_subpacket *VAR_2)
{
 int VAR_3;

 if (VAR_2->class != VAR_0) {
  FUNC_1("%s  ** Unexpected header CLASS %d TYPE %d, aborting\n",
         VAR_1,
         VAR_2->class, VAR_2->type);
  return ((void*)0);
 }

 switch(VAR_2->type) {
 case 130:
 case 128:
 case 132:
 case 131:
 case 129:
  FUNC_1("%s  ** Occurred on CPU %d:\n",
         VAR_1,
         (int)VAR_2->by_type.regatta_frame.cpuid);
  VAR_3 = FUNC_2((struct el_common *)
   VAR_2->by_type.regatta_frame.data_start, 1);
  break;
 default:
  FUNC_1("%s  ** REGATTA TYPE %d SUBPACKET\n",
         VAR_1, VAR_2->type);
  FUNC_0(VAR_2);
  break;
 }


 return (struct el_subpacket *)((unsigned long)VAR_2 + VAR_2->length);
}
