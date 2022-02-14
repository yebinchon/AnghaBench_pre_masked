
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
struct TYPE_11__ {int * db_name; } ;
typedef TYPE_3__ network_mysqld_com_init_db_result_t ;
struct TYPE_9__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(network_packet *VAR_1, network_mysqld_com_init_db_result_t *VAR_2) {
 FUNC_4(VAR_1);
 FUNC_3(VAR_1, 1);

 if (VAR_1->offset != VAR_1->data->len) {
  VAR_2->db_name = FUNC_1(((void*)0));

  FUNC_2(VAR_1, VAR_1->data->len - VAR_1->offset, VAR_2->db_name);
 } else {
  if (VAR_2->db_name) FUNC_0(VAR_2->db_name, VAR_0);
  VAR_2->db_name = ((void*)0);
 }

 return 0;
}
