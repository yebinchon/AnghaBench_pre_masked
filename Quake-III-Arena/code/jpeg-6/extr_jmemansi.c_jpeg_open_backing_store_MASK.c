
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int j_common_ptr ;
typedef TYPE_1__* backing_store_ptr ;
struct TYPE_3__ {int close_backing_store; int write_backing_store; int read_backing_store; int * temp_file; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int VAR_3 ;

void
FUNC_2 (j_common_ptr VAR_4, backing_store_ptr VAR_5,
    long VAR_6)
{
  if ((VAR_5->temp_file = FUNC_1()) == ((void*)0))
    FUNC_0(VAR_4, VAR_0, "");
  VAR_5->read_backing_store = VAR_2;
  VAR_5->write_backing_store = VAR_3;
  VAR_5->close_backing_store = VAR_1;
}
