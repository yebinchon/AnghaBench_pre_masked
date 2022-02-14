
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct md_rdev {TYPE_1__* mddev; int flags; } ;
typedef int sector_t ;
struct TYPE_2__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct md_rdev*,int ,int,int *,int*) ;
 int FUNC_1 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_2 (struct md_rdev*,int ,int,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct md_rdev*,int ,int,struct page*,int,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct md_rdev *VAR_5, sector_t VAR_6,
       int VAR_7, struct page *VAR_8, int VAR_9)
{
 sector_t VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_10, &VAR_11)
     && (VAR_9 == VAR_1 || FUNC_6(VAR_4, &VAR_5->flags)))
  return -1;
 if (FUNC_4(VAR_5, VAR_6, VAR_7 << 9, VAR_8, VAR_9, 0))

  return 1;
 if (VAR_9 == VAR_2) {
  FUNC_3(VAR_4, &VAR_5->flags);
  if (!FUNC_5(VAR_3, &VAR_5->flags))
   FUNC_3(VAR_0,
    &VAR_5->mddev->recovery);
 }

 if (!FUNC_2(VAR_5, VAR_6, VAR_7, 0))
  FUNC_1(VAR_5->mddev, VAR_5);
 return 0;
}
