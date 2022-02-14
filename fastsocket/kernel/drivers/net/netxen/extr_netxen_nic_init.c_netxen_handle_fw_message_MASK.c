
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct status_desc {int * status_desc_data; } ;
struct nx_host_sds_ring {int adapter; int num_desc; struct status_desc* desc_head; } ;
struct TYPE_3__ {int * body; void** words; } ;
typedef TYPE_1__ nx_fw_msg_t ;



 int FUNC_0 (int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, int VAR_1,
  struct nx_host_sds_ring *VAR_2)
{
 nx_fw_msg_t VAR_3;
 struct status_desc *VAR_4;
 int VAR_5 = 0, VAR_6;

 while (VAR_0 > 0 && VAR_5 < 8) {
  VAR_4 = &VAR_2->desc_head[VAR_1];
  VAR_3.words[VAR_5++] = FUNC_1(VAR_4->status_desc_data[0]);
  VAR_3.words[VAR_5++] = FUNC_1(VAR_4->status_desc_data[1]);

  VAR_1 = FUNC_0(VAR_1, VAR_2->num_desc);
  VAR_0--;
 }

 VAR_6 = FUNC_2(VAR_3.body[0]);
 switch (VAR_6) {
 case 128:
  FUNC_3(VAR_2->adapter, &VAR_3);
  break;
 default:
  break;
 }
}
