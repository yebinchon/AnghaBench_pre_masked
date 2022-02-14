
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int scsi_host; int status; int dbf; int erp_ready_head; int erp_ready_wq; int erp_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct zfcp_erp_action*) ;
 int FUNC_10 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_11 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_12(struct zfcp_erp_action *VAR_6)
{
 int VAR_7;
 int VAR_8 = 1;
 struct zfcp_adapter *VAR_9 = VAR_6->adapter;

 FUNC_0(VAR_4, &VAR_9->status);

 for (VAR_7 = 7; VAR_7; VAR_7--) {
  FUNC_0(VAR_3,
      &VAR_9->status);
  FUNC_6(&VAR_9->erp_lock);
  FUNC_9(VAR_6);
  FUNC_7(&VAR_9->erp_lock);
  if (FUNC_11(VAR_6)) {
   FUNC_0(VAR_3,
       &VAR_9->status);
   return VAR_1;
  }

  FUNC_8("erasfx1", VAR_9->dbf);
  FUNC_5(VAR_9->erp_ready_wq,
      !FUNC_3(&VAR_9->erp_ready_head));
  FUNC_8("erasfx2", VAR_9->dbf);
  if (VAR_6->status & VAR_5)
   break;

  if (!(FUNC_1(&VAR_9->status) &
        VAR_3))
   break;

  FUNC_4(VAR_8);
  VAR_8 *= 2;
 }

 FUNC_0(VAR_3,
     &VAR_9->status);

 if (!(FUNC_1(&VAR_9->status) & VAR_4))
  return VAR_1;

 if (FUNC_2(VAR_9->scsi_host) == VAR_0)
  FUNC_10(VAR_9);

 return VAR_2;
}
