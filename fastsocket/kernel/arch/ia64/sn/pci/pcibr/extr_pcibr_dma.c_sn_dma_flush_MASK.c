
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct sn_flush_nasid_entry {scalar_t__* iio_itte; struct sn_flush_device_kernel** widget_p; } ;
struct sn_flush_device_kernel {int sfdl_flush_lock; struct sn_flush_device_common* common; } ;
struct sn_flush_device_common {int* sfdl_flush_addr; scalar_t__ sfdl_force_int_addr; scalar_t__ sfdl_slot; int sfdl_pcibus_info; TYPE_1__* sfdl_bar_list; } ;
struct hubdev_info {struct sn_flush_nasid_entry hdi_flush_nasid_list; } ;
typedef int nasid_t ;
struct TYPE_4__ {struct hubdev_info* pdinfo; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

void FUNC_20(u64 VAR_5)
{
 nasid_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;
 u64 VAR_12;
 struct hubdev_info *VAR_13;
 struct sn_flush_device_kernel *VAR_14;
 struct sn_flush_device_common *VAR_15;
 struct sn_flush_nasid_entry *VAR_16;

 if (!VAR_4)
  return;

 VAR_6 = FUNC_4(VAR_5);
 if (-1 == FUNC_16(VAR_6))
  return;

 VAR_13 = (FUNC_5(FUNC_16(VAR_6)))->pdinfo;

 FUNC_0(!VAR_13);

 VAR_16 = &VAR_13->hdi_flush_nasid_list;
 if (VAR_16->widget_p == ((void*)0))
  return;

 VAR_7 = (VAR_6 & 1);
 if (VAR_7) {
  int VAR_17;

  if (FUNC_8(VAR_5))
   VAR_17 = 0;
  else if (FUNC_7(VAR_5))
   VAR_17 = FUNC_7(VAR_5);
  else
   VAR_17 = -1;

  if (VAR_17 >= 0) {
   VAR_12 = VAR_16->iio_itte[VAR_17];
   if (! FUNC_10(VAR_12))
    return;
   VAR_8 = FUNC_11(VAR_12);
  } else
   VAR_8 = FUNC_12(VAR_5);
 } else {
  if (FUNC_1(VAR_5)) {
   VAR_12 = VAR_16->iio_itte[FUNC_1(VAR_5)];
   VAR_8 = FUNC_3(VAR_12);
  } else
   VAR_8 = FUNC_6(VAR_5);
 }
 if (VAR_16->widget_p[VAR_8] == ((void*)0))
  return;
 VAR_14 = &VAR_16->widget_p[VAR_8][0];


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++,VAR_14++) {
  VAR_15 = VAR_14->common;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (VAR_15->sfdl_bar_list[VAR_10].start == 0)
    break;
   if (VAR_5 >= VAR_15->sfdl_bar_list[VAR_10].start
       && VAR_5 <= VAR_15->sfdl_bar_list[VAR_10].end)
    break;
  }
  if (VAR_10 < VAR_1 && VAR_15->sfdl_bar_list[VAR_10].start != 0)
   break;
 }


 if (VAR_9 == VAR_0)
  return;






 if (VAR_7) {






  u32 VAR_18 = FUNC_2(FUNC_9(VAR_6, VAR_3));
  u32 VAR_19 = FUNC_13(VAR_18);


  if ((1 << FUNC_14(VAR_19)) & VAR_2) {
   return;
  } else {
   FUNC_17(VAR_15->sfdl_pcibus_info,
          (VAR_15->sfdl_slot - 1));
  }
 } else {
  FUNC_18(&VAR_14->sfdl_flush_lock, VAR_11);
  *VAR_15->sfdl_flush_addr = 0;


  *(volatile u32 *)(VAR_15->sfdl_force_int_addr) = 1;


  while (*(VAR_15->sfdl_flush_addr) != 0x10f)
   FUNC_15();


  FUNC_19(&VAR_14->sfdl_flush_lock, VAR_11);
 }
 return;
}
