
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int pending_bh; int device_name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_5, VAR_4);

 FUNC_0(("%s isr_tdma status=%08x\n", VAR_5->device_name, VAR_6));
 FUNC_2(VAR_5, VAR_4, VAR_6);

 if (VAR_6 & (VAR_3 + VAR_2 + VAR_1)) {


  VAR_5->pending_bh |= VAR_0;
 }
}
