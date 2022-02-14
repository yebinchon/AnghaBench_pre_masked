
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct esp {TYPE_1__* host; struct completion* eh_reset; int flags; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct esp*,int ) ;
 struct esp* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct completion*,int) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_6)
{
 struct esp *VAR_7 = FUNC_2(VAR_6->device->host);
 struct completion VAR_8;
 unsigned long VAR_9;

 FUNC_0(&VAR_8);

 FUNC_3(VAR_7->host->host_lock, VAR_9);

 VAR_7->eh_reset = &VAR_8;






 VAR_7->flags |= VAR_1;
 FUNC_1(VAR_7, VAR_0);

 FUNC_4(VAR_7->host->host_lock, VAR_9);

 FUNC_5(VAR_5);

 if (!FUNC_6(&VAR_8, 5 * VAR_3)) {
  FUNC_3(VAR_7->host->host_lock, VAR_9);
  VAR_7->eh_reset = ((void*)0);
  FUNC_4(VAR_7->host->host_lock, VAR_9);

  return VAR_2;
 }

 return VAR_4;
}
