
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {int uuid_list; int md; int name_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hash_cell* FUNC_0 (char const*) ;
 struct hash_cell* FUNC_1 (char const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hash_cell* FUNC_2 (char const*,char const*,struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mapped_device*,struct hash_cell*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hash_cell*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(const char *VAR_6, const char *VAR_7, struct mapped_device *VAR_8)
{
 struct hash_cell *VAR_9, *VAR_10;




 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 if (!VAR_9)
  return -VAR_1;




 FUNC_6(&VAR_2);
 VAR_10 = FUNC_0(VAR_6);
 if (VAR_10) {
  FUNC_4(VAR_10->md);
  goto bad;
 }

 FUNC_9(&VAR_9->name_list, VAR_3 + FUNC_8(VAR_6));

 if (VAR_7) {
  VAR_10 = FUNC_1(VAR_7);
  if (VAR_10) {
   FUNC_10(&VAR_9->name_list);
   FUNC_4(VAR_10->md);
   goto bad;
  }
  FUNC_9(&VAR_9->uuid_list, VAR_4 + FUNC_8(VAR_7));
 }
 FUNC_3(VAR_8);
 FUNC_11(&VAR_5);
 FUNC_5(VAR_8, VAR_9);
 FUNC_12(&VAR_5);
 FUNC_13(&VAR_2);

 return 0;

 bad:
 FUNC_13(&VAR_2);
 FUNC_7(VAR_9);
 return -VAR_0;
}
