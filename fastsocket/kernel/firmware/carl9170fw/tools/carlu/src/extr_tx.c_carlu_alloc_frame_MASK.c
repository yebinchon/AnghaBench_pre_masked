
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int queue; } ;
struct carlu {int extra_headroom; } ;
struct _carl9170_tx_superframe {int dummy; } ;


 struct frame* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct frame*,int) ;

struct frame *FUNC_2(struct carlu *VAR_0, unsigned int VAR_1)
{
 struct frame *VAR_2;
 unsigned int VAR_3;

 VAR_3 = VAR_0->extra_headroom + sizeof(struct _carl9170_tx_superframe) + VAR_1;

 VAR_2 = FUNC_0(VAR_3);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, sizeof(struct _carl9170_tx_superframe) + VAR_0->extra_headroom);

 VAR_2->queue = 2;

 return VAR_2;
}
