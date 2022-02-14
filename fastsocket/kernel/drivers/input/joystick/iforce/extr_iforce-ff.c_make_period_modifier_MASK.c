
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct resource {int start; } ;
struct TYPE_2__ {int end; int start; } ;
struct iforce {int mem_mutex; TYPE_1__ device_memory; } ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct resource*,int,int ,int ,long,int *,int *) ;
 int FUNC_5 (struct iforce*,int ,unsigned char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iforce* VAR_2,
 struct resource* VAR_3, int VAR_4,
 __s16 VAR_5, __s16 VAR_6, u16 VAR_7, u16 VAR_8)
{
 unsigned char VAR_9[7];

 VAR_7 = FUNC_3(VAR_7);

 if (!VAR_4) {
  FUNC_6(&VAR_2->mem_mutex);
  if (FUNC_4(&(VAR_2->device_memory), VAR_3, 0x0c,
   VAR_2->device_memory.start, VAR_2->device_memory.end, 2L,
   ((void*)0), ((void*)0))) {
   FUNC_7(&VAR_2->mem_mutex);
   return -VAR_0;
  }
  FUNC_7(&VAR_2->mem_mutex);
 }

 VAR_9[0] = FUNC_2(VAR_3->start);
 VAR_9[1] = FUNC_0(VAR_3->start);

 VAR_9[2] = FUNC_1(VAR_5);
 VAR_9[3] = FUNC_1(VAR_6);
 VAR_9[4] = FUNC_0(VAR_8);

 VAR_9[5] = FUNC_2(VAR_7);
 VAR_9[6] = FUNC_0(VAR_7);

 FUNC_5(VAR_2, VAR_1, VAR_9);

 return 0;
}
