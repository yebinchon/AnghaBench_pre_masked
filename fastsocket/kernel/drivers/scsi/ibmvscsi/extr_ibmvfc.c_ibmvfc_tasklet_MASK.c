
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct ibmvfc_host {TYPE_1__* host; int dev; } ;
struct ibmvfc_crq {scalar_t__ valid; } ;
struct ibmvfc_async_crq {scalar_t__ valid; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (struct ibmvfc_async_crq*,struct ibmvfc_host*) ;
 int FUNC_1 (struct ibmvfc_crq*,struct ibmvfc_host*) ;
 struct ibmvfc_async_crq* FUNC_2 (struct ibmvfc_host*) ;
 struct ibmvfc_crq* FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 struct vio_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct vio_dev*) ;
 int FUNC_9 (struct vio_dev*) ;

__attribute__((used)) static void FUNC_10(void *VAR_0)
{
 struct ibmvfc_host *VAR_1 = VAR_0;
 struct vio_dev *VAR_2 = FUNC_7(VAR_1->dev);
 struct ibmvfc_crq *VAR_3;
 struct ibmvfc_async_crq *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_5(VAR_1->host->host_lock, VAR_5);
 while (!VAR_6) {

  while ((VAR_4 = FUNC_2(VAR_1)) != ((void*)0)) {
   FUNC_0(VAR_4, VAR_1);
   FUNC_4();
   VAR_4->valid = 0;
  }


  while ((VAR_3 = FUNC_3(VAR_1)) != ((void*)0)) {
   FUNC_1(VAR_3, VAR_1);
   FUNC_4();
   VAR_3->valid = 0;
  }

  FUNC_9(VAR_2);
  if ((VAR_4 = FUNC_2(VAR_1)) != ((void*)0)) {
   FUNC_8(VAR_2);
   FUNC_0(VAR_4, VAR_1);
   FUNC_4();
   VAR_4->valid = 0;
  } else if ((VAR_3 = FUNC_3(VAR_1)) != ((void*)0)) {
   FUNC_8(VAR_2);
   FUNC_1(VAR_3, VAR_1);
   FUNC_4();
   VAR_3->valid = 0;
  } else
   VAR_6 = 1;
 }

 FUNC_6(VAR_1->host->host_lock, VAR_5);
}
