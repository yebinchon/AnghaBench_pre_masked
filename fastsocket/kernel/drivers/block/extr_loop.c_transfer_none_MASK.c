
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct loop_device {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct loop_device *VAR_3, int VAR_4,
    struct page *VAR_5, unsigned VAR_6,
    struct page *VAR_7, unsigned VAR_8,
    int VAR_9, sector_t VAR_10)
{
 char *VAR_11 = FUNC_1(VAR_5, VAR_0) + VAR_6;
 char *VAR_12 = FUNC_1(VAR_7, VAR_1) + VAR_8;

 if (VAR_4 == VAR_2)
  FUNC_3(VAR_12, VAR_11, VAR_9);
 else
  FUNC_3(VAR_11, VAR_12, VAR_9);

 FUNC_2(VAR_12, VAR_1);
 FUNC_2(VAR_11, VAR_0);
 FUNC_0();
 return 0;
}
