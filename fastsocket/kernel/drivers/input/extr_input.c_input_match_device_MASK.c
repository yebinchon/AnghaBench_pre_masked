
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_device_id {int flags; scalar_t__ bustype; scalar_t__ vendor; scalar_t__ product; scalar_t__ version; scalar_t__ driver_info; } ;
struct TYPE_2__ {scalar_t__ bustype; scalar_t__ vendor; scalar_t__ product; scalar_t__ version; } ;
struct input_dev {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static const struct input_device_id *FUNC_1(const struct input_device_id *VAR_22,
       struct input_dev *VAR_23)
{
 int VAR_24;

 for (; VAR_22->flags || VAR_22->driver_info; VAR_22++) {

  if (VAR_22->flags & VAR_3)
   if (VAR_22->bustype != VAR_23->id.bustype)
    continue;

  if (VAR_22->flags & VAR_5)
   if (VAR_22->vendor != VAR_23->id.vendor)
    continue;

  if (VAR_22->flags & VAR_4)
   if (VAR_22->product != VAR_23->id.product)
    continue;

  if (VAR_22->flags & VAR_6)
   if (VAR_22->version != VAR_23->id.version)
    continue;

  FUNC_0(VAR_14, VAR_1);
  FUNC_0(VAR_16, VAR_7);
  FUNC_0(VAR_19, VAR_10);
  FUNC_0(VAR_13, VAR_0);
  FUNC_0(VAR_18, VAR_9);
  FUNC_0(VAR_17, VAR_8);
  FUNC_0(VAR_20, VAR_11);
  FUNC_0(VAR_15, VAR_2);
  FUNC_0(VAR_21, VAR_12);

  return VAR_22;
 }

 return ((void*)0);
}
