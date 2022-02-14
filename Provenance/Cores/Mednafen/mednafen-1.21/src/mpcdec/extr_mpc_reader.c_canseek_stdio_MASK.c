
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_seekable; } ;
typedef TYPE_1__ mpc_reader_stdio ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ mpc_reader ;
typedef int mpc_bool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static mpc_bool_t
FUNC_0(mpc_reader *VAR_2)
{
    mpc_reader_stdio *VAR_3 = (mpc_reader_stdio*) VAR_2->data;
    if(VAR_3->magic != VAR_1) return VAR_0;
    return VAR_3->is_seekable;
}
