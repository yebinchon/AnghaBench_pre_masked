
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ns_mem {int dummy; } ns_mem ;
struct TYPE_6__ {int pgnum; int pgszoob; } ;
struct nandsim {void* pages_written; int nand_pages_slab; TYPE_3__ geom; TYPE_2__* pages; struct file* cfile; int file_buf; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_5__ {int * byte; } ;
struct TYPE_4__ {int aio_write; int write; int aio_read; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct file*,int *) ;
 struct file* FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,int ,int ,int *) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nandsim *VAR_7)
{
 struct file *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_6) {
  VAR_8 = FUNC_4(VAR_6, VAR_3 | VAR_5 | VAR_4, 0600);
  if (FUNC_0(VAR_8))
   return FUNC_2(VAR_8);
  if (!VAR_8->f_op || (!VAR_8->f_op->read && !VAR_8->f_op->aio_read)) {
   FUNC_1("alloc_device: cache file not readable\n");
   VAR_10 = -VAR_0;
   goto err_close;
  }
  if (!VAR_8->f_op->write && !VAR_8->f_op->aio_write) {
   FUNC_1("alloc_device: cache file not writeable\n");
   VAR_10 = -VAR_0;
   goto err_close;
  }
  VAR_7->pages_written = FUNC_9(VAR_7->geom.pgnum);
  if (!VAR_7->pages_written) {
   FUNC_1("alloc_device: unable to allocate pages written array\n");
   VAR_10 = -VAR_1;
   goto err_close;
  }
  VAR_7->file_buf = FUNC_5(VAR_7->geom.pgszoob, VAR_2);
  if (!VAR_7->file_buf) {
   FUNC_1("alloc_device: unable to allocate file buf\n");
   VAR_10 = -VAR_1;
   goto err_free;
  }
  VAR_7->cfile = VAR_8;
  FUNC_7(VAR_7->pages_written, 0, VAR_7->geom.pgnum);
  return 0;
 }

 VAR_7->pages = FUNC_9(VAR_7->geom.pgnum * sizeof(union ns_mem));
 if (!VAR_7->pages) {
  FUNC_1("alloc_device: unable to allocate page array\n");
  return -VAR_1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_7->geom.pgnum; VAR_9++) {
  VAR_7->pages[VAR_9].byte = ((void*)0);
 }
 VAR_7->nand_pages_slab = FUNC_6("nandsim",
      VAR_7->geom.pgszoob, 0, 0, ((void*)0));
 if (!VAR_7->nand_pages_slab) {
  FUNC_1("cache_create: unable to create kmem_cache\n");
  return -VAR_1;
 }

 return 0;

err_free:
 FUNC_8(VAR_7->pages_written);
err_close:
 FUNC_3(VAR_8, ((void*)0));
 return VAR_10;
}
