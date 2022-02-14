
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct api_info {unsigned long major; unsigned long minor; int flags; scalar_t__ refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct api_info* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct api_info*) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

int FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
    unsigned long *VAR_8)
{
 struct api_info *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_2(&VAR_5, VAR_10);
 VAR_9 = FUNC_0(VAR_6);
 VAR_11 = -VAR_0;
 if (VAR_9) {
  if (VAR_9->refcnt) {
   VAR_11 = -VAR_0;
   if (VAR_9->major == VAR_7) {
    *VAR_8 = VAR_9->minor;
    VAR_11 = 0;
   }
  } else {
   unsigned long VAR_12;
   unsigned long VAR_13;

   VAR_13 = FUNC_4(VAR_6, VAR_7, *VAR_8,
         &VAR_12);
   VAR_11 = -VAR_0;
   if (VAR_13 == VAR_4) {
    *VAR_8 = VAR_12;
    VAR_9->major = VAR_7;
    VAR_9->minor = VAR_12;
    VAR_11 = 0;
   } else if (VAR_13 == VAR_2 ||
       VAR_13 == VAR_3) {
    if (VAR_9->flags & VAR_1) {
     if (VAR_7 == 1) {
      VAR_9->major = 1;
      VAR_9->minor = 0;
      *VAR_8 = 0;
      VAR_11 = 0;
     }
    }
   }
  }

  if (VAR_11 == 0)
   FUNC_1(VAR_9);
 }
 FUNC_3(&VAR_5, VAR_10);

 return VAR_11;
}
