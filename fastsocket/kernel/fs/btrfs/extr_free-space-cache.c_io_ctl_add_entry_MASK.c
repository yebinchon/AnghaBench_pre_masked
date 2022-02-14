
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct io_ctl {int size; scalar_t__ index; scalar_t__ num_pages; struct btrfs_free_space_entry* cur; } ;
struct btrfs_free_space_entry {int type; void* bytes; void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct io_ctl*,int) ;
 int FUNC_2 (struct io_ctl*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct io_ctl *VAR_3, u64 VAR_4, u64 VAR_5,
       void *VAR_6)
{
 struct btrfs_free_space_entry *VAR_7;

 if (!VAR_3->cur)
  return -VAR_2;

 VAR_7 = VAR_3->cur;
 VAR_7->offset = FUNC_0(VAR_4);
 VAR_7->bytes = FUNC_0(VAR_5);
 VAR_7->type = (VAR_6) ? VAR_0 :
  VAR_1;
 VAR_3->cur += sizeof(struct btrfs_free_space_entry);
 VAR_3->size -= sizeof(struct btrfs_free_space_entry);

 if (VAR_3->size >= sizeof(struct btrfs_free_space_entry))
  return 0;

 FUNC_2(VAR_3, VAR_3->index - 1);


 if (VAR_3->index >= VAR_3->num_pages)
  return 0;


 FUNC_1(VAR_3, 1);
 return 0;
}
