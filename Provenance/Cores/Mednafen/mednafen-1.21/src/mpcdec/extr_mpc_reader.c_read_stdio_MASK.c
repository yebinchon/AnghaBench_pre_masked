
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int p_file; } ;
typedef TYPE_1__ mpc_reader_stdio ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ mpc_reader ;
typedef int mpc_int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int,int ,int ) ;

__attribute__((used)) static mpc_int32_t
FUNC_1(mpc_reader *VAR_2, void *VAR_3, mpc_int32_t VAR_4)
{
    mpc_reader_stdio *VAR_5 = (mpc_reader_stdio*) VAR_2->data;
    if(VAR_5->magic != VAR_1) return VAR_0;
    return (mpc_int32_t) FUNC_0(VAR_3, 1, VAR_4, VAR_5->p_file);
}
