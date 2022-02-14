
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct mlx4_buf {int nbufs; TYPE_1__ direct; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct mlx4_buf *VAR_1)
{
 if (VAR_0 == 64 || VAR_1->nbufs == 1)
  return;

 FUNC_0(VAR_1->direct.buf);
}
