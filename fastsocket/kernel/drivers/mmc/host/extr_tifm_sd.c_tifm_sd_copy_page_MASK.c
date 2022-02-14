
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_2, unsigned int VAR_3,
         struct page *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6)
{
 unsigned char *VAR_7 = FUNC_0(VAR_4, VAR_1) + VAR_5;
 unsigned char *VAR_8 = FUNC_0(VAR_2, VAR_0) + VAR_3;

 FUNC_2(VAR_8, VAR_7, VAR_6);

 FUNC_1(VAR_8 - VAR_3, VAR_0);
 FUNC_1(VAR_7 - VAR_5, VAR_1);
}
