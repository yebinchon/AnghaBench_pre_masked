
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ahc_softc {int seltime; int seltime_b; int flags; TYPE_1__* platform_data; } ;
struct ahc_platform_data {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int
FUNC_3(struct ahc_softc *VAR_7, void *VAR_8)
{

 VAR_7->platform_data =
     FUNC_1(sizeof(struct ahc_platform_data), VAR_3, VAR_4);
 if (VAR_7->platform_data == ((void*)0))
  return (VAR_2);
 FUNC_2(VAR_7->platform_data, 0, sizeof(struct ahc_platform_data));
 VAR_7->platform_data->irq = VAR_1;
 FUNC_0(VAR_7);
 VAR_7->seltime = (VAR_6 & 0x3) << 4;
 VAR_7->seltime_b = (VAR_6 & 0x3) << 4;
 if (VAR_5 == 0)
  VAR_7->flags |= VAR_0;

 return (0);
}
