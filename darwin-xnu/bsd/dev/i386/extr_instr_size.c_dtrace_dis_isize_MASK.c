
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int uchar_t ;
typedef scalar_t__ model_t ;
typedef scalar_t__ dis_isize_t ;
struct TYPE_3__ {void** d86_data; int d86_len; int d86_memsize; int d86_rmindex; int * d86_check_func; int d86_get_byte; } ;
typedef TYPE_1__ dis86_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_1(uchar_t *VAR_5, dis_isize_t VAR_6, model_t VAR_7, int *VAR_8)
{
 int VAR_9;
 dis86_t VAR_10;
 uint_t VAR_11 = VAR_2;

 VAR_11 = (VAR_7 == VAR_0) ? VAR_3 : VAR_2;

 VAR_10.d86_data = (void **)&VAR_5;
 VAR_10.d86_get_byte = VAR_4;
 VAR_10.d86_check_func = ((void*)0);

 if (FUNC_0(&VAR_10, VAR_11) != 0)
  return (-1);

 if (VAR_6 == VAR_1)
  VAR_9 = VAR_10.d86_len;
 else
  VAR_9 = VAR_10.d86_memsize;

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10.d86_rmindex;
 return (VAR_9);
}
