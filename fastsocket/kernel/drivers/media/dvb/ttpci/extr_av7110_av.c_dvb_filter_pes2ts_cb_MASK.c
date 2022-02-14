
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ts; } ;
struct TYPE_3__ {int (* ts ) (unsigned char*,int,int *,int ,int *,int ) ;} ;
struct dvb_demux_feed {TYPE_2__ feed; TYPE_1__ cb; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned char *VAR_2)
{
 struct dvb_demux_feed *VAR_3 = (struct dvb_demux_feed *) VAR_1;

 VAR_3->cb.ts(VAR_2, 188, ((void*)0), 0,
     &VAR_3->feed.ts, VAR_0);
 return 0;
}
