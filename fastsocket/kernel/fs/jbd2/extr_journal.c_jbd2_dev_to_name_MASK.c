
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devname_cache {scalar_t__ device; char* devname; int rcu; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (struct block_device*,char*) ;
 struct block_device* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (int *,int ) ;
 struct devname_cache** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct devname_cache*) ;
 struct devname_cache* FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

const char *FUNC_12(dev_t VAR_5)
{
 int VAR_6 = FUNC_5(VAR_5, VAR_0);
 char *VAR_7;
 struct block_device *VAR_8;
 static struct devname_cache *VAR_9;

 FUNC_8();
 if (VAR_2[VAR_6] && VAR_2[VAR_6]->device == VAR_5) {
  VAR_7 = VAR_2[VAR_6]->devname;
  FUNC_9();
  return VAR_7;
 }
 FUNC_9();

 VAR_9 = FUNC_7(sizeof(struct devname_cache), VAR_1);
 if (!VAR_9)
  return "NODEV-ALLOCFAILURE";
 FUNC_10(&VAR_3);
 if (VAR_2[VAR_6]) {
  if (VAR_2[VAR_6]->device == VAR_5) {
   FUNC_6(VAR_9);
   VAR_7 = VAR_2[VAR_6]->devname;
   FUNC_11(&VAR_3);
   return VAR_7;
  }
  FUNC_4(&VAR_2[VAR_6]->rcu, VAR_4);
 }
 VAR_2[VAR_6] = VAR_9;
 VAR_2[VAR_6]->device = VAR_5;
 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_8, VAR_2[VAR_6]->devname);
  FUNC_3(VAR_8);
 } else
  FUNC_0(VAR_5, VAR_2[VAR_6]->devname);
 VAR_7 = VAR_2[VAR_6]->devname;
 FUNC_11(&VAR_3);
 return VAR_7;
}
