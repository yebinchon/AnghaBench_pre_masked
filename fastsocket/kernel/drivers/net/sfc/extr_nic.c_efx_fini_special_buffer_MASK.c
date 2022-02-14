
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_special_buffer {unsigned int index; int entries; } ;
struct efx_nic {int net_dev; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned int,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct efx_nic *VAR_6, struct efx_special_buffer *VAR_7)
{
 efx_oword_t VAR_8;
 unsigned int VAR_9 = VAR_7->index;
 unsigned int VAR_10 = (VAR_7->index + VAR_7->entries - 1);

 if (!VAR_7->entries)
  return;

 FUNC_2(VAR_6, VAR_5, VAR_6->net_dev, "unmapping special buffers %d-%d\n",
    VAR_7->index, VAR_7->index + VAR_7->entries - 1);

 FUNC_0(VAR_8,
        VAR_3, 0,
        VAR_0, 1,
        VAR_1, VAR_10,
        VAR_2, VAR_9);
 FUNC_1(VAR_6, &VAR_8, VAR_4);
}
