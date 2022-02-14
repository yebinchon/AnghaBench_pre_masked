
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int ts; } ;
struct TYPE_4__ {int (* ts ) (int const*,int,int *,int ,int *,int ) ;} ;
struct dvb_demux_feed {int peslen; TYPE_1__ feed; TYPE_2__ cb; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int,int *,int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_2(struct dvb_demux_feed *VAR_1,
        const u8 *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 int VAR_4;



 if (VAR_3 == 0)
  return -1;

 VAR_4 = 188 - VAR_3;
 if (VAR_2[1] & 0x40)
  VAR_1->peslen = 0xfffa;

 VAR_1->peslen += VAR_3;

 return VAR_1->cb.ts(&VAR_2[VAR_4], VAR_3, ((void*)0), 0, &VAR_1->feed.ts, VAR_0);
}
