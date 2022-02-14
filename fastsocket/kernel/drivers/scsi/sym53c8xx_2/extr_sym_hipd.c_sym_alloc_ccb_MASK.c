
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sym_hcb {scalar_t__ actccbs; int dummy_ccbq; int free_ccbq; struct sym_ccb** ccbh; } ;
struct TYPE_7__ {void* addr; } ;
struct TYPE_5__ {void* restart; void* start; } ;
struct TYPE_6__ {TYPE_1__ go; } ;
struct TYPE_8__ {TYPE_3__ smsg_ext; TYPE_2__ head; } ;
struct sym_ccb {int link2_ccbq; int link_ccbq; TYPE_4__ phys; struct sym_ccb* link_ccbh; int ccb_ba; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_4 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct sym_ccb* FUNC_5 (int,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct sym_ccb*,int,char*) ;
 int FUNC_8 (struct sym_ccb*) ;

__attribute__((used)) static struct sym_ccb *FUNC_9(struct sym_hcb *VAR_4)
{
 struct sym_ccb *VAR_5 = ((void*)0);
 int VAR_6;





 if (VAR_4->actccbs >= VAR_0)
  return ((void*)0);




 VAR_5 = FUNC_5(sizeof(struct sym_ccb), "CCB");
 if (!VAR_5)
  goto out_free;




 VAR_4->actccbs++;




 VAR_5->ccb_ba = FUNC_8(VAR_5);




 VAR_6 = FUNC_0(VAR_5->ccb_ba);
 VAR_5->link_ccbh = VAR_4->ccbh[VAR_6];
 VAR_4->ccbh[VAR_6] = VAR_5;




 VAR_5->phys.head.go.start = FUNC_4(FUNC_2(VAR_4, VAR_2));
 VAR_5->phys.head.go.restart = FUNC_4(FUNC_3(VAR_4, VAR_1));




 VAR_5->phys.smsg_ext.addr = FUNC_4(FUNC_1(VAR_4, VAR_3[2]));




 FUNC_6(&VAR_5->link_ccbq, &VAR_4->free_ccbq);







 return VAR_5;
out_free:
 if (VAR_5)
  FUNC_7(VAR_5, sizeof(*VAR_5), "CCB");
 return ((void*)0);
}
