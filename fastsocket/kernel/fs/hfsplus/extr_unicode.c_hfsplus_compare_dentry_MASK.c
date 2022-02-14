
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct qstr {char* name; int len; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__ FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__,int*) ;

int FUNC_4(struct dentry *VAR_2, struct qstr *VAR_3, struct qstr *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->d_sb;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 const u16 *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;
 u16 VAR_17, VAR_18;
 wchar_t VAR_19;

 VAR_6 = (FUNC_0(VAR_5).flags & VAR_0);
 VAR_7 = !(FUNC_0(VAR_5).flags & VAR_1);
 VAR_15 = VAR_3->name;
 VAR_11 = VAR_3->len;
 VAR_16 = VAR_4->name;
 VAR_12 = VAR_4->len;
 VAR_9 = VAR_10 = 0;
 VAR_13 = VAR_14 = ((void*)0);

 while (VAR_11 > 0 && VAR_12 > 0) {
  if (!VAR_9) {
   VAR_8 = FUNC_1(VAR_5, VAR_15, VAR_11, &VAR_19);
   VAR_15 += VAR_8;
   VAR_11 -= VAR_8;

   if (!VAR_7 || !(VAR_13 = FUNC_3(VAR_19, &VAR_9))) {
    VAR_17 = VAR_19;
    VAR_13 = &VAR_17;
    VAR_9 = 1;
   }
  }

  if (!VAR_10) {
   VAR_8 = FUNC_1(VAR_5, VAR_16, VAR_12, &VAR_19);
   VAR_16 += VAR_8;
   VAR_12 -= VAR_8;

   if (!VAR_7 || !(VAR_14 = FUNC_3(VAR_19, &VAR_10))) {
    VAR_18 = VAR_19;
    VAR_14 = &VAR_18;
    VAR_10 = 1;
   }
  }

  VAR_17 = *VAR_13;
  VAR_18 = *VAR_14;
  if (VAR_6) {
   if (!(VAR_17 = FUNC_2(VAR_17))) {
    VAR_13++;
    VAR_9--;
    continue;
   }
   if (!(VAR_18 = FUNC_2(VAR_18))) {
    VAR_14++;
    VAR_10--;
    continue;
   }
  }
  if (VAR_17 < VAR_18)
   return -1;
  else if (VAR_17 > VAR_18)
   return 1;

  VAR_13++;
  VAR_9--;
  VAR_14++;
  VAR_10--;
 }

 if (VAR_11 < VAR_12)
  return -1;
 if (VAR_11 > VAR_12)
  return 1;
 return 0;
}
