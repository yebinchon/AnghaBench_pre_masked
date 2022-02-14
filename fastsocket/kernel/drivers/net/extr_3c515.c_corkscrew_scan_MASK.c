
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dev; } ;
struct net_device {int name; } ;
struct corkscrew_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ driver_data; int function; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (struct net_device*,int,struct pnp_dev*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct pnp_dev*) ;
 scalar_t__ FUNC_11 (struct pnp_dev*) ;
 int FUNC_12 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_13 (int *,scalar_t__,int ,struct pnp_dev*) ;
 int FUNC_14 (struct pnp_dev*,int ) ;
 int FUNC_15 (struct pnp_dev*,int ) ;
 int FUNC_16 (struct pnp_dev*,int ) ;
 int FUNC_17 (struct pnp_dev*,int ) ;
 int FUNC_18 (char*,char*,int,int) ;
 int FUNC_19 (char*,int ,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,char*,int) ;

__attribute__((used)) static struct net_device *FUNC_22(int VAR_4)
{
 struct net_device *VAR_5;
 static int VAR_6 = 0;
 static int VAR_7;
 int VAR_8;





 VAR_5 = FUNC_2(sizeof(struct corkscrew_private));
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (VAR_4 >= 0) {
  FUNC_21(VAR_5->name, "eth%d", VAR_4);
  FUNC_9(VAR_5);
 }
 for (VAR_7 = 0x100; VAR_7 < 0x400; VAR_7 += 0x20) {
  if (!FUNC_3(VAR_7))
   continue;

  FUNC_19("3c515 Resource configuration register %#4.4x, DCR %4.4x.\n",
       FUNC_7(VAR_7 + 0x2002), FUNC_8(VAR_7 + 0x2000));
  VAR_8 = FUNC_5(VAR_5, VAR_7, ((void*)0), VAR_6++);
  if (!VAR_8)
   return VAR_5;
  FUNC_4(VAR_5);
 }
 FUNC_6(VAR_5);
 return ((void*)0);
}
