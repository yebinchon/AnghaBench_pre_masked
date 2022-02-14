
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct slic_upr {struct slic_upr* next; void* upr_buffer_h; void* upr_data_h; void* upr_buffer; void* upr_data; void* upr_request; int adapter; } ;
struct adapter {struct slic_upr* upr_list; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct slic_upr* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct adapter *VAR_3,
      u32 VAR_4,
      u32 VAR_5,
      u32 VAR_6,
      u32 VAR_7, u32 VAR_8)
{
 struct slic_upr *VAR_9;
 struct slic_upr *VAR_10;

 VAR_9 = FUNC_0(sizeof(struct slic_upr), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->adapter = VAR_3->port;
 VAR_9->upr_request = VAR_4;
 VAR_9->upr_data = VAR_5;
 VAR_9->upr_buffer = VAR_7;
 VAR_9->upr_data_h = VAR_6;
 VAR_9->upr_buffer_h = VAR_8;
 VAR_9->next = ((void*)0);
 if (VAR_3->upr_list) {
  VAR_10 = VAR_3->upr_list;

  while (VAR_10->next)
   VAR_10 = VAR_10->next;
  VAR_10->next = VAR_9;
 } else {
  VAR_3->upr_list = VAR_9;
 }
 return VAR_2;
}
