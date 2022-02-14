
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct sas_rphy {int host_no; struct request_queue* q; struct device shost_gendev; struct device dev; TYPE_2__* hostt; int transportt; } ;
struct request_queue {struct sas_rphy* queuedata; } ;
struct Scsi_Host {int host_no; struct request_queue* q; struct device shost_gendev; struct device dev; TYPE_2__* hostt; int transportt; } ;
typedef int namebuf ;
struct TYPE_8__ {struct request_queue* q; } ;
struct TYPE_7__ {TYPE_1__* f; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int smp_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 struct request_queue* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct request_queue*,struct device*,char const*,void (*) (struct device*)) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,struct request_queue*) ;
 void FUNC_6 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,int,char*,int) ;
 TYPE_4__* FUNC_8 (struct sas_rphy*) ;
 TYPE_3__* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct Scsi_Host *VAR_4, struct sas_rphy *VAR_5)
{
 struct request_queue *VAR_6;
 int VAR_7;
 struct device *VAR_8;
 char VAR_9[20];
 const char *VAR_10;
 void (*VAR_11)(struct device *);

 if (!FUNC_9(VAR_4->transportt)->f->smp_handler) {
  FUNC_4("%s can't handle SMP requests\n", VAR_4->hostt->name);
  return 0;
 }

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_3, ((void*)0));
  VAR_8 = &VAR_5->dev;
  VAR_10 = FUNC_3(VAR_8);
  VAR_11 = ((void*)0);
 } else {
  VAR_6 = FUNC_1(VAR_2, ((void*)0));
  VAR_8 = &VAR_4->shost_gendev;
  FUNC_7(VAR_9, sizeof(VAR_9),
    "sas_host%d", VAR_4->host_no);
  VAR_10 = VAR_9;
  VAR_11 = FUNC_6;
 }
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_8, VAR_10, VAR_11);
 if (VAR_7) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 if (VAR_5)
  VAR_5->q = VAR_6;
 else
  FUNC_8(VAR_4)->q = VAR_6;

 if (VAR_5)
  VAR_6->queuedata = VAR_5;
 else
  VAR_6->queuedata = VAR_4;

 FUNC_5(VAR_1, VAR_6);
 return 0;
}
