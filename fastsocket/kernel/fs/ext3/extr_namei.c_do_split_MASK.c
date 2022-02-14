
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {TYPE_1__* i_sb; } ;
struct ext3_dir_entry_2 {void* rec_len; } ;
struct dx_map_entry {int size; scalar_t__ hash; } ;
struct dx_hash_info {scalar_t__ hash; } ;
struct dx_frame {int entries; struct buffer_head* bh; int at; } ;
struct buffer_head {char* b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dx_frame*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_4 (struct ext3_dir_entry_2*,unsigned int,struct dx_hash_info*,struct dx_map_entry*) ;
 struct ext3_dir_entry_2* FUNC_5 (char*,char*,struct dx_map_entry*,unsigned int) ;
 struct ext3_dir_entry_2* FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct dx_hash_info*,struct ext3_dir_entry_2*,unsigned int,int) ;
 int FUNC_9 (struct dx_map_entry*,unsigned int) ;
 int FUNC_10 (int ) ;
 struct buffer_head* FUNC_11 (int *,struct inode*,scalar_t__*,int*) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (char*,int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_17 (struct buffer_head*,struct buffer_head*) ;

__attribute__((used)) static struct ext3_dir_entry_2 *FUNC_18(handle_t *VAR_0, struct inode *VAR_1,
   struct buffer_head **VAR_2,struct dx_frame *VAR_3,
   struct dx_hash_info *VAR_4, int *VAR_5)
{
 unsigned VAR_6 = VAR_1->i_sb->s_blocksize;
 unsigned VAR_7, VAR_8;
 struct buffer_head *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct dx_map_entry *VAR_12;
 char *VAR_13 = (*VAR_2)->b_data, *VAR_14;
 unsigned VAR_15, VAR_16, VAR_17;
 struct ext3_dir_entry_2 *VAR_18 = ((void*)0), *VAR_19;
 int VAR_20 = 0, VAR_21;

 VAR_9 = FUNC_11 (VAR_0, VAR_1, &VAR_10, &VAR_20);
 if (!(VAR_9)) {
  FUNC_1(*VAR_2);
  *VAR_2 = ((void*)0);
  goto errout;
 }

 FUNC_0(*VAR_2, "get_write_access");
 VAR_20 = FUNC_13(VAR_0, *VAR_2);
 if (VAR_20)
  goto journal_error;

 FUNC_0(VAR_3->bh, "get_write_access");
 VAR_20 = FUNC_13(VAR_0, VAR_3->bh);
 if (VAR_20)
  goto journal_error;

 VAR_14 = VAR_9->b_data;


 VAR_12 = (struct dx_map_entry *) (VAR_14 + VAR_6);
 VAR_7 = FUNC_4 ((struct ext3_dir_entry_2 *) VAR_13,
        VAR_6, VAR_4, VAR_12);
 VAR_12 -= VAR_7;
 FUNC_9 (VAR_12, VAR_7);

 VAR_17 = 0;
 VAR_16 = 0;
 for (VAR_21 = VAR_7-1; VAR_21 >= 0; VAR_21--) {

  if (VAR_17 + VAR_12[VAR_21].size/2 > VAR_6/2)
   break;
  VAR_17 += VAR_12[VAR_21].size;
  VAR_16++;
 }

 VAR_15 = VAR_7 - VAR_16;
 VAR_11 = VAR_12[VAR_15].hash;
 VAR_8 = VAR_11 == VAR_12[VAR_15 - 1].hash;
 FUNC_10(FUNC_16("Split block %i at %x, %i/%i\n",
  FUNC_2(VAR_3->at), VAR_11, VAR_15, VAR_7-VAR_15));


 VAR_19 = FUNC_5(VAR_13, VAR_14, VAR_12 + VAR_15, VAR_7 - VAR_15);
 VAR_18 = FUNC_6(VAR_13,VAR_6);
 VAR_18->rec_len = FUNC_14(VAR_13 + VAR_6 - (char *) VAR_18);
 VAR_19->rec_len = FUNC_14(VAR_14 + VAR_6 - (char *) VAR_19);
 FUNC_10(FUNC_8 (VAR_4, (struct ext3_dir_entry_2 *) VAR_13, VAR_6, 1));
 FUNC_10(FUNC_8 (VAR_4, (struct ext3_dir_entry_2 *) VAR_14, VAR_6, 1));


 if (VAR_4->hash >= VAR_11)
 {
  FUNC_17(*VAR_2, VAR_9);
  VAR_18 = VAR_19;
 }
 FUNC_3 (VAR_3, VAR_11 + VAR_8, VAR_10);
 VAR_20 = FUNC_12 (VAR_0, VAR_9);
 if (VAR_20)
  goto journal_error;
 VAR_20 = FUNC_12 (VAR_0, VAR_3->bh);
 if (VAR_20)
  goto journal_error;
 FUNC_1 (VAR_9);
 FUNC_10(FUNC_7 ("frame", VAR_3->entries));
 return VAR_18;

journal_error:
 FUNC_1(*VAR_2);
 FUNC_1(VAR_9);
 *VAR_2 = ((void*)0);
 FUNC_15(VAR_1->i_sb, VAR_20);
errout:
 *VAR_5 = VAR_20;
 return ((void*)0);
}
