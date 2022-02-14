
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int proc_t ;
struct TYPE_6__ {scalar_t__ aio_lio_opcode; } ;
struct TYPE_7__ {TYPE_1__ aiocb; } ;
typedef TYPE_2__ aio_workq_entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ,void*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(proc_t VAR_3, user_addr_t VAR_4, void *VAR_5,
  aio_workq_entry **VAR_6 )
{
 aio_workq_entry *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0( VAR_3, VAR_4, VAR_5, VAR_0);
 if ( VAR_7 == ((void*)0) ) {
  VAR_8 = VAR_1;
  goto error_exit;
 }





 if ( VAR_7->aiocb.aio_lio_opcode == VAR_2 ) {
  VAR_8 = 0;
  goto error_exit;
 }

 *VAR_6 = VAR_7;
 return( 0 );

error_exit:

 if ( VAR_7 != ((void*)0) ) {




  FUNC_1(VAR_7);
 }

 return( VAR_8 );

}
