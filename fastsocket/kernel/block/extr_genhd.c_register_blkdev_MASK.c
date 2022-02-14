
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_major_name {unsigned int major; struct blk_major_name* next; int name; } ;


 int FUNC_0 (struct blk_major_name**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct blk_major_name*) ;
 struct blk_major_name* FUNC_2 (int,int ) ;
 struct blk_major_name** VAR_4 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char const*,int) ;

int FUNC_8(unsigned int VAR_5, const char *VAR_6)
{
 struct blk_major_name **VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_4(&VAR_3);


 if (VAR_5 == 0) {
  for (VAR_9 = FUNC_0(VAR_4)-1; VAR_9 > 0; VAR_9--) {
   if (VAR_4[VAR_9] == ((void*)0))
    break;
  }

  if (VAR_9 == 0) {
   FUNC_6("register_blkdev: failed to get major for %s\n",
          VAR_6);
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_5 = VAR_9;
  VAR_10 = VAR_5;
 }

 VAR_8 = FUNC_2(sizeof(struct blk_major_name), VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_8->major = VAR_5;
 FUNC_7(VAR_8->name, VAR_6, sizeof(VAR_8->name));
 VAR_8->next = ((void*)0);
 VAR_9 = FUNC_3(VAR_5);

 for (VAR_7 = &VAR_4[VAR_9]; *VAR_7; VAR_7 = &(*VAR_7)->next) {
  if ((*VAR_7)->major == VAR_5)
   break;
 }
 if (!*VAR_7)
  *VAR_7 = VAR_8;
 else
  VAR_10 = -VAR_0;

 if (VAR_10 < 0) {
  FUNC_6("register_blkdev: cannot get major %d for %s\n",
         VAR_5, VAR_6);
  FUNC_1(VAR_8);
 }
out:
 FUNC_5(&VAR_3);
 return VAR_10;
}
