
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {unsigned long weight; unsigned int iops; scalar_t__ bps; } ;
struct blkio_policy_node {int plid; int fileid; TYPE_1__ val; int dev; } ;
typedef int s ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;
typedef int dev_t ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ VAR_4 ;
 struct gendisk* FUNC_2 (int ,int*) ;
 int FUNC_3 (char**,int ,int) ;
 int FUNC_4 (struct gendisk*) ;
 int FUNC_5 (char*,int,unsigned long*) ;
 int FUNC_6 (char*,int,scalar_t__*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(char *VAR_5,
 struct blkio_policy_node *VAR_6, enum blkio_policy_id VAR_7, int VAR_8)
{
 struct gendisk *VAR_9 = ((void*)0);
 char *VAR_10[4], *VAR_11, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 unsigned long VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = -VAR_2;
 int VAR_19;
 dev_t VAR_20;
 u64 VAR_21, VAR_22;

 FUNC_3(VAR_10, 0, sizeof(VAR_10));

 while ((VAR_11 = FUNC_7(&VAR_5, " ")) != ((void*)0)) {
  if (!*VAR_11)
   continue;

  VAR_10[VAR_17++] = VAR_11;


  if (VAR_17 == 3)
   break;
 }

 if (VAR_17 != 2)
  goto out;

 VAR_11 = FUNC_7(&VAR_10[0], ":");
 if (VAR_11 != ((void*)0))
  VAR_12 = VAR_11;
 else
  goto out;

 VAR_13 = VAR_10[0];
 if (!VAR_13)
  goto out;

 if (FUNC_5(VAR_12, 10, &VAR_14))
  goto out;

 if (FUNC_5(VAR_13, 10, &VAR_15))
  goto out;

 VAR_20 = FUNC_1(VAR_14, VAR_15);

 VAR_9 = FUNC_2(VAR_20, &VAR_19);
 if (!VAR_9 || VAR_19) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_6->dev = VAR_20;

 if (VAR_10[1] == ((void*)0))
  return -VAR_2;

 switch (VAR_7) {
 case 133:
  VAR_18 = FUNC_5(VAR_10[1], 10, &VAR_16);
  if (VAR_18 || (VAR_16 < VAR_1 && VAR_16 > 0) ||
   VAR_16 > VAR_0)
   goto out;

  VAR_6->plid = VAR_7;
  VAR_6->fileid = VAR_8;
  VAR_6->val.weight = VAR_16;
  break;
 case 132:
  switch(VAR_8) {
  case 131:
  case 129:
   if (FUNC_6(VAR_10[1], 10, &VAR_21))
    goto out;

   VAR_6->plid = VAR_7;
   VAR_6->fileid = VAR_8;
   VAR_6->val.bps = VAR_21;
   break;
  case 130:
  case 128:
   if (FUNC_6(VAR_10[1], 10, &VAR_22))
    goto out;

   if (VAR_22 > VAR_4)
    goto out;

   VAR_6->plid = VAR_7;
   VAR_6->fileid = VAR_8;
   VAR_6->val.iops = (unsigned int)VAR_22;
   break;
  }
  break;
 default:
  FUNC_0();
 }
 VAR_18 = 0;
out:
 FUNC_4(VAR_9);
 return VAR_18;
}
