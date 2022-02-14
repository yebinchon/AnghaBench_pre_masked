
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int ipath_sdma_abort_task; int ipath_sdma_status; int ipath_sdma_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct ipath_devdata*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ipath_devdata *VAR_5, u64 VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 if ((VAR_6 & VAR_1) &&
     !FUNC_7(VAR_4, &VAR_5->ipath_sdma_status))
  FUNC_3(VAR_5);

 if (VAR_6 & VAR_0) {
  VAR_8 = FUNC_7(VAR_2,
   &VAR_5->ipath_sdma_status);
  FUNC_2("%s SDmaDisabled intr\n",
   VAR_8 ? "expected" : "unexpected");
  FUNC_4(&VAR_5->ipath_sdma_lock, VAR_7);
  FUNC_0(VAR_3, &VAR_5->ipath_sdma_status);
  FUNC_5(&VAR_5->ipath_sdma_lock, VAR_7);
  if (!VAR_8)
   FUNC_1(VAR_5, 1);
  if (!FUNC_7(VAR_4, &VAR_5->ipath_sdma_status))
   FUNC_6(&VAR_5->ipath_sdma_abort_task);
 }
}
