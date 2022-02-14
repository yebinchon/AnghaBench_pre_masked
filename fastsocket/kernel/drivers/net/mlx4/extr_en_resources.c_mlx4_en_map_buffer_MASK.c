
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int buf; } ;
struct mlx4_buf {int nbufs; TYPE_2__ direct; TYPE_1__* page_list; } ;
struct TYPE_3__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page**) ;
 struct page** FUNC_1 (int,int ) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct page**,int,int ,int ) ;

int FUNC_4(struct mlx4_buf *VAR_5)
{
 struct page **VAR_6;
 int VAR_7;

 if (VAR_0 == 64 || VAR_5->nbufs == 1)
  return 0;

 VAR_6 = FUNC_1(sizeof *VAR_6 * VAR_5->nbufs, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5->nbufs; ++VAR_7)
  VAR_6[VAR_7] = FUNC_2(VAR_5->page_list[VAR_7].buf);

 VAR_5->direct.buf = FUNC_3(VAR_6, VAR_5->nbufs, VAR_4, VAR_3);
 FUNC_0(VAR_6);
 if (!VAR_5->direct.buf)
  return -VAR_1;

 return 0;
}
