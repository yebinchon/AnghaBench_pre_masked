
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt878 {int * risc_cpu; int risc_dma; int risc_size; int dev; int * buf_cpu; int buf_dma; int buf_size; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bt878 *VAR_0)
{
 if (VAR_0->buf_cpu) {
  FUNC_0(VAR_0->dev, VAR_0->buf_size, VAR_0->buf_cpu,
        VAR_0->buf_dma);
  VAR_0->buf_cpu = ((void*)0);
 }

 if (VAR_0->risc_cpu) {
  FUNC_0(VAR_0->dev, VAR_0->risc_size, VAR_0->risc_cpu,
        VAR_0->risc_dma);
  VAR_0->risc_cpu = ((void*)0);
 }
}
