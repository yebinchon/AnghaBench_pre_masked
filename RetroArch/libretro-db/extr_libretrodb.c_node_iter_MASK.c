
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct node_iter_ctx {TYPE_2__* idx; TYPE_1__* db; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ key_size; } ;
struct TYPE_3__ {int fd; } ;


 scalar_t__ FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
   struct node_iter_ctx *VAR_2 = (struct node_iter_ctx*)VAR_1;

   if (FUNC_0(VAR_2->db->fd, VAR_0,
            (ssize_t)(VAR_2->idx->key_size + sizeof(uint64_t))) > 0)
      return 0;

   return -1;
}
