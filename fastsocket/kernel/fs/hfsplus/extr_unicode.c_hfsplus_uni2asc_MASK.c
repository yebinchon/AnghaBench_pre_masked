
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct nls_table {int (* uni2char ) (int,char*,int) ;} ;
struct hfsplus_unistr {int const length; int * unicode; } ;
typedef int hfsplus_unichr ;
struct TYPE_2__ {int flags; struct nls_table* nls; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int const) ;
 int* FUNC_2 (int*,int) ;
 int* VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*,int) ;

int FUNC_6(struct super_block *VAR_9, const struct hfsplus_unistr *VAR_10, char *VAR_11, int *VAR_12)
{
 const hfsplus_unichr *VAR_13;
 struct nls_table *VAR_14 = FUNC_0(VAR_9).nls;
 u8 *VAR_15;
 u16 VAR_16, VAR_17, VAR_18;
 u16 *VAR_19, *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_15 = VAR_11;
 VAR_13 = VAR_10->unicode;
 VAR_23 = FUNC_1(VAR_10->length);
 VAR_22 = *VAR_12;
 VAR_19 = ((void*)0);
 VAR_25 = !(FUNC_0(VAR_9).flags & VAR_1);

 while (VAR_23 > 0) {
  VAR_17 = FUNC_1(*VAR_13++);
  VAR_23--;

  if (FUNC_3(VAR_25))
   VAR_19 = FUNC_2(VAR_8, VAR_17);
  if (VAR_19 && (VAR_16 = VAR_19[0])) {

   if (VAR_16 != 0xffff)
    goto done;
   if (!VAR_23)
    goto same;
   VAR_18 = FUNC_1(*VAR_13) - VAR_6;
   if (VAR_18 < VAR_7) {

    VAR_16 = (VAR_17 - VAR_2) * VAR_7;
    VAR_16 = (VAR_16 + VAR_18) * VAR_5;
    VAR_16 += VAR_3;
    VAR_13++;
    VAR_23--;
    if (!VAR_23)
     goto done;
    VAR_18 = FUNC_1(*VAR_13) - VAR_4;
    if (VAR_18 > 0 && VAR_18 < VAR_5) {
     VAR_16 += VAR_18;
     VAR_13++;
     VAR_23--;
    }
    goto done;
   }
  }
  while (1) {

   if (!VAR_23)
    goto same;
   VAR_18 = FUNC_1(*VAR_13);
   if (FUNC_3(VAR_25))
    VAR_19 = FUNC_2(VAR_8, VAR_18);
   if (VAR_19)
    break;
   switch (VAR_17) {
   case 0:
    VAR_17 = 0x2400;
    break;
   case '/':
    VAR_17 = ':';
    break;
   }
   VAR_24 = VAR_14->uni2char(VAR_17, VAR_15, VAR_22);
   if (VAR_24 < 0) {
    if (VAR_24 == -VAR_0)
     goto out;
    *VAR_15 = '?';
    VAR_24 = 1;
   }
   VAR_15 += VAR_24;
   VAR_22 -= VAR_24;
   VAR_17 = VAR_18;
   VAR_13++;
   VAR_23--;
  }
  VAR_20 = FUNC_2(VAR_19, VAR_17);
  if (VAR_20) {
   VAR_21 = 1;
   while (VAR_21 < VAR_23) {
    VAR_19 = FUNC_2(VAR_20, FUNC_1(VAR_13[VAR_21]));
    if (!VAR_19)
     break;
    VAR_21++;
    VAR_20 = VAR_19;
   }
   if ((VAR_16 = VAR_20[0])) {
    VAR_13 += VAR_21;
    VAR_23 -= VAR_21;
    goto done;
   }
  }
 same:
  switch (VAR_17) {
  case 0:
   VAR_16 = 0x2400;
   break;
  case '/':
   VAR_16 = ':';
   break;
  default:
   VAR_16 = VAR_17;
  }
 done:
  VAR_24 = VAR_14->uni2char(VAR_16, VAR_15, VAR_22);
  if (VAR_24 < 0) {
   if (VAR_24 == -VAR_0)
    goto out;
   *VAR_15 = '?';
   VAR_24 = 1;
  }
  VAR_15 += VAR_24;
  VAR_22 -= VAR_24;
 }
 VAR_24 = 0;
out:
 *VAR_12 = (char *)VAR_15 - VAR_11;
 return VAR_24;
}
