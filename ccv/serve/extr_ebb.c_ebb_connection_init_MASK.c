
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_8__ {TYPE_1__* data; } ;
struct TYPE_9__ {int new_request; TYPE_1__* data; } ;
struct TYPE_6__ {int fd; int * data; int * on_close; int * on_timeout; int * new_request; int * new_buf; TYPE_2__ timeout_watcher; TYPE_2__ goodbye_watcher; TYPE_3__ read_watcher; int * to_write; TYPE_3__ write_watcher; TYPE_4__ parser; scalar_t__ open; int * ip; int * server; } ;
typedef TYPE_1__ ebb_connection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3(ebb_connection *VAR_6)
{
  VAR_6->fd = -1;
  VAR_6->server = ((void*)0);
  VAR_6->ip = ((void*)0);
  VAR_6->open = 0;

  FUNC_0( &VAR_6->parser );
  VAR_6->parser.data = VAR_6;
  VAR_6->parser.new_request = VAR_1;

  FUNC_1 (&VAR_6->write_watcher, VAR_5);
  VAR_6->write_watcher.data = VAR_6;
  VAR_6->to_write = ((void*)0);

  FUNC_1(&VAR_6->read_watcher, VAR_3);
  VAR_6->read_watcher.data = VAR_6;

  FUNC_2(&VAR_6->goodbye_watcher, VAR_2, 0., 0.);
  VAR_6->goodbye_watcher.data = VAR_6;

  FUNC_2(&VAR_6->timeout_watcher, VAR_4, VAR_0, 0.);
  VAR_6->timeout_watcher.data = VAR_6;

  VAR_6->new_buf = ((void*)0);
  VAR_6->new_request = ((void*)0);
  VAR_6->on_timeout = ((void*)0);
  VAR_6->on_close = ((void*)0);
  VAR_6->data = ((void*)0);
}
