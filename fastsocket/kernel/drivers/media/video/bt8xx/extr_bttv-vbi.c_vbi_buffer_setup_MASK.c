
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct bttv_fh* priv_data; } ;
struct TYPE_4__ {int * count; int * start; int samples_per_line; } ;
struct TYPE_3__ {TYPE_2__ fmt; } ;
struct bttv_fh {TYPE_1__ vbi_fmt; struct bttv* btv; } ;
struct bttv {int dummy; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_1->priv_data;
 struct bttv *VAR_5 = VAR_4->btv;

 if (0 == *VAR_2)
  *VAR_2 = VAR_0;

 *VAR_3 = FUNC_0(&VAR_4->vbi_fmt.fmt);

 FUNC_1("setup: samples=%u start=%d,%d count=%u,%u\n",
  VAR_4->vbi_fmt.fmt.samples_per_line,
  VAR_4->vbi_fmt.fmt.start[0],
  VAR_4->vbi_fmt.fmt.start[1],
  VAR_4->vbi_fmt.fmt.count[0],
  VAR_4->vbi_fmt.fmt.count[1]);

 return 0;
}
