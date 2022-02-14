
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {scalar_t__ driver_data; } ;
struct eisa_device {int base_addr; TYPE_1__ id; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ioport; } ;
struct ahc_softc {TYPE_2__ bsh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ahc_softc* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int *) ;
 int FUNC_3 (struct ahc_softc*,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct device*,struct ahc_softc*) ;
 char* FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 struct eisa_device* FUNC_9 (struct device*) ;

__attribute__((used)) static int
FUNC_10(struct device *VAR_6)
{
 struct eisa_device *VAR_7 = FUNC_9(VAR_6);
 u_int VAR_8 = VAR_7->base_addr+VAR_0;
 struct ahc_softc *VAR_9;
 char VAR_10[80];
 char *VAR_11;
 int VAR_12;

 FUNC_6(VAR_10, "ahc_eisa:%d", VAR_8 >> 12);
 VAR_11 = FUNC_5(FUNC_8(VAR_10) + 1, VAR_2, VAR_3);
 if (VAR_11 == ((void*)0))
  return (VAR_1);
 FUNC_7(VAR_11, VAR_10);
 VAR_9 = FUNC_0(&VAR_5, VAR_11);
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_12 = FUNC_3(VAR_9, VAR_4 + VAR_7->id.driver_data,
          VAR_8);
 if (VAR_12 != 0) {
  VAR_9->bsh.ioport = 0;
  FUNC_1(VAR_9);
  return (VAR_12);
 }

  FUNC_4(VAR_6, VAR_9);

 VAR_12 = FUNC_2(VAR_9, &VAR_5);
 return (VAR_12);
}
