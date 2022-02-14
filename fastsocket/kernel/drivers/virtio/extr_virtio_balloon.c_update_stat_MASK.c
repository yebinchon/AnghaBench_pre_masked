
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct virtio_balloon {TYPE_1__* stats; } ;
struct TYPE_2__ {int val; int tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct virtio_balloon *VAR_1, int VAR_2,
          u16 VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_2 >= VAR_0);
 VAR_1->stats[VAR_2].tag = VAR_3;
 VAR_1->stats[VAR_2].val = VAR_4;
}
