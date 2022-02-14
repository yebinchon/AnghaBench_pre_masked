
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {TYPE_1__* cspec; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ cntrnamelen; int ncntrs; int * cntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qib_devdata*,int) ;
 int FUNC_1 (struct qib_devdata*,int) ;

__attribute__((used)) static u32 FUNC_2(struct qib_devdata *VAR_4, loff_t VAR_5, char **VAR_6,
         u64 **VAR_7)
{
 u32 VAR_8;

 if (VAR_6) {
  VAR_8 = VAR_4->cspec->cntrnamelen;
  if (VAR_5 >= VAR_8)
   VAR_8 = 0;
  else
   *VAR_6 = (char *) VAR_3;
 } else {
  u64 *VAR_9 = VAR_4->cspec->cntrs;
  int VAR_10;

  VAR_8 = VAR_4->cspec->ncntrs * sizeof(u64);
  if (!VAR_9 || VAR_5 >= VAR_8) {

   VAR_8 = 0;
   goto done;
  }
  *VAR_7 = VAR_9;
  for (VAR_10 = 0; VAR_10 < VAR_4->cspec->ncntrs; VAR_10++)
   if (VAR_2[VAR_10] & VAR_0)
    *VAR_9++ = FUNC_0(VAR_4,
        VAR_2[VAR_10] &
        VAR_1);
   else
    *VAR_9++ = FUNC_1(VAR_4,
          VAR_2[VAR_10]);
 }
done:
 return VAR_8;
}
