
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
typedef int fs64 ;
typedef int befs_off_t ;
struct TYPE_6__ {int all_key_count; } ;
struct TYPE_7__ {TYPE_1__ head; } ;
typedef TYPE_2__ befs_btree_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct super_block*,TYPE_2__*,int,int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,char const*,int) ;
 int FUNC_3 (struct super_block*,char*,...) ;
 int FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(struct super_block *VAR_3, befs_btree_node * VAR_4,
       const char *VAR_5, befs_off_t * VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 u16 VAR_11;
 int VAR_12;
 char *VAR_13;
 fs64 *VAR_14;

 FUNC_3(VAR_3, "---> befs_find_key() %s", VAR_5);

 *VAR_6 = 0;

 VAR_12 = FUNC_5(VAR_5);


 VAR_8 = VAR_4->head.all_key_count - 1;
 VAR_13 = FUNC_0(VAR_3, VAR_4, VAR_8, &VAR_11);

 VAR_10 = FUNC_2(VAR_13, VAR_11, VAR_5, VAR_12);
 if (VAR_10 < 0) {
  FUNC_3(VAR_3, "<--- befs_find_key() %s not found", VAR_5);
  return VAR_1;
 }

 VAR_14 = FUNC_1(VAR_4);


 VAR_7 = 0;
 VAR_9 = 0;
 while (VAR_8 >= VAR_7) {
  VAR_9 = (VAR_8 + VAR_7) / 2;
  FUNC_3(VAR_3, "first: %d, last: %d, mid: %d", VAR_7, VAR_8,
      VAR_9);
  VAR_13 = FUNC_0(VAR_3, VAR_4, VAR_9, &VAR_11);
  VAR_10 = FUNC_2(VAR_13, VAR_11, VAR_5,
       VAR_12);

  if (VAR_10 == 0) {
   FUNC_3(VAR_3, "<--- befs_find_key() found %s at %d",
       VAR_13, VAR_9);

   *VAR_6 = FUNC_4(VAR_3, VAR_14[VAR_9]);
   return VAR_0;
  }
  if (VAR_10 > 0)
   VAR_8 = VAR_9 - 1;
  else
   VAR_7 = VAR_9 + 1;
 }
 if (VAR_10 < 0)
  *VAR_6 = FUNC_4(VAR_3, VAR_14[VAR_9 + 1]);
 else
  *VAR_6 = FUNC_4(VAR_3, VAR_14[VAR_9]);
 FUNC_3(VAR_3, "<--- befs_find_key() found %s at %d", VAR_13, VAR_9);
 return VAR_2;
}
