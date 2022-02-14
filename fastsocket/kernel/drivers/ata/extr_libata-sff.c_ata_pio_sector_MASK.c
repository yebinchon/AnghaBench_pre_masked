
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct ata_queued_cmd {scalar_t__ curbytes; scalar_t__ nbytes; scalar_t__ sect_size; unsigned int cursg_ofs; TYPE_3__* cursg; int dev; TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {TYPE_2__* ops; int hsm_task_state; } ;
struct TYPE_8__ {unsigned int offset; unsigned int length; } ;
struct TYPE_7__ {int (* sff_data_xfer ) (int ,unsigned char*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 unsigned char* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (unsigned char*,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 struct page* FUNC_8 (struct page*,unsigned int) ;
 unsigned char* FUNC_9 (struct page*) ;
 TYPE_3__* FUNC_10 (TYPE_3__*) ;
 struct page* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,unsigned char*,scalar_t__,int) ;
 int FUNC_13 (int ,unsigned char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(struct ata_queued_cmd *VAR_5)
{
 int VAR_6 = (VAR_5->tf.flags & VAR_0);
 struct ata_port *VAR_7 = VAR_5->ap;
 struct page *VAR_8;
 unsigned int VAR_9;
 unsigned char *VAR_10;

 if (VAR_5->curbytes == VAR_5->nbytes - VAR_5->sect_size)
  VAR_7->hsm_task_state = VAR_1;

 VAR_8 = FUNC_11(VAR_5->cursg);
 VAR_9 = VAR_5->cursg->offset + VAR_5->cursg_ofs;


 VAR_8 = FUNC_8(VAR_8, (VAR_9 >> VAR_3));
 VAR_9 %= VAR_4;

 FUNC_0("data %s\n", VAR_5->tf.flags & VAR_0 ? "write" : "read");

 if (FUNC_1(VAR_8)) {
  unsigned long VAR_11;


  FUNC_7(VAR_11);
  VAR_10 = FUNC_4(VAR_8, VAR_2);


  VAR_7->ops->sff_data_xfer(VAR_5->dev, VAR_10 + VAR_9, VAR_5->sect_size,
           VAR_6);

  FUNC_5(VAR_10, VAR_2);
  FUNC_6(VAR_11);
 } else {
  VAR_10 = FUNC_9(VAR_8);
  VAR_7->ops->sff_data_xfer(VAR_5->dev, VAR_10 + VAR_9, VAR_5->sect_size,
           VAR_6);
 }

 if (!VAR_6 && !FUNC_2(VAR_8))
  FUNC_3(VAR_8);

 VAR_5->curbytes += VAR_5->sect_size;
 VAR_5->cursg_ofs += VAR_5->sect_size;

 if (VAR_5->cursg_ofs == VAR_5->cursg->length) {
  VAR_5->cursg = FUNC_10(VAR_5->cursg);
  VAR_5->cursg_ofs = 0;
 }
}
