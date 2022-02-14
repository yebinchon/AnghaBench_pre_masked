
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int p_file; scalar_t__ is_seekable; } ;
typedef TYPE_1__ mpc_reader_stdio ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ mpc_reader ;
typedef int mpc_int32_t ;
typedef int mpc_bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static mpc_bool_t
FUNC_1(mpc_reader *VAR_3, mpc_int32_t VAR_4)
{
    mpc_reader_stdio *VAR_5 = (mpc_reader_stdio*) VAR_3->data;
    if(VAR_5->magic != VAR_2) return VAR_0;
    return VAR_5->is_seekable ? FUNC_0(VAR_5->p_file, VAR_4, VAR_1) == 0 : VAR_0;
}
