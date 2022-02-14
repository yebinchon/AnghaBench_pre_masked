
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pbt; int blk0_len; int version; int len; } ;
struct ipl_parameter_block {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ipl_parameter_block *VAR_4)
{
 VAR_4->hdr.len = VAR_2;
 VAR_4->hdr.version = VAR_3;
 VAR_4->hdr.blk0_len = VAR_1;
 VAR_4->hdr.pbt = VAR_0;
}
