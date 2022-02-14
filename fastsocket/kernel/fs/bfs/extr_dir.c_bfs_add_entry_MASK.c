
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct inode {int i_size; void* i_mtime; void* i_ctime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_dirent {unsigned char* name; scalar_t__ ino; } ;
struct TYPE_2__ {int i_sblock; int i_eblock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned char const*,int) ;
 int FUNC_4 (struct buffer_head*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct buffer_head* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_7, const unsigned char *VAR_8,
       int VAR_9, int VAR_10)
{
 struct buffer_head *VAR_11;
 struct bfs_dirent *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_3("name=%s, namelen=%d\n", VAR_8, VAR_9);

 if (!VAR_9)
  return -VAR_5;
 if (VAR_9 > VAR_2)
  return -VAR_4;

 VAR_14 = FUNC_0(VAR_7)->i_sblock;
 VAR_15 = FUNC_0(VAR_7)->i_eblock;
 for (VAR_13 = VAR_14; VAR_13 <= VAR_15; VAR_13++) {
  VAR_11 = FUNC_6(VAR_7->i_sb, VAR_13);
  if (!VAR_11)
   return -VAR_6;
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16 += VAR_1) {
   VAR_12 = (struct bfs_dirent *)(VAR_11->b_data + VAR_16);
   if (!VAR_12->ino) {
    VAR_17 = (VAR_13 - VAR_14) * VAR_0 + VAR_16;
    if (VAR_17 >= VAR_7->i_size) {
     VAR_7->i_size += VAR_1;
     VAR_7->i_ctime = VAR_3;
    }
    VAR_7->i_mtime = VAR_3;
    FUNC_5(VAR_7);
    VAR_12->ino = FUNC_2((u16)VAR_10);
    for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
     VAR_12->name[VAR_18] =
      (VAR_18 < VAR_9) ? VAR_8[VAR_18] : 0;
    FUNC_4(VAR_11, VAR_7);
    FUNC_1(VAR_11);
    return 0;
   }
  }
  FUNC_1(VAR_11);
 }
 return -VAR_6;
}
