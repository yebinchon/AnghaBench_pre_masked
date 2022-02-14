
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ehca_shca {int dummy; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_cq {int wait_completion; int nr_events; TYPE_1__ ipz_cq_handle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ehca_shca*,struct ehca_cq*,int ) ;
 struct ehca_cq* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ehca_shca *VAR_3,
         u64 VAR_4)
{
 struct ehca_cq *VAR_5;
 u32 VAR_6 = FUNC_0(VAR_0, VAR_4);

 FUNC_5(&VAR_2);
 VAR_5 = FUNC_4(&VAR_1, VAR_6);
 if (VAR_5)
  FUNC_2(&VAR_5->nr_events);
 FUNC_6(&VAR_2);

 if (!VAR_5)
  return;

 FUNC_3(VAR_3, VAR_5, VAR_5->ipz_cq_handle.handle);

 if (FUNC_1(&VAR_5->nr_events))
  FUNC_7(&VAR_5->wait_completion);

 return;
}
