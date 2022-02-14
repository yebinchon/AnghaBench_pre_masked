
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_8__ {scalar_t__** cpu_kpc_buf; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_9__ {int kperf_flags; int kpc_buf; } ;
struct TYPE_7__ {int * kpc_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (int ,int ,int *,scalar_t__*) ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_4( thread_t VAR_4 )
{
 uint32_t VAR_5;
 uint64_t *VAR_6 = ((void*)0);
 cpu_data_t *VAR_7 = ((void*)0);

 VAR_7 = FUNC_1();


 FUNC_3( VAR_0, VAR_2,
                       ((void*)0), VAR_7->cpu_kpc_buf[1] );


 if( VAR_4->kpc_buf )
  for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
   VAR_4->kpc_buf[VAR_5] += VAR_7->cpu_kpc_buf[1][VAR_5] - VAR_7->cpu_kpc_buf[0][VAR_5];


 if( !FUNC_2()->kpc_buf )
 {
  FUNC_2()->kperf_flags |= VAR_1;
  FUNC_0(FUNC_2());
 }


 VAR_6 = VAR_7->cpu_kpc_buf[1];
 VAR_7->cpu_kpc_buf[1] = VAR_7->cpu_kpc_buf[0];
 VAR_7->cpu_kpc_buf[0] = VAR_6;
}
