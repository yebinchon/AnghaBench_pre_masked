
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_8__ {int tvnorm; int setup_ok; } ;
struct bttv_fh {int ovfmt; TYPE_4__ ov; int do_crop; struct bttv* btv; } ;
struct bttv_buffer {int crop; } ;
struct TYPE_6__ {int nr; } ;
struct TYPE_5__ {int base; } ;
struct bttv {TYPE_3__* crop; int tvnorm; TYPE_2__ c; TYPE_1__ fbuf; } ;
struct TYPE_7__ {int rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bttv*,TYPE_4__*,int ,struct bttv_buffer*) ;
 int FUNC_1 (struct bttv*,struct bttv_fh*,struct bttv_buffer*) ;
 int FUNC_2 (struct bttv*,struct bttv_fh*,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 struct bttv_buffer* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;
 struct bttv_buffer *VAR_8;
 int VAR_9 = 0;

 if (VAR_5) {

  if (FUNC_4(!VAR_7->fbuf.base)) {
   return -VAR_1;
  }
  if (FUNC_4(!VAR_6->ov.setup_ok)) {
   FUNC_3("bttv%d: overlay: !setup_ok\n", VAR_7->c.nr);
   VAR_9 = -VAR_1;
  }
  if (VAR_9)
   return VAR_9;
 }

 if (!FUNC_2(VAR_7, VAR_6, VAR_2))
  return -VAR_0;

 if (VAR_5) {
  VAR_6->ov.tvnorm = VAR_7->tvnorm;
  VAR_8 = FUNC_5(sizeof(*VAR_8));
  VAR_8->crop = VAR_7->crop[!!VAR_6->do_crop].rect;
  FUNC_0(VAR_7, &VAR_6->ov, VAR_6->ovfmt, VAR_8);
 } else {
  VAR_8 = ((void*)0);
 }


 VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_8);
 return VAR_9;
}
