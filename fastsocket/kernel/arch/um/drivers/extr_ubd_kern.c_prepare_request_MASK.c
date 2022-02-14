
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitmap_len; int bitmap_offset; int bitmap; int * file; int data_offset; int fd; } ;
struct ubd {TYPE_1__ cow; int fd; } ;
struct request {struct gendisk* rq_disk; } ;
struct page {int dummy; } ;
struct io_thread_req {int cow_offset; unsigned long long offset; int length; int sectorsize; scalar_t__ buffer; int * offsets; int op; scalar_t__ sector_mask; scalar_t__ error; int * fds; struct request* req; } ;
struct gendisk {struct ubd* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct io_thread_req*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_3, struct io_thread_req *VAR_4,
       unsigned long long VAR_5, int VAR_6,
       int VAR_7, struct page *VAR_8)
{
 struct gendisk *VAR_9 = VAR_3->rq_disk;
 struct ubd *VAR_10 = VAR_9->private_data;

 VAR_4->req = VAR_3;
 VAR_4->fds[0] = (VAR_10->cow.file != ((void*)0)) ? VAR_10->cow.fd :
  VAR_10->fd;
 VAR_4->fds[1] = VAR_10->fd;
 VAR_4->cow_offset = -1;
 VAR_4->offset = VAR_5;
 VAR_4->length = VAR_7;
 VAR_4->error = 0;
 VAR_4->sector_mask = 0;

 VAR_4->op = (FUNC_2(VAR_3) == VAR_0) ? VAR_1 : VAR_2;
 VAR_4->offsets[0] = 0;
 VAR_4->offsets[1] = VAR_10->cow.data_offset;
 VAR_4->buffer = FUNC_1(VAR_8) + VAR_6;
 VAR_4->sectorsize = 1 << 9;

 if(VAR_10->cow.file != ((void*)0))
  FUNC_0(VAR_4, VAR_10->cow.bitmap,
      VAR_10->cow.bitmap_offset, VAR_10->cow.bitmap_len);

}
