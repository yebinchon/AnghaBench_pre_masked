
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int warnings; int num_params; int num_columns; int stmt_id; } ;
typedef TYPE_1__ network_mysqld_stmt_prepare_ok_packet_t ;
typedef int GString ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

int FUNC_3(GString *VAR_1, network_mysqld_stmt_prepare_ok_packet_t *VAR_2) {
 int VAR_3 = 0;

 VAR_3 = VAR_3 || FUNC_2(VAR_1, VAR_0);
 VAR_3 = VAR_3 || FUNC_1(VAR_1, VAR_2->stmt_id);
 VAR_3 = VAR_3 || FUNC_0(VAR_1, VAR_2->num_columns);
 VAR_3 = VAR_3 || FUNC_0(VAR_1, VAR_2->num_params);
 VAR_3 = VAR_3 || FUNC_2(VAR_1, 0x00);
 VAR_3 = VAR_3 || FUNC_0(VAR_1, VAR_2->warnings);

 return VAR_3 ? -1 : 0;
}
