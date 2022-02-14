
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {char* buffer; TYPE_1__* rq_disk; } ;
struct amiga_floppy_struct {int blocks; char* trackbuf; int dirty; TYPE_3__* type; TYPE_2__* dtype; } ;
struct TYPE_6__ {unsigned int sect_mult; } ;
struct TYPE_5__ {unsigned int sects; } ;
struct TYPE_4__ {struct amiga_floppy_struct* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct request*,int) ;
 struct request* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct request*) ;
 unsigned int FUNC_3 (struct request*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (char*,unsigned int,unsigned int,char*) ;
 scalar_t__ FUNC_11 (struct request*) ;
 struct amiga_floppy_struct* VAR_5 ;

__attribute__((used)) static void FUNC_12(void)
{
 struct request *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct amiga_floppy_struct *VAR_12;
 char *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

next_req:
 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6) {

  return;
 }

 VAR_12 = VAR_6->rq_disk->private_data;
 VAR_11 = VAR_12 - VAR_5;

next_segment:

 for (VAR_7 = 0, VAR_15 = 0; VAR_7 < FUNC_2(VAR_6); VAR_7++) {





  VAR_8 = FUNC_3(VAR_6) + VAR_7;
  if ((int)VAR_8 > VAR_12->blocks) {
   VAR_15 = -VAR_0;
   break;
  }

  VAR_9 = VAR_8 / (VAR_12->dtype->sects * VAR_12->type->sect_mult);
  VAR_10 = VAR_8 % (VAR_12->dtype->sects * VAR_12->type->sect_mult);
  VAR_13 = VAR_6->buffer + 512 * VAR_7;





  if (FUNC_5(VAR_11, VAR_9) == -1) {
   VAR_15 = -VAR_0;
   break;
  }

  if (FUNC_11(VAR_6) == VAR_1) {
   FUNC_8(VAR_13, VAR_12->trackbuf + VAR_10 * 512, 512);
  } else {
   FUNC_8(VAR_12->trackbuf + VAR_10 * 512, VAR_13, 512);


   if (!FUNC_4(VAR_11)) {
    VAR_15 = -VAR_0;
    break;
   }




   FUNC_7(VAR_14);

   VAR_12->dirty = 1;

   FUNC_9 (VAR_3 + VAR_11, VAR_4 + 1);
   FUNC_6(VAR_14);
  }
 }

 if (FUNC_0(VAR_6, VAR_15))
  goto next_segment;
 goto next_req;
}
