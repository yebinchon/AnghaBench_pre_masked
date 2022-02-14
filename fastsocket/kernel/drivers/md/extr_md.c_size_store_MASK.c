
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ dev_sectors; scalar_t__ pers; } ;
typedef int ssize_t ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct mddev*,int) ;
 int FUNC_1 (char const*,scalar_t__*) ;
 int FUNC_2 (struct mddev*,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_3(struct mddev *VAR_1, const char *VAR_2, size_t VAR_3)
{




 sector_t VAR_4;
 int VAR_5 = FUNC_1(VAR_2, &VAR_4);

 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_1->pers) {
  VAR_5 = FUNC_2(VAR_1, VAR_4);
  FUNC_0(VAR_1, 1);
 } else {
  if (VAR_1->dev_sectors == 0 ||
      VAR_1->dev_sectors > VAR_4)
   VAR_1->dev_sectors = VAR_4;
  else
   VAR_5 = -VAR_0;
 }
 return VAR_5 ? VAR_5 : VAR_3;
}
