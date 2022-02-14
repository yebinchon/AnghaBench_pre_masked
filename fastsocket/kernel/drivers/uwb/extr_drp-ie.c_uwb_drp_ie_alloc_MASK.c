
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int element_id; } ;
struct uwb_ie_drp {TYPE_1__ hdr; } ;
struct uwb_drp_alloc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uwb_ie_drp* FUNC_0 (int,int ) ;

__attribute__((used)) static struct uwb_ie_drp *FUNC_1(void)
{
 struct uwb_ie_drp *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct uwb_ie_drp) +
   VAR_2 * sizeof(struct uwb_drp_alloc),
   VAR_0);
 if (VAR_3) {
  VAR_3->hdr.element_id = VAR_1;
 }
 return VAR_3;
}
