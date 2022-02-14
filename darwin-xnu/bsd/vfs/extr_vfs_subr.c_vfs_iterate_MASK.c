
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_lflag; } ;
typedef struct mount* mount_t ;
typedef int fsid_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mount*) ;
 struct mount* FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;

int
FUNC_8(int VAR_4, int (*VAR_5)(mount_t, void *), void *VAR_6)
{
 mount_t VAR_7;
 int VAR_8 = 0;
 fsid_t * VAR_9;
 int VAR_10, VAR_11, VAR_12;
 void * VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17 = (VAR_4 & VAR_2);

 VAR_10 = FUNC_3();
 VAR_10 += 10;

 VAR_9 = (fsid_t *)FUNC_0(VAR_10 * sizeof(fsid_t));
 VAR_13 = (void *)VAR_9;

 VAR_11 = FUNC_2(VAR_9, VAR_10);





 if (VAR_4 & VAR_3) {
  VAR_14 = VAR_11 - 1;
  VAR_15 = -1;
  VAR_16 = -1;
 } else {
  VAR_14 = 0;
  VAR_15 = VAR_11;
  VAR_16 = 1;
 }

 for (VAR_12=VAR_14; VAR_12 != VAR_15; VAR_12 += VAR_16) {


  VAR_7 = FUNC_5(&VAR_9[VAR_12], 0, 1);

  if(VAR_7 == (struct mount *)0)
   continue;
  FUNC_6(VAR_7);
  if (VAR_7->mnt_lflag & (VAR_0 | VAR_1)) {
   FUNC_7(VAR_7);
   FUNC_4(VAR_7);
   continue;

  }
  FUNC_7(VAR_7);


  VAR_8 = VAR_5(VAR_7, VAR_6);





  if (!VAR_17)
   FUNC_4(VAR_7);

  switch (VAR_8) {
  case 129:
  case 128:
   if (VAR_8 == 128) {
    VAR_8 = 0;
    goto out;
   }
   break;

  case 130:
   VAR_8 = 0;
   goto out;
  case 131:
  default:
   break;
  }
  VAR_8 = 0;
 }

out:
 FUNC_1(VAR_13, (VAR_10 * sizeof(fsid_t)));
 return (VAR_8);
}
