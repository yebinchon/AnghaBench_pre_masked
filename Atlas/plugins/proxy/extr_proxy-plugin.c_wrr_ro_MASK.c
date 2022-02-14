
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* srv; } ;
typedef TYPE_2__ network_mysqld_con ;
struct TYPE_13__ {TYPE_5__* global_wrr; } ;
typedef TYPE_3__ network_backends_t ;
struct TYPE_14__ {scalar_t__ weight; scalar_t__ type; scalar_t__ state; } ;
typedef TYPE_4__ network_backend_t ;
typedef scalar_t__ guint ;
typedef int gint ;
struct TYPE_15__ {scalar_t__ max_weight; scalar_t__ cur_weight; scalar_t__ next_ndx; } ;
typedef TYPE_5__ g_wrr_poll ;
struct TYPE_11__ {TYPE_3__* backends; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,scalar_t__) ;

int FUNC_3(network_mysqld_con *VAR_2) {
 guint VAR_3;

 network_backends_t* VAR_4 = VAR_2->srv->backends;
 g_wrr_poll* VAR_5 = VAR_4->global_wrr;
 guint VAR_6 = FUNC_1(VAR_4);


 if (VAR_5->max_weight == 0) {
  for(VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) {
   network_backend_t* VAR_7 = FUNC_2(VAR_4, VAR_3);
   if (VAR_7 == ((void*)0)) continue;
   if (VAR_5->max_weight < VAR_7->weight) {
    VAR_5->max_weight = VAR_7->weight;
    VAR_5->cur_weight = VAR_7->weight;
   }
  }
 }

 guint VAR_8 = VAR_5->max_weight;
 guint VAR_9 = VAR_5->cur_weight;
 guint VAR_10 = VAR_5->next_ndx;


 gint VAR_11 = -1;
 for(VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) {
  network_backend_t* VAR_12 = FUNC_2(VAR_4, VAR_10);
  if (VAR_12 == ((void*)0)) goto next;

  if (FUNC_0(VAR_12) == ((void*)0)) goto next;

  if (VAR_12->type == VAR_1 && VAR_12->weight >= VAR_9 && VAR_12->state == VAR_0) VAR_11 = VAR_10;

 next:
  if (VAR_10 >= VAR_6 - 1) {
   --VAR_9;
   VAR_10 = 0;

   if (VAR_9 == 0) VAR_9 = VAR_8;
  } else {
   ++VAR_10;
  }

  if (VAR_11 != -1) break;
 }

 VAR_5->cur_weight = VAR_9;
 VAR_5->next_ndx = VAR_10;
 return VAR_11;
}
