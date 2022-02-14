
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unique; int vnode; int name; } ;
union afs_dirent {TYPE_2__ u; } ;
struct TYPE_3__ {unsigned int nentries; int* bitmap; } ;
union afs_dir_block {TYPE_1__ pagehdr; union afs_dirent* dirents; } ;
typedef int (* filldir_t ) (void*,int ,size_t,unsigned int,int ,int ) ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (char*,unsigned int,unsigned int,union afs_dir_block*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,size_t,unsigned int,int ,int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(unsigned *VAR_3,
     union afs_dir_block *VAR_4,
     unsigned VAR_5,
     void *VAR_6,
     filldir_t VAR_7)
{
 union afs_dirent *VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;
 size_t VAR_12;
 int VAR_13, VAR_14;

 FUNC_1("%u,%x,%p,,",*VAR_3,VAR_5,VAR_4);

 VAR_11 = (*VAR_3 - VAR_5) / sizeof(union afs_dirent);


 for (VAR_9 = VAR_0 - VAR_4->pagehdr.nentries;
      VAR_9 < VAR_0;
      VAR_9 = VAR_10
      ) {
  VAR_10 = VAR_9 + 1;


  if (!(VAR_4->pagehdr.bitmap[VAR_9 / 8] &
        (1 << (VAR_9 % 8)))) {
   FUNC_0("ENT[%Zu.%u]: unused",
          VAR_5 / sizeof(union afs_dir_block), VAR_9);
   if (VAR_9 >= VAR_11)
    *VAR_3 = VAR_5 +
     VAR_10 * sizeof(union afs_dirent);
   continue;
  }


  VAR_8 = &VAR_4->dirents[VAR_9];
  VAR_12 = FUNC_5(VAR_8->u.name,
          sizeof(*VAR_4) -
          VAR_9 * sizeof(union afs_dirent));

  FUNC_0("ENT[%Zu.%u]: %s %Zu \"%s\"",
         VAR_5 / sizeof(union afs_dir_block), VAR_9,
         (VAR_9 < VAR_11 ? "skip" : "fill"),
         VAR_12, VAR_8->u.name);


  for (VAR_13 = VAR_12; VAR_13 > 15; VAR_13 -= sizeof(union afs_dirent)) {
   if (VAR_10 >= VAR_0) {
    FUNC_0("ENT[%Zu.%u]:"
           " %u travelled beyond end dir block"
           " (len %u/%Zu)",
           VAR_5 / sizeof(union afs_dir_block),
           VAR_9, VAR_10, VAR_13, VAR_12);
    return -VAR_2;
   }
   if (!(VAR_4->pagehdr.bitmap[VAR_10 / 8] &
         (1 << (VAR_10 % 8)))) {
    FUNC_0("ENT[%Zu.%u]:"
           " %u unmarked extension (len %u/%Zu)",
           VAR_5 / sizeof(union afs_dir_block),
           VAR_9, VAR_10, VAR_13, VAR_12);
    return -VAR_2;
   }

   FUNC_0("ENT[%Zu.%u]: ext %u/%Zu",
          VAR_5 / sizeof(union afs_dir_block),
          VAR_10, VAR_13, VAR_12);
   VAR_10++;
  }


  if (VAR_9 < VAR_11)
   continue;


  VAR_14 = VAR_7(VAR_6,
         VAR_8->u.name,
         VAR_12,
         VAR_5 + VAR_9 * sizeof(union afs_dirent),
         FUNC_4(VAR_8->u.vnode),
         VAR_7 == FUNC_3 ?
         FUNC_4(VAR_8->u.unique) : VAR_1);
  if (VAR_14 < 0) {
   FUNC_2(" = 0 [full]");
   return 0;
  }

  *VAR_3 = VAR_5 + VAR_10 * sizeof(union afs_dirent);
 }

 FUNC_2(" = 1 [more]");
 return 1;
}
