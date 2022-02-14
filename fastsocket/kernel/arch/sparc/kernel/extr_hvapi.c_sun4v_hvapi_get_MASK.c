
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct api_info {unsigned long major; unsigned long minor; scalar_t__ refcnt; } ;


 int VAR_0 ;
 struct api_info* FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(unsigned long VAR_2,
      unsigned long *VAR_3,
      unsigned long *VAR_4)
{
 struct api_info *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(&VAR_1, VAR_6);
 VAR_7 = -VAR_0;
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 && VAR_5->refcnt) {
  *VAR_3 = VAR_5->major;
  *VAR_4 = VAR_5->minor;
  VAR_7 = 0;
 }
 FUNC_2(&VAR_1, VAR_6);

 return VAR_7;
}
