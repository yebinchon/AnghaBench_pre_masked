
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned long i_size; int i_sb; } ;
struct buffer_head {unsigned long b_size; scalar_t__ b_data; } ;
struct bfs_dirent {int name; int ino; } ;
struct TYPE_2__ {scalar_t__ i_sblock; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned char const*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct buffer_head* FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static struct buffer_head *FUNC_5(struct inode *VAR_3,
   const unsigned char *VAR_4, int VAR_5,
   struct bfs_dirent **VAR_6)
{
 unsigned long VAR_7 = 0, VAR_8 = 0;
 struct buffer_head *VAR_9 = ((void*)0);
 struct bfs_dirent *VAR_10;

 *VAR_6 = ((void*)0);
 if (VAR_5 > VAR_2)
  return ((void*)0);

 while (VAR_7 * VAR_0 + VAR_8 < VAR_3->i_size) {
  if (!VAR_9) {
   VAR_9 = FUNC_4(VAR_3->i_sb, FUNC_0(VAR_3)->i_sblock + VAR_7);
   if (!VAR_9) {
    VAR_7++;
    continue;
   }
  }
  VAR_10 = (struct bfs_dirent *)(VAR_9->b_data + VAR_8);
  VAR_8 += VAR_1;
  if (FUNC_3(VAR_10->ino) &&
    FUNC_1(VAR_5, VAR_4, VAR_10->name)) {
   *VAR_6 = VAR_10;
   return VAR_9;
  }
  if (VAR_8 < VAR_9->b_size)
   continue;
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
  VAR_8 = 0;
  VAR_7++;
 }
 FUNC_2(VAR_9);
 return ((void*)0);
}
