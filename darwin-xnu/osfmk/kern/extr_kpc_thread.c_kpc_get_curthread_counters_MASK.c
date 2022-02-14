
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int boolean_t ;
struct TYPE_4__ {int kpc_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4(uint32_t *VAR_3, uint64_t *VAR_4)
{
 thread_t VAR_5 = FUNC_0();
 boolean_t VAR_6;


 if( *VAR_3 < VAR_2 )
  return VAR_0;


 if( !VAR_5->kpc_buf )
  return VAR_0;

 VAR_6 = FUNC_3(VAR_1);


 FUNC_1( FUNC_0() );


 FUNC_2( VAR_4, VAR_5->kpc_buf,
         VAR_2 * sizeof(*VAR_4) );
 *VAR_3 = VAR_2;

 FUNC_3(VAR_6);

 return 0;
}
