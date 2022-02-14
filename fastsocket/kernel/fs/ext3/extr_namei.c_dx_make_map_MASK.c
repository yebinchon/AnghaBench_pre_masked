
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ext3_dir_entry_2 {int rec_len; scalar_t__ name_len; int name; scalar_t__ inode; } ;
struct dx_map_entry {int size; scalar_t__ offs; int hash; } ;
struct dx_hash_info {int hash; } ;


 int FUNC_0 () ;
 struct ext3_dir_entry_2* FUNC_1 (struct ext3_dir_entry_2*) ;
 int FUNC_2 (int ,scalar_t__,struct dx_hash_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ext3_dir_entry_2 *VAR_0, unsigned VAR_1,
  struct dx_hash_info *VAR_2, struct dx_map_entry *VAR_3)
{
 int VAR_4 = 0;
 char *VAR_5 = (char *) VAR_0;
 struct dx_hash_info VAR_6 = *VAR_2;

 while ((char *) VAR_0 < VAR_5 + VAR_1)
 {
  if (VAR_0->name_len && VAR_0->inode) {
   FUNC_2(VAR_0->name, VAR_0->name_len, &VAR_6);
   VAR_3--;
   VAR_3->hash = VAR_6.hash;
   VAR_3->offs = (u16) ((char *) VAR_0 - VAR_5);
   VAR_3->size = FUNC_3(VAR_0->rec_len);
   VAR_4++;
   FUNC_0();
  }

  VAR_0 = FUNC_1(VAR_0);
 }
 return VAR_4;
}
