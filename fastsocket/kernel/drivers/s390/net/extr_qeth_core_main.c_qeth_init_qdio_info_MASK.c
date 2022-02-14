
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int entry_list; int buf_count; } ;
struct TYPE_6__ {int entry_list; int buf_count; } ;
struct TYPE_8__ {TYPE_3__ init_pool; TYPE_2__ in_buf_pool; int in_buf_size; int state; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct qeth_card {TYPE_4__ qdio; TYPE_1__ info; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_6)
{
 FUNC_1(VAR_5, 4, "intqdinf");
 FUNC_2(&VAR_6->qdio.state, VAR_4);

 VAR_6->qdio.in_buf_size = VAR_3;
 if (VAR_6->info.type == VAR_0)
  VAR_6->qdio.init_pool.buf_count = VAR_2;
 else
  VAR_6->qdio.init_pool.buf_count = VAR_1;
 VAR_6->qdio.in_buf_pool.buf_count = VAR_6->qdio.init_pool.buf_count;
 FUNC_0(&VAR_6->qdio.in_buf_pool.entry_list);
 FUNC_0(&VAR_6->qdio.init_pool.entry_list);
}
