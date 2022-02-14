
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int generation; unsigned long* gen_timestamp; } ;
struct hpsb_host {int delayed_reset; TYPE_1__ csr; int update_config_rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct hpsb_host *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_4->csr.generation + 1;

 if (!VAR_4->update_config_rom)
  return -VAR_0;

 if (VAR_6 > 0xf)
  VAR_6 = 2;



 FUNC_1(&VAR_4->delayed_reset);



 if (FUNC_3(VAR_3, VAR_4->csr.gen_timestamp[VAR_6] + 60 * VAR_1))


  VAR_5 =
   (60 * VAR_1) + VAR_4->csr.gen_timestamp[VAR_6] - VAR_3;
 else


  VAR_5 = VAR_1;

 FUNC_0(&VAR_4->delayed_reset, VAR_2);
 FUNC_2(&VAR_4->delayed_reset, VAR_5);

 return 0;
}
