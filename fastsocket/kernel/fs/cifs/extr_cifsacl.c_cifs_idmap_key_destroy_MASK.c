
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct key {int datalen; TYPE_1__ payload; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct key *VAR_0)
{
 if (VAR_0->datalen > sizeof(VAR_0->payload))
  FUNC_0(VAR_0->payload.data);
}
