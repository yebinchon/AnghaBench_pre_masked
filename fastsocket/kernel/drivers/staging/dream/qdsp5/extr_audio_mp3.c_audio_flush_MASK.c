
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio {int out_bytes; scalar_t__ reserved; scalar_t__ out_tail; scalar_t__ out_head; TYPE_1__* out; } ;
struct TYPE_2__ {scalar_t__ used; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct audio *VAR_0)
{
 VAR_0->out[0].used = 0;
 VAR_0->out[1].used = 0;
 VAR_0->out_head = 0;
 VAR_0->out_tail = 0;
 VAR_0->reserved = 0;
 FUNC_0(&VAR_0->out_bytes, 0);
}
