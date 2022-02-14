
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct gfs2_inode {int dummy; } ;
struct TYPE_2__ {int no_addr; } ;
struct gfs2_dirent {int de_type; TYPE_1__ de_inum; int de_name_len; int de_hash; } ;
typedef int (* filldir_t ) (void*,char const*,int ,scalar_t__,int ,int ) ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct gfs2_dirent const**,unsigned int,int,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_1, u64 *VAR_2,
      void *VAR_3, filldir_t VAR_4,
      const struct gfs2_dirent **VAR_5, u32 VAR_6,
      int *VAR_7)
{
 const struct gfs2_dirent *VAR_8, *VAR_9;
 u64 VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;

 FUNC_4(VAR_5, VAR_6, sizeof(struct gfs2_dirent *), VAR_0, ((void*)0));

 VAR_9 = VAR_5[0];
 VAR_11 = FUNC_1(VAR_9->de_hash);
 VAR_11 = FUNC_3(VAR_11);

 for (VAR_12 = 0, VAR_13 = 1; VAR_12 < VAR_6; VAR_12++, VAR_13++) {
  VAR_8 = VAR_9;
  VAR_10 = VAR_11;

  if (VAR_13 < VAR_6) {
   VAR_9 = VAR_5[VAR_13];
   VAR_11 = FUNC_1(VAR_9->de_hash);
   VAR_11 = FUNC_3(VAR_11);

   if (VAR_10 < *VAR_2)
    continue;
   *VAR_2 = VAR_10;

   if (VAR_11 == VAR_10) {
    if (*VAR_7 && !VAR_14)
     return 1;
    VAR_14 = 1;
   } else
    VAR_14 = 0;
  } else {
   if (VAR_10 < *VAR_2)
    continue;
   *VAR_2 = VAR_10;
  }

  VAR_15 = VAR_4(VAR_3, (const char *)(VAR_8 + 1),
    FUNC_0(VAR_8->de_name_len),
    VAR_10, FUNC_2(VAR_8->de_inum.no_addr),
    FUNC_0(VAR_8->de_type));
  if (VAR_15)
   return 1;

  *VAR_7 = 1;
 }





 (*VAR_2)++;

 return 0;
}
