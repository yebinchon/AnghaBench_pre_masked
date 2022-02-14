
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct page*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_5, int VAR_6)
{
 u32 VAR_7;

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_6 & VAR_0) {
  FUNC_1();

  FUNC_3(VAR_4->dev, VAR_2, &VAR_7);
  FUNC_4(VAR_4->dev, VAR_2,
           (((VAR_7 & VAR_1) |
      FUNC_2(VAR_5)) | VAR_3));
 }
 FUNC_0(VAR_5, VAR_6);
}
