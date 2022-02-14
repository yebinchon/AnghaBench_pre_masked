
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_master {int bus_num; } ;
struct TYPE_2__ {int modulctrl; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct spi_master*,int ) ;
 int FUNC_2 (struct spi_master*,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_3(struct spi_master *VAR_5)
{
 u32 VAR_6;




 VAR_6 = FUNC_1(VAR_5, VAR_0);
 FUNC_0(VAR_6, VAR_3, 0);
 FUNC_0(VAR_6, VAR_1, 0);
 FUNC_0(VAR_6, VAR_2, 1);
 FUNC_2(VAR_5, VAR_0, VAR_6);

 VAR_4[VAR_5->bus_num - 1].modulctrl = VAR_6;
}
