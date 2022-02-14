
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnet_packet_task {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct fwnet_packet_task*) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1, int VAR_2,
     void *VAR_3, size_t VAR_4, void *VAR_5)
{
 struct fwnet_packet_task *VAR_6;

 VAR_6 = VAR_5;

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_6);
 else
  FUNC_0("fwnet_write_complete: failed: %x\n", VAR_2);

}
