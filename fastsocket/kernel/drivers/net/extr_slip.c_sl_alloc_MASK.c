
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct slip {TYPE_1__ outfill_timer; TYPE_1__ keepalive_timer; int mode; int lock; struct net_device* dev; int magic; int flags; } ;
struct net_device {int base_addr; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct slip* FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device** VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static struct slip *FUNC_7(dev_t VAR_9)
{
 int VAR_10;
 struct net_device *VAR_11 = ((void*)0);
 struct slip *VAR_12;

 if (VAR_7 == ((void*)0))
  return ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_11 = VAR_7[VAR_10];
  if (VAR_11 == ((void*)0))
   break;
 }

 if (VAR_10 >= VAR_8)
  return ((void*)0);

 if (VAR_11) {
  VAR_12 = FUNC_2(VAR_11);
  if (FUNC_5(VAR_1, &VAR_12->flags)) {
   FUNC_6(VAR_11);
   VAR_11 = ((void*)0);
   VAR_7[VAR_10] = ((void*)0);
  }
 }

 if (!VAR_11) {
  char VAR_13[VAR_0];
  FUNC_4(VAR_13, "sl%d", VAR_10);

  VAR_11 = FUNC_0(sizeof(*VAR_12), VAR_13, VAR_6);
  if (!VAR_11)
   return ((void*)0);
  VAR_11->base_addr = VAR_10;
 }

 VAR_12 = FUNC_2(VAR_11);


 VAR_12->magic = VAR_2;
 VAR_12->dev = VAR_11;
 FUNC_3(&VAR_12->lock);
 VAR_12->mode = VAR_3;
 VAR_7[VAR_10] = VAR_11;
 return VAR_12;
}
