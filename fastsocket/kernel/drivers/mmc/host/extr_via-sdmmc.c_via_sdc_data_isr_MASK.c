
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct via_crdr_mmc_host {TYPE_1__* data; } ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct via_crdr_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct via_crdr_mmc_host *VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_6 == 0);

 if (VAR_6 & VAR_2)
  VAR_5->data->error = -VAR_1;
 else if (VAR_6 & (VAR_3 | VAR_4))
  VAR_5->data->error = -VAR_0;

 FUNC_1(VAR_5);
}
