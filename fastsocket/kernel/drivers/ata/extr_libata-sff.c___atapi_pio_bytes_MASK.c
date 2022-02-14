
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct ata_queued_cmd {unsigned int curbytes; unsigned int cursg_ofs; struct scatterlist* cursg; TYPE_2__ tf; int nbytes; struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {TYPE_3__* ops; } ;
struct ata_eh_info {int dummy; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_6__ {unsigned int (* sff_data_xfer ) (struct ata_device*,unsigned char*,unsigned int,int) ;} ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ata_eh_info*,char*,int ,unsigned int,unsigned int) ;
 unsigned char* FUNC_3 (struct page*,int ) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 struct page* FUNC_8 (struct page*,unsigned int) ;
 unsigned char* FUNC_9 (struct page*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 struct page* FUNC_11 (struct scatterlist*) ;
 unsigned int FUNC_12 (struct ata_device*,unsigned char*,unsigned int,int) ;
 unsigned int FUNC_13 (struct ata_device*,unsigned char*,unsigned int,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct ata_queued_cmd *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = (VAR_6->tf.flags & VAR_0) ? VAR_5 : VAR_4;
 struct ata_port *VAR_9 = VAR_6->ap;
 struct ata_device *VAR_10 = VAR_6->dev;
 struct ata_eh_info *VAR_11 = &VAR_10->link->eh_info;
 struct scatterlist *VAR_12;
 struct page *VAR_13;
 unsigned char *VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;

next_sg:
 VAR_12 = VAR_6->cursg;
 if (FUNC_14(!VAR_12)) {
  FUNC_2(VAR_11, "unexpected or too much trailing data "
      "buf=%u cur=%u bytes=%u",
      VAR_6->nbytes, VAR_6->curbytes, VAR_7);
  return -1;
 }

 VAR_13 = FUNC_11(VAR_12);
 VAR_15 = VAR_12->offset + VAR_6->cursg_ofs;


 VAR_13 = FUNC_8(VAR_13, (VAR_15 >> VAR_2));
 VAR_15 %= VAR_3;


 VAR_16 = FUNC_7(VAR_12->length - VAR_6->cursg_ofs, VAR_7);


 VAR_16 = FUNC_7(VAR_16, (unsigned int)VAR_3 - VAR_15);

 FUNC_0("data %s\n", VAR_6->tf.flags & VAR_0 ? "write" : "read");

 if (FUNC_1(VAR_13)) {
  unsigned long VAR_18;


  FUNC_6(VAR_18);
  VAR_14 = FUNC_3(VAR_13, VAR_1);


  VAR_17 = VAR_9->ops->sff_data_xfer(VAR_10, VAR_14 + VAR_15,
        VAR_16, VAR_8);

  FUNC_4(VAR_14, VAR_1);
  FUNC_5(VAR_18);
 } else {
  VAR_14 = FUNC_9(VAR_13);
  VAR_17 = VAR_9->ops->sff_data_xfer(VAR_10, VAR_14 + VAR_15,
        VAR_16, VAR_8);
 }

 VAR_7 -= FUNC_7(VAR_7, VAR_17);
 VAR_6->curbytes += VAR_16;
 VAR_6->cursg_ofs += VAR_16;

 if (VAR_6->cursg_ofs == VAR_12->length) {
  VAR_6->cursg = FUNC_10(VAR_6->cursg);
  VAR_6->cursg_ofs = 0;
 }







 if (VAR_7)
  goto next_sg;
 return 0;
}
