
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {struct TYPE_15__* prev; struct TYPE_15__* next; } ;
struct TYPE_20__ {scalar_t__ num_entries; TYPE_4__ ringhd; } ;
struct TYPE_16__ {struct TYPE_16__* prev; struct TYPE_16__* next; } ;
struct TYPE_19__ {scalar_t__ num_entries; TYPE_5__ ringhd; } ;
struct TYPE_13__ {struct TYPE_13__* prev; struct TYPE_13__* next; } ;
struct TYPE_18__ {scalar_t__ num_entries; TYPE_2__ ringhd; } ;
struct TYPE_14__ {struct TYPE_14__* lru_prev; struct TYPE_14__* lru_next; } ;
struct TYPE_17__ {scalar_t__ num_entries; TYPE_3__ ringhd; } ;
struct TYPE_12__ {struct TYPE_12__* prev; struct TYPE_12__* next; } ;
struct TYPE_11__ {scalar_t__ num_entries; TYPE_1__ ringhd; } ;


 int VAR_0 ;
 TYPE_10__* VAR_1 ;
 TYPE_9__ VAR_2 ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;

__attribute__((used)) static inline void FUNC_0(void)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_1[VAR_6].ringhd.next =
   VAR_1[VAR_6].ringhd.prev =
   &VAR_1[VAR_6].ringhd;
  VAR_1[VAR_6].num_entries = 0;
 }
 VAR_4.ringhd.next = VAR_4.ringhd.prev =
  &VAR_4.ringhd;
 VAR_4.num_entries = 0;
 VAR_5.ringhd.lru_next = VAR_5.ringhd.lru_prev =
  &VAR_5.ringhd;
 VAR_5.num_entries = 0;
 VAR_2.ringhd.next = VAR_2.ringhd.prev =
  &VAR_2.ringhd;
 VAR_2.num_entries = 0;
 VAR_3.ringhd.next = VAR_3.ringhd.prev =
  &VAR_3.ringhd;
 VAR_3.num_entries = 0;
}
