
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ahd_softc {int seltime; TYPE_1__* platform_data; } ;
struct ahd_platform_data {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int
FUNC_3(struct ahd_softc *VAR_5, void *VAR_6)
{
 VAR_5->platform_data =
     FUNC_1(sizeof(struct ahd_platform_data), VAR_2, VAR_3);
 if (VAR_5->platform_data == ((void*)0))
  return (VAR_1);
 FUNC_2(VAR_5->platform_data, 0, sizeof(struct ahd_platform_data));
 VAR_5->platform_data->irq = VAR_0;
 FUNC_0(VAR_5);
 VAR_5->seltime = (VAR_4 & 0x3) << 4;
 return (0);
}
