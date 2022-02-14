
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {unsigned long data; int function; } ;
struct TYPE_7__ {int sampling_rate; int offset; int* start; int* count; int sample_format; int samples_per_line; } ;
struct saa7146_fh {TYPE_4__ vbi_read_timeout; int vbi_q; TYPE_3__ vbi_fmt; } ;
struct saa7146_dev {TYPE_2__* ext_vv_data; int v4l2_lock; int slock; TYPE_1__* pci; } ;
struct saa7146_buf {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct saa7146_dev*,int ) ;
 int FUNC_5 (struct saa7146_fh*,int ) ;
 int FUNC_6 (struct saa7146_dev*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (struct saa7146_dev*) ;
 int FUNC_8 (int *,int *,int *,int *,int ,int ,int,struct file*,int *) ;

__attribute__((used)) static int FUNC_9(struct saa7146_dev *VAR_18, struct file *VAR_19)
{
 struct saa7146_fh *VAR_20 = VAR_19->private_data;

 u32 VAR_21 = FUNC_4(VAR_18, VAR_9);
 int VAR_22 = 0;

 FUNC_1(("dev:%p, fh:%p\n",VAR_18,VAR_20));

 VAR_22 = FUNC_5(VAR_20, VAR_10);
 if (0 == VAR_22) {
  FUNC_0(("cannot get vbi RESOURCE_DMA3_BRS resource\n"));
  return -VAR_1;
 }


 VAR_21 &= ~0x1f0000;
 VAR_21 |= 0x1d0000;
 FUNC_6(VAR_18, VAR_9, VAR_21);
 FUNC_6(VAR_18, VAR_8, (VAR_2|VAR_4));

 FUNC_3(&VAR_20->vbi_fmt,0,sizeof(VAR_20->vbi_fmt));

 VAR_20->vbi_fmt.sampling_rate = 27000000;
 VAR_20->vbi_fmt.offset = 248;
 VAR_20->vbi_fmt.samples_per_line = VAR_15;
 VAR_20->vbi_fmt.sample_format = VAR_14;


 VAR_20->vbi_fmt.start[0] = 5;
 VAR_20->vbi_fmt.count[0] = 16;
 VAR_20->vbi_fmt.start[1] = 312;
 VAR_20->vbi_fmt.count[1] = 16;

 FUNC_8(&VAR_20->vbi_q, &VAR_16,
       &VAR_18->pci->dev, &VAR_18->slock,
       VAR_12,
       VAR_13,
       sizeof(struct saa7146_buf),
       VAR_19, &VAR_18->v4l2_lock);

 FUNC_2(&VAR_20->vbi_read_timeout);
 VAR_20->vbi_read_timeout.function = VAR_17;
 VAR_20->vbi_read_timeout.data = (unsigned long)VAR_19;


 if ( 0 != (VAR_11 & VAR_18->ext_vv_data->flags)) {
  FUNC_6(VAR_18, VAR_0, VAR_7|VAR_6 | (7 << 19));
 } else {
  FUNC_6(VAR_18, VAR_0, 0x00000001);

  if (0 != (VAR_22 = FUNC_7(VAR_18))) {
   FUNC_1(("vbi workaround failed!\n"));

  }
 }


 FUNC_6(VAR_18, VAR_8, (VAR_3|VAR_5));
 return 0;
}
