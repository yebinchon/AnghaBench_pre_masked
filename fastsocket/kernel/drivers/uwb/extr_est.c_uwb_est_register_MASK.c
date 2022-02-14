
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct uwb_est_entry {int dummy; } ;
struct TYPE_4__ {int type_event_high; scalar_t__ vendor; scalar_t__ product; size_t entries; struct uwb_est_entry const* entry; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(u8 VAR_4, u8 VAR_5, u16 VAR_6, u16 VAR_7,
       const struct uwb_est_entry *VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 unsigned VAR_11;
 u16 VAR_12;
 int VAR_13 = 0;

 FUNC_2(&VAR_1, VAR_10);
 if (VAR_3 == VAR_2) {
  VAR_13 = FUNC_1();
  if (VAR_13 < 0)
   goto out;
 }

 VAR_12 = VAR_4 << 8 | VAR_5;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  if (VAR_0[VAR_11].type_event_high < VAR_4
      && VAR_0[VAR_11].vendor < VAR_6
      && VAR_0[VAR_11].product < VAR_7)
   break;


 if (VAR_11 < VAR_3)
  FUNC_0(&VAR_0[VAR_11+1], &VAR_0[VAR_11], VAR_3 - VAR_11);
 VAR_0[VAR_11].type_event_high = VAR_4 << 8 | VAR_5;
 VAR_0[VAR_11].vendor = VAR_6;
 VAR_0[VAR_11].product = VAR_7;
 VAR_0[VAR_11].entry = VAR_8;
 VAR_0[VAR_11].entries = VAR_9;
 VAR_3++;
out:
 FUNC_3(&VAR_1, VAR_10);
 return VAR_13;
}
