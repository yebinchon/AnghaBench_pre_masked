
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_dma_user {int inuse; int * pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct stmp3xxx_dma_user* VAR_2 ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_3)
{
 struct stmp3xxx_dma_user *VAR_4 = VAR_2 + VAR_3;
 int VAR_5 = 0;

 if (!FUNC_2(VAR_3)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 if (!FUNC_1(VAR_3)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_0(VAR_4->pool == ((void*)0));
 FUNC_3(VAR_4->pool);
 VAR_4->inuse--;
out:
 return VAR_5;
}
