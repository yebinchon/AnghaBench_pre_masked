
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct mpsc_port_info {int * sdma_base; int * mpsc_base; int brg_base_p; void* brg_base; int sdma_base_p; int mpsc_base_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct mpsc_port_info *VAR_8,
  struct platform_device *VAR_9)
{
 struct resource *VAR_10;

 if ((VAR_10 = FUNC_3(VAR_9, VAR_1, VAR_2))
   && FUNC_4(VAR_10->start, VAR_5,
   "mpsc_regs")) {
  VAR_8->mpsc_base = FUNC_0(VAR_10->start, VAR_5);
  VAR_8->mpsc_base_p = VAR_10->start;
 } else {
  FUNC_2("MPSC base");
  goto err;
 }

 if ((VAR_10 = FUNC_3(VAR_9, VAR_1,
     VAR_6))
   && FUNC_4(VAR_10->start,
    VAR_7, "sdma_regs")) {
  VAR_8->sdma_base = FUNC_0(VAR_10->start,VAR_7);
  VAR_8->sdma_base_p = VAR_10->start;
 } else {
  FUNC_2("SDMA base");
  if (VAR_8->mpsc_base) {
   FUNC_1(VAR_8->mpsc_base);
   VAR_8->mpsc_base = ((void*)0);
  }
  goto err;
 }

 if ((VAR_10 = FUNC_3(VAR_9,VAR_1,VAR_3))
   && FUNC_4(VAR_10->start,
    VAR_4, "brg_regs")) {
  VAR_8->brg_base = FUNC_0(VAR_10->start, VAR_4);
  VAR_8->brg_base_p = VAR_10->start;
 } else {
  FUNC_2("BRG base");
  if (VAR_8->mpsc_base) {
   FUNC_1(VAR_8->mpsc_base);
   VAR_8->mpsc_base = ((void*)0);
  }
  if (VAR_8->sdma_base) {
   FUNC_1(VAR_8->sdma_base);
   VAR_8->sdma_base = ((void*)0);
  }
  goto err;
 }
 return 0;

err:
 return -VAR_0;
}
