
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ehca_shca {int ib_device; } ;
struct ehca_eqe {int entry; } ;
struct ehca_cq {int wait_completion; int nr_events; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehca_cq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 struct ehca_cq* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct ehca_shca*,int ) ;
 int FUNC_8 (struct ehca_cq*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ehca_cq*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static inline void FUNC_13(struct ehca_shca *VAR_5, struct ehca_eqe *VAR_6)
{
 u64 VAR_7;
 u32 VAR_8;
 struct ehca_cq *VAR_9;

 VAR_7 = VAR_6->entry;
 FUNC_4(&VAR_5->ib_device, "eqe_value=%llx", VAR_7);
 if (FUNC_0(VAR_0, VAR_7)) {
  FUNC_4(&VAR_5->ib_device, "Got completion event");
  VAR_8 = FUNC_0(VAR_1, VAR_7);
  FUNC_9(&VAR_3);
  VAR_9 = FUNC_6(&VAR_2, VAR_8);
  if (VAR_9)
   FUNC_2(&VAR_9->nr_events);
  FUNC_10(&VAR_3);
  if (VAR_9 == ((void*)0)) {
   FUNC_5(&VAR_5->ib_device,
     "Invalid eqe for non-existing cq token=%x",
     VAR_8);
   return;
  }
  FUNC_11(VAR_9);
  if (VAR_4)
   FUNC_8(VAR_9);
  else {
   FUNC_3(VAR_9);
   if (FUNC_1(&VAR_9->nr_events))
    FUNC_12(&VAR_9->wait_completion);
  }
 } else {
  FUNC_4(&VAR_5->ib_device, "Got non completion event");
  FUNC_7(VAR_5, VAR_7);
 }
}
