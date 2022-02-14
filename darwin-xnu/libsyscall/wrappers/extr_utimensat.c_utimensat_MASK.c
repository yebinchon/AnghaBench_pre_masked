
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int times_in ;
struct timespec {int dummy; } ;
struct attrlist {int commonattr; int bitmapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec**,struct timespec const*,int) ;
 int FUNC_1 (struct timespec*,struct timespec*,size_t*) ;
 int FUNC_2 (int,char const*,struct attrlist*,struct timespec**,size_t,int) ;
 struct timespec const* VAR_3 ;

int
FUNC_3(int VAR_4, const char *VAR_5, const struct timespec VAR_6[2], int VAR_7)
{
 struct timespec VAR_8[2];
 if (VAR_6 != ((void*)0)) {
  FUNC_0(&VAR_8, VAR_6, sizeof(VAR_8));
 } else {
  FUNC_0(&VAR_8, VAR_3, sizeof(VAR_8));
 }

 size_t VAR_9 = 0;
 struct timespec VAR_10[2] = {};
 struct attrlist VAR_11 = {
  .bitmapcount = VAR_0
 };
 VAR_11.commonattr = FUNC_1(VAR_8, VAR_10, &VAR_9);

 int VAR_12 = 0;
 if (VAR_7 & VAR_1) {
  VAR_12 |= VAR_2;
 }

 return FUNC_2(VAR_4, VAR_5, &VAR_11, &VAR_10, VAR_9, VAR_12);
}
