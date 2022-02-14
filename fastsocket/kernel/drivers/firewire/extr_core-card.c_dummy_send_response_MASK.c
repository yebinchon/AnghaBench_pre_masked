
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_packet {int (* callback ) (struct fw_packet*,struct fw_card*,int ) ;} ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_packet*,struct fw_card*,int ) ;

__attribute__((used)) static void FUNC_1(struct fw_card *VAR_1, struct fw_packet *VAR_2)
{
 VAR_2->callback(VAR_2, VAR_1, -VAR_0);
}
