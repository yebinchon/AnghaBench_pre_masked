
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int beb_rsvd_level; int good_peb_count; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct ubi_device *VAR_2)
{
 VAR_2->beb_rsvd_level = VAR_2->good_peb_count/100;
 VAR_2->beb_rsvd_level *= VAR_0;
 if (VAR_2->beb_rsvd_level < VAR_1)
  VAR_2->beb_rsvd_level = VAR_1;
}
