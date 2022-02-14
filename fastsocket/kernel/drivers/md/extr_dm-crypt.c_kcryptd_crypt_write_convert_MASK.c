
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int offset_in; int idx_in; int pending; scalar_t__ idx_out; struct bio* bio_out; } ;
struct dm_crypt_io {struct dm_crypt_io* base_io; TYPE_3__ ctx; TYPE_2__* base_bio; TYPE_1__* target; int sector; int error; } ;
struct crypt_config {int dummy; } ;
struct bio {scalar_t__ bi_size; } ;
typedef int sector_t ;
struct TYPE_7__ {unsigned int bi_size; } ;
struct TYPE_6__ {struct crypt_config* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int) ;
 struct bio* FUNC_3 (struct dm_crypt_io*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct crypt_config*,TYPE_3__*) ;
 int FUNC_5 (struct crypt_config*,TYPE_3__*,int *,TYPE_2__*,int ) ;
 int FUNC_6 (struct dm_crypt_io*) ;
 int FUNC_7 (struct dm_crypt_io*) ;
 struct dm_crypt_io* FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_9 (struct dm_crypt_io*,int,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct dm_crypt_io *VAR_3)
{
 struct crypt_config *VAR_4 = VAR_3->target->private;
 struct bio *VAR_5;
 struct dm_crypt_io *VAR_6;
 int VAR_7;
 unsigned VAR_8 = 0;
 unsigned VAR_9 = VAR_3->base_bio->bi_size;
 sector_t VAR_10 = VAR_3->sector;
 int VAR_11;




 FUNC_7(VAR_3);
 FUNC_5(VAR_4, &VAR_3->ctx, ((void*)0), VAR_3->base_bio, VAR_10);





 while (VAR_9) {
  VAR_5 = FUNC_3(VAR_3, VAR_9, &VAR_8);
  if (FUNC_10(!VAR_5)) {
   VAR_3->error = -VAR_1;
   break;
  }

  VAR_3->ctx.bio_out = VAR_5;
  VAR_3->ctx.idx_out = 0;

  VAR_9 -= VAR_5->bi_size;
  VAR_10 += FUNC_1(VAR_5);

  FUNC_7(VAR_3);
  VAR_11 = FUNC_4(VAR_4, &VAR_3->ctx);
  VAR_7 = FUNC_0(&VAR_3->ctx.pending);


  if (VAR_7) {
   FUNC_9(VAR_3, VAR_11, 0);





   if (FUNC_10(VAR_11 < 0))
    break;

   VAR_3->sector = VAR_10;
  }





  if (FUNC_10(VAR_8))
   FUNC_2(VAR_0, VAR_2/100);





  if (FUNC_10(!VAR_7 && VAR_9)) {
   VAR_6 = FUNC_8(VAR_3->target, VAR_3->base_bio,
      VAR_10);
   FUNC_7(VAR_6);
   FUNC_5(VAR_4, &VAR_6->ctx, ((void*)0),
        VAR_3->base_bio, VAR_10);
   VAR_6->ctx.idx_in = VAR_3->ctx.idx_in;
   VAR_6->ctx.offset_in = VAR_3->ctx.offset_in;





   if (!VAR_3->base_io)
    VAR_6->base_io = VAR_3;
   else {
    VAR_6->base_io = VAR_3->base_io;
    FUNC_7(VAR_3->base_io);
    FUNC_6(VAR_3);
   }

   VAR_3 = VAR_6;
  }
 }

 FUNC_6(VAR_3);
}
