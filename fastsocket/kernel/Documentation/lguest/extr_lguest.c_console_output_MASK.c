
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct virtqueue {TYPE_1__ vring; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtqueue*,unsigned int,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct iovec*,unsigned int,int) ;
 int FUNC_4 (struct iovec*,unsigned int) ;
 unsigned int FUNC_5 (struct virtqueue*,struct iovec*,unsigned int*,unsigned int*) ;
 int FUNC_6 (int ,struct iovec*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct virtqueue *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 struct iovec VAR_5[VAR_1->vring.num];


 VAR_2 = FUNC_5(VAR_1, VAR_5, &VAR_3, &VAR_4);
 if (VAR_4)
  FUNC_2(1, "Input buffers in console output queue?");


 while (!FUNC_4(VAR_5, VAR_3)) {
  int VAR_6 = FUNC_6(VAR_0, VAR_5, VAR_3);
  if (VAR_6 <= 0)
   FUNC_1(1, "Write to stdout gave %i", VAR_6);
  FUNC_3(VAR_5, VAR_3, VAR_6);
 }





 FUNC_0(VAR_1, VAR_2, 0);
}
