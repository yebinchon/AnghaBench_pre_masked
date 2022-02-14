
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ nt_generation; scalar_t__ nt_ns_base; scalar_t__ nt_shift; scalar_t__ nt_scale; scalar_t__ nt_tsc_base; } ;
typedef TYPE_1__ commpage_time_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_1(
 uint64_t VAR_4,
 uint64_t VAR_5,
 uint32_t VAR_6,
 uint32_t VAR_7 )
{
 commpage_time_data *VAR_8 = VAR_2;
 commpage_time_data *VAR_9 = VAR_3;
 static uint32_t VAR_10 = 0;
 uint32_t VAR_11;

 if (VAR_8 == ((void*)0))
  return;

 if ( VAR_10 != VAR_8->nt_generation )
  FUNC_0("nanotime trouble 1");
 if ( VAR_5 < VAR_8->nt_ns_base )
  FUNC_0("nanotime trouble 2");
 if ((VAR_7 != 0) && ((VAR_0 & VAR_1)==0) )
  FUNC_0("nanotime trouble 3");

 VAR_11 = ++VAR_10;
 if (VAR_11 == 0)
  VAR_11 = ++VAR_10;

 VAR_8->nt_generation = 0;
 VAR_9->nt_generation = 0;

 VAR_8->nt_tsc_base = VAR_4;
 VAR_9->nt_tsc_base = VAR_4;

 VAR_8->nt_ns_base = VAR_5;
 VAR_9->nt_ns_base = VAR_5;

 VAR_8->nt_scale = VAR_6;
 VAR_9->nt_scale = VAR_6;

 VAR_8->nt_shift = VAR_7;
 VAR_9->nt_shift = VAR_7;

 VAR_8->nt_generation = VAR_11;
 VAR_9->nt_generation = VAR_11;
}
