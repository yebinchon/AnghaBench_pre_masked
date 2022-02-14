
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipath_devdata {int dummy; } ;
typedef int ipath_err_t ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_devdata*,unsigned int,char*,int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned FUNC_3(struct ipath_devdata *VAR_2,
           ipath_err_t VAR_3, char *VAR_4,
           u32 VAR_5, int *VAR_6)
{
 unsigned long VAR_7;
 static unsigned long VAR_8;
 static unsigned VAR_9, VAR_10;






 VAR_7 = VAR_1;
 if (VAR_9 > 10) {
  if (FUNC_2(VAR_7, VAR_8)) {
   *VAR_6 = 1;
   if (!VAR_10++)
    VAR_8 = VAR_7 + VAR_0 * 3;
  }
  else if (VAR_10) {
   FUNC_0(VAR_2, VAR_10, VAR_4, VAR_5);
   VAR_10 = 0;
   VAR_9 = 0;
  }
 }
 else if (!VAR_9++ || FUNC_1(VAR_7, VAR_8))
  VAR_8 = VAR_7 + VAR_0 / 2;

 return VAR_10;
}
