
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_5__ {int* command_packet_phys; scalar_t__ posted_request_count; scalar_t__ max_posted_request_count; int * state; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(TW_Device_Extension *VAR_3, int VAR_4)
{
 dma_addr_t VAR_5;

 VAR_5 = VAR_3->command_packet_phys[VAR_4];
 VAR_5 += VAR_1;


 FUNC_2((u32)((u64)VAR_5 >> 32), FUNC_0(VAR_3));

 FUNC_2((u32)(VAR_5 | VAR_0), FUNC_1(VAR_3));

 VAR_3->state[VAR_4] = VAR_2;
 VAR_3->posted_request_count++;
 if (VAR_3->posted_request_count > VAR_3->max_posted_request_count)
  VAR_3->max_posted_request_count = VAR_3->posted_request_count;

 return 0;
}
