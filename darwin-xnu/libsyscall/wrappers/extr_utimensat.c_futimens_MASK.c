
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int times_in ;
struct timespec {int dummy; } ;
struct attrlist {int commonattr; int bitmapcount; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct attrlist*,struct timespec**,size_t,int ) ;
 int FUNC_1 (struct timespec**,struct timespec const*,int) ;
 int FUNC_2 (struct timespec*,struct timespec*,size_t*) ;
 struct timespec const* VAR_1 ;

int
FUNC_3(int VAR_2, const struct timespec VAR_3[2])
{
 struct timespec VAR_4[2];
 if (VAR_3 != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_3, sizeof(VAR_4));
 } else {
  FUNC_1(&VAR_4, VAR_1, sizeof(VAR_4));
 }

 size_t VAR_5 = 0;
 struct timespec VAR_6[2] = {};
 struct attrlist VAR_7 = {
  .bitmapcount = VAR_0
 };
 VAR_7.commonattr = FUNC_2(VAR_4, VAR_6, &VAR_5);

 return FUNC_0(VAR_2, &VAR_7, &VAR_6, VAR_5, 0);
}
