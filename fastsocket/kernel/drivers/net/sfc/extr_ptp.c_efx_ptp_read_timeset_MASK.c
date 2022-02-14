
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_ptp_timeset {unsigned int host_start; unsigned int host_end; unsigned int window; void* waitns; void* nanoseconds; void* seconds; } ;


 void* FUNC_0 (int *,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(u8 *VAR_7, struct efx_ptp_timeset *VAR_8)
{
 unsigned VAR_9, VAR_10;

 VAR_8->host_start = FUNC_0(VAR_7, VAR_3);
 VAR_8->seconds = FUNC_0(VAR_7, VAR_5);
 VAR_8->nanoseconds = FUNC_0(VAR_7,
      VAR_4);
 VAR_8->host_end = FUNC_0(VAR_7, VAR_2),
 VAR_8->waitns = FUNC_0(VAR_7, VAR_6);


 VAR_9 = VAR_8->host_start & VAR_0;
 VAR_10 = VAR_8->host_end & VAR_0;

 if (VAR_10 < VAR_9)
  VAR_10 += VAR_1;

 VAR_8->window = VAR_10 - VAR_9;
}
