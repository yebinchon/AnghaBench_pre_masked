
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int rx_restart; int pending_bh; int device_name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_4, VAR_3);

 FUNC_0(("%s isr_rdma status=%08x\n", VAR_4->device_name, VAR_5));
 FUNC_2(VAR_4, VAR_3, VAR_5);

 if (VAR_5 & (VAR_2 + VAR_1)) {
  FUNC_0(("%s isr_rdma rx_restart=1\n", VAR_4->device_name));
  VAR_4->rx_restart = 1;
 }
 VAR_4->pending_bh |= VAR_0;
}
