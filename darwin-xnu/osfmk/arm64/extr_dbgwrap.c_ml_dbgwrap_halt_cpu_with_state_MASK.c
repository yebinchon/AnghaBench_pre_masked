
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int cpsr; void* pc; void* sp; void* lr; void* fp; void** x; } ;
typedef TYPE_1__ dbgwrap_thread_state_t ;
typedef int dbgwrap_status_t ;
struct TYPE_9__ {scalar_t__* coresight_base; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int volatile VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int,int ,int *) ;

dbgwrap_status_t
FUNC_5(int VAR_7, uint64_t VAR_8, dbgwrap_thread_state_t *VAR_9)
{
 cpu_data_t *VAR_10 = FUNC_1(VAR_7);
 if ((VAR_10 == ((void*)0)) || (VAR_10->coresight_base[VAR_2] == 0))
  return VAR_3;


 *((volatile uint32_t *)(VAR_10->coresight_base[VAR_2] + VAR_1)) = VAR_0;

 dbgwrap_status_t VAR_11 = FUNC_2(VAR_7, VAR_8);






 if (*((volatile uint32_t *)(VAR_10->coresight_base[VAR_2] + VAR_6)) & VAR_5) {
  FUNC_0(VAR_9, sizeof(*VAR_9));
  return VAR_4;
 }

 uint32_t VAR_12;

 for (unsigned int VAR_13 = 0; VAR_13 < (sizeof(VAR_9->x) / sizeof(VAR_9->x[0])); ++VAR_13) {
  VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | VAR_13;
  FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
  VAR_9->x[VAR_13] = FUNC_3(VAR_10, VAR_8, &VAR_11);
 }

 VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | 29;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_9->fp = FUNC_3(VAR_10, VAR_8, &VAR_11);

 VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | 30;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_9->lr = FUNC_3(VAR_10, VAR_8, &VAR_11);







 VAR_12 = (0x91U << 24) | (31 << 5) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_9->sp = FUNC_3(VAR_10, VAR_8, &VAR_11);




 VAR_12 = (0xD53U << 20) | (1 << 19) | (3 << 16) | (4 << 12) | (5 << 8) | (1 << 5) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_9->pc = FUNC_3(VAR_10, VAR_8, &VAR_11);



 VAR_12 = (0xD53U << 20) | (1 << 19) | (3 << 16) | (4 << 12) | (5 << 8) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_12 = (0xD51U << 20) | (2 << 19) | (3 << 16) | (4 << 8) | 18;
 FUNC_4(VAR_10, VAR_12, VAR_8, &VAR_11);
 VAR_9->cpsr = (uint32_t)FUNC_3(VAR_10, VAR_8, &VAR_11);

 return VAR_11;
}
