
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int j_common_ptr ;
typedef TYPE_1__* backing_store_ptr ;
struct TYPE_3__ {int temp_name; int close_backing_store; int write_backing_store; int read_backing_store; int * temp_file; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

void
FUNC_4 (j_common_ptr VAR_6, backing_store_ptr VAR_7,
    long VAR_8)
{
  FUNC_3(VAR_7->temp_name);
  if ((VAR_7->temp_file = FUNC_2(VAR_7->temp_name, VAR_2)) == ((void*)0))
    FUNC_0(VAR_6, VAR_0, VAR_7->temp_name);
  VAR_7->read_backing_store = VAR_4;
  VAR_7->write_backing_store = VAR_5;
  VAR_7->close_backing_store = VAR_3;
  FUNC_1(VAR_6, 1, VAR_1, VAR_7->temp_name);
}
