
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pstore {TYPE_2__* store; void* version; void* valid; struct disk_header* header_area; int io_client; } ;
struct disk_header {int chunk_size; int version; int valid; int magic; } ;
struct TYPE_4__ {int chunk_size; int chunk_mask; scalar_t__ chunk_shift; int snap; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (char*,unsigned int,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_4 (struct pstore*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pstore*,struct disk_header*,int ,int ,int) ;
 int FUNC_7 (TYPE_2__*,unsigned int,char**) ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct pstore*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14(struct pstore *VAR_4, int *VAR_5)
{
 int VAR_6;
 struct disk_header *VAR_7;
 unsigned VAR_8;
 int VAR_9 = 1;
 char *VAR_10;





 if (!VAR_4->store->chunk_size) {
  VAR_4->store->chunk_size = FUNC_13(VAR_0,
      FUNC_5(FUNC_9(VAR_4->store->snap)->
         bdev) >> 9);
  VAR_4->store->chunk_mask = VAR_4->store->chunk_size - 1;
  VAR_4->store->chunk_shift = FUNC_10(VAR_4->store->chunk_size) - 1;
  VAR_9 = 0;
 }

 VAR_4->io_client = FUNC_8();
 if (FUNC_2(VAR_4->io_client))
  return FUNC_3(VAR_4->io_client);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_4, VAR_4->header_area, 0, VAR_2, 1);
 if (VAR_6)
  goto bad;

 VAR_7 = VAR_4->header_area;

 if (FUNC_12(VAR_7->magic) == 0) {
  *VAR_5 = 1;
  return 0;
 }

 if (FUNC_12(VAR_7->magic) != VAR_3) {
  FUNC_1("Invalid or corrupt snapshot");
  VAR_6 = -VAR_1;
  goto bad;
 }

 *VAR_5 = 0;
 VAR_4->valid = FUNC_12(VAR_7->valid);
 VAR_4->version = FUNC_12(VAR_7->version);
 VAR_8 = FUNC_12(VAR_7->chunk_size);

 if (VAR_4->store->chunk_size == VAR_8)
  return 0;

 if (VAR_9)
  FUNC_1("chunk size %u in device metadata overrides "
         "table chunk size of %u.",
         VAR_8, VAR_4->store->chunk_size);


 FUNC_11(VAR_4);

 VAR_6 = FUNC_7(VAR_4->store, VAR_8,
           &VAR_10);
 if (VAR_6) {
  FUNC_0("invalid on-disk chunk size %u: %s.",
        VAR_8, VAR_10);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4);
 return VAR_6;

bad:
 FUNC_11(VAR_4);
 return VAR_6;
}
