
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*,void*) ;
 int VAR_3 ;
 void* FUNC_3 (struct qla_hw_data*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct qla_hw_data *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 uint32_t VAR_8 = 0;
 scsi_qla_host_t *VAR_9 = FUNC_1(VAR_5->pdev);

 while (!VAR_6) {

  VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_0));
  if (VAR_6 == 1)
   break;
  if (VAR_7 >= VAR_4) {
   VAR_8 = FUNC_3(VAR_5, VAR_1);
   FUNC_2(VAR_3, VAR_9, 0xb085,
       "Failed to acquire rom lock, acquired by %d.\n",
       VAR_8);
   return -1;
  }
  VAR_7++;
 }
 FUNC_4(VAR_5, VAR_1, VAR_2);
 return 0;
}
