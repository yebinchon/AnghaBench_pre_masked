
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct r8a66597_device {int dma_map; int address; scalar_t__* pipe_cnt; } ;
struct r8a66597 {int dma_map; int * pipe_cnt; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct r8a66597*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct r8a66597 *VAR_1,
          struct r8a66597_device *VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4;

 if (!VAR_2)
  return;

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2->pipe_cnt[VAR_4])
   continue;

  if (!VAR_3) {
   VAR_3 = 1;
   FUNC_1(VAR_1, 0, VAR_2->address);
  }

  VAR_1->pipe_cnt[VAR_4] -= VAR_2->pipe_cnt[VAR_4];
  VAR_2->pipe_cnt[VAR_4] = 0;
  FUNC_1(VAR_1, VAR_4, VAR_2->address);
 }

 FUNC_0("disable_pipe");

 VAR_1->dma_map &= ~(VAR_2->dma_map);
 VAR_2->dma_map = 0;
}
