
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_bd {scalar_t__ buffer_length; } ;
struct TYPE_2__ {struct iscsi_bd* bd_tbl; } ;
struct bnx2i_cmd {TYPE_1__ io_tbl; } ;



__attribute__((used)) static void FUNC_0(struct bnx2i_cmd *VAR_0, u32 VAR_1,
           u32 *VAR_2, u32 *VAR_3)
{
 struct iscsi_bd *VAR_4 = VAR_0->io_tbl.bd_tbl;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;

 if (VAR_1) {
  while (VAR_1 >= (VAR_5 + VAR_4->buffer_length)) {
   VAR_5 += VAR_4->buffer_length;
   VAR_6++;
   VAR_4++;
  }
 }

 *VAR_2 = VAR_1 - VAR_5;
 *VAR_3 = VAR_6;
}
