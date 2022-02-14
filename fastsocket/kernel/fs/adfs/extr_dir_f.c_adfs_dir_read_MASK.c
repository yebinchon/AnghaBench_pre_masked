
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize_bits; } ;
struct TYPE_3__ {scalar_t__ endmasseq; char endname; scalar_t__ dircheckbyte; } ;
struct TYPE_4__ {scalar_t__ startmasseq; TYPE_1__ new; int startname; } ;
struct adfs_dir {int nr_buffers; struct super_block* sb; int * bh; TYPE_2__ dirtail; TYPE_2__ dirhead; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,unsigned long,int) ;
 scalar_t__ FUNC_1 (struct adfs_dir*) ;
 int FUNC_2 (struct super_block*,char*,unsigned long,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (struct super_block*,int) ;

__attribute__((used)) static int
FUNC_8(struct super_block *VAR_1, unsigned long VAR_2,
       unsigned int VAR_3, struct adfs_dir *VAR_4)
{
 const unsigned int VAR_5 = VAR_1->s_blocksize_bits;
 int VAR_6 = 0;





 if (VAR_3 & 2047)
  goto bad_dir;

 VAR_3 >>= VAR_5;

 VAR_4->nr_buffers = 0;
 VAR_4->sb = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_7;

  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6);
  if (!VAR_7) {
   FUNC_2(VAR_1, "dir object %lX has a hole at offset %d",
       VAR_2, VAR_6);
   goto release_buffers;
  }

  VAR_4->bh[VAR_6] = FUNC_7(VAR_1, VAR_7);
  if (!VAR_4->bh[VAR_6])
   goto release_buffers;
 }

 FUNC_6(&VAR_4->dirhead, FUNC_4(VAR_4->bh, 0), sizeof(VAR_4->dirhead));
 FUNC_6(&VAR_4->dirtail, FUNC_4(VAR_4->bh, 2007), sizeof(VAR_4->dirtail));

 if (VAR_4->dirhead.startmasseq != VAR_4->dirtail.new.endmasseq ||
     FUNC_5(&VAR_4->dirhead.startname, &VAR_4->dirtail.new.endname, 4))
  goto bad_dir;

 if (FUNC_5(&VAR_4->dirhead.startname, "Nick", 4) &&
     FUNC_5(&VAR_4->dirhead.startname, "Hugo", 4))
  goto bad_dir;

 if (FUNC_1(VAR_4) != VAR_4->dirtail.new.dircheckbyte)
  goto bad_dir;

 VAR_4->nr_buffers = VAR_6;

 return 0;

bad_dir:
 FUNC_2(VAR_1, "corrupted directory fragment %lX",
     VAR_2);
release_buffers:
 for (VAR_6 -= 1; VAR_6 >= 0; VAR_6 -= 1)
  FUNC_3(VAR_4->bh[VAR_6]);

 VAR_4->sb = ((void*)0);

 return -VAR_0;
}
