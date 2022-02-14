
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct scu_task_context {void* task_type; int transfer_length_bytes; } ;
struct isci_request {struct scu_task_context* tc; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct isci_request*) ;
 int FUNC_1 (struct isci_request*,struct scu_task_context*) ;

__attribute__((used)) static void FUNC_2(struct isci_request *VAR_3,
           u8 VAR_4,
           u32 VAR_5,
           enum dma_data_direction VAR_6)
{
 struct scu_task_context *VAR_7 = VAR_3->tc;


 FUNC_1(VAR_3, VAR_7);


 FUNC_0(VAR_3);


 VAR_7->transfer_length_bytes = VAR_5;

 if (VAR_6 == VAR_0) {






  VAR_7->task_type = VAR_4 + (VAR_2
         - VAR_1);
 } else {



  VAR_7->task_type = VAR_4;
 }
}
