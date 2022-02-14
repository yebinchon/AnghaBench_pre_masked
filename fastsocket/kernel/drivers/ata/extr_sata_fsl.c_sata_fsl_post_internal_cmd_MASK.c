
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int flags; int err_mask; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ata_queued_cmd *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  VAR_2->err_mask |= VAR_0;

 if (VAR_2->err_mask) {


 }
}
