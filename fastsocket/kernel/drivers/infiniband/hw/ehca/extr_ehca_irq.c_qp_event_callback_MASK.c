
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ehca_shca {int dummy; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_qp {scalar_t__ ext_type; int wait_completion; int nr_events; TYPE_1__ ipz_qp_handle; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehca_shca*,struct ehca_qp*,int) ;
 int FUNC_4 (struct ehca_shca*,struct ehca_qp*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ehca_qp* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ehca_shca *VAR_7, u64 VAR_8,
         enum ib_event_type VAR_9, int VAR_10)
{
 struct ehca_qp *VAR_11;
 u32 VAR_12 = FUNC_0(VAR_0, VAR_8);

 FUNC_6(&VAR_6);
 VAR_11 = FUNC_5(&VAR_5, VAR_12);
 if (VAR_11)
  FUNC_2(&VAR_11->nr_events);
 FUNC_7(&VAR_6);

 if (!VAR_11)
  return;

 if (VAR_10)
  FUNC_4(VAR_7, VAR_11, VAR_11->ipz_qp_handle.handle);

 FUNC_3(VAR_7, VAR_11, VAR_10 && VAR_11->ext_type == VAR_1 ?
     VAR_4 : VAR_9);






 if (VAR_10 && VAR_11->ext_type == VAR_2)
  FUNC_3(VAR_7, VAR_11, VAR_3);

 if (FUNC_1(&VAR_11->nr_events))
  FUNC_8(&VAR_11->wait_completion);
 return;
}
