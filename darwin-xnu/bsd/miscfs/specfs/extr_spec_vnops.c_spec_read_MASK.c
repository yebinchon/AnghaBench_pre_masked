
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnop_read_args {int a_ioflag; struct uio* a_uio; struct vnode* a_vp; } ;
struct TYPE_5__ {TYPE_1__* vu_specinfo; } ;
struct vnode {int v_type; int v_specsize; int v_speclastr; int v_rdev; TYPE_2__ v_un; } ;
struct uio {scalar_t__ uio_rw; long uio_offset; int uio_segflg; } ;
struct buf {int dummy; } ;
struct _throttle_io_info_t {int dummy; } ;
typedef int dev_t ;
typedef int daddr64_t ;
struct TYPE_6__ {int (* d_read ) (int ,struct uio*,int ) ;int d_type; } ;
struct TYPE_4__ {size_t si_devbsdunit; int si_isssd; int si_throttleable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;


 struct _throttle_io_info_t* VAR_6 ;
 int FUNC_1 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_2 (struct vnode*,int ,int,int *,int*,int,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 scalar_t__ FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 TYPE_3__* VAR_7 ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (unsigned int,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,struct uio*,int ) ;
 int FUNC_11 (struct _throttle_io_info_t*,int) ;
 int FUNC_12 (struct _throttle_io_info_t*,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_13 (struct uio*) ;
 int FUNC_14 (char*,int,struct uio*) ;
 int FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*) ;

int
FUNC_17(struct vnop_read_args *VAR_8)
{
 struct vnode *VAR_9 = VAR_8->a_vp;
 struct uio *VAR_10 = VAR_8->a_uio;
 struct buf *VAR_11;
 daddr64_t VAR_12, VAR_13;
 long VAR_14, VAR_15;
 int VAR_16=0;
 int VAR_17, VAR_18;
 int VAR_19 = 0;
 dev_t VAR_20;







 if (FUNC_13(VAR_10) == 0)
  return (0);

 switch (VAR_9->v_type) {

 case 128:
  {
   struct _throttle_io_info_t *VAR_21 = ((void*)0);
   int VAR_22;
                if (VAR_7[FUNC_7(VAR_9->v_rdev)].d_type == VAR_0 && VAR_9->v_un.vu_specinfo->si_throttleable) {
   VAR_21 = &VAR_6[VAR_9->v_un.vu_specinfo->si_devbsdunit];
    VAR_22 = FUNC_12(VAR_21, ((void*)0), 0, VAR_9->v_un.vu_specinfo->si_isssd, VAR_4, ((void*)0));
                }
  VAR_19 = (*VAR_7[FUNC_7(VAR_9->v_rdev)].d_read)
   (VAR_9->v_rdev, VAR_10, VAR_8->a_ioflag);

   if (VAR_21) {
    FUNC_11(VAR_21, VAR_22);
   }

  return (VAR_19);
  }

 case 129:
  if (VAR_10->uio_offset < 0)
   return (VAR_1);

  VAR_20 = VAR_9->v_rdev;

  VAR_16 = VAR_9->v_specsize;

  if (VAR_16 > VAR_3)
   return (VAR_1);

         VAR_15 = VAR_3 / VAR_16;
  VAR_14 = VAR_15 * VAR_16;

  do {
   VAR_18 = VAR_10->uio_offset % VAR_14;

   VAR_12 = (daddr64_t)((VAR_10->uio_offset / VAR_16) &~ (VAR_15 - 1));

   if (VAR_9->v_speclastr + VAR_15 == VAR_12) {
           VAR_13 = VAR_12 + VAR_15;
    VAR_19 = FUNC_2(VAR_9, VAR_12, (int)VAR_14, &VAR_13,
            (int *)&VAR_14, 1, VAR_2, &VAR_11);
   } else
           VAR_19 = FUNC_1(VAR_9, VAR_12, (int)VAR_14, VAR_2, &VAR_11);

   FUNC_15(VAR_9);
   VAR_9->v_speclastr = VAR_12;
   FUNC_16(VAR_9);

   VAR_17 = VAR_14 - FUNC_6(VAR_11);
   if ((VAR_18 > VAR_17) || VAR_19) {
           if (!VAR_19)
            VAR_19 = VAR_1;
    FUNC_3(VAR_11);
    return (VAR_19);
   }
   VAR_17 = FUNC_8((unsigned)(VAR_17 - VAR_18), FUNC_13(VAR_10));

   VAR_19 = FUNC_14((char *)FUNC_4(VAR_11) + VAR_18, VAR_17, VAR_10);
   if (VAR_17 + VAR_18 == VAR_14)
    FUNC_5(VAR_11);
   FUNC_3(VAR_11);
  } while (VAR_19 == 0 && FUNC_13(VAR_10) > 0 && VAR_17 != 0);
  return (VAR_19);

 default:
  FUNC_9("spec_read type");
 }


 return (0);
}
