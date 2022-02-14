
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_dma_user {int pool; } ;
struct stmp3xxx_dma_descriptor {int command; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct stmp3xxx_dma_user* VAR_5 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_6 ;

int FUNC_5(int VAR_7,
      struct stmp3xxx_dma_descriptor *VAR_8)
{
 struct stmp3xxx_dma_user *VAR_9 = VAR_5 + VAR_7;
 int VAR_10 = 0;

 if (!FUNC_1(VAR_7)) {
  VAR_10 = -VAR_2;
  goto out;
 }
 if (!FUNC_0(VAR_7)) {
  VAR_10 = -VAR_0;
  goto out;
 }
 if (VAR_8 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto out;
 }


 VAR_8->command =
     FUNC_3(VAR_9->pool, VAR_4, &VAR_8->handle);


 if (!VAR_8->command) {
  VAR_10 = -VAR_3;
  goto out;
 }

 FUNC_4(VAR_8->command, 0, VAR_6);
out:
 FUNC_2(VAR_10);
 return VAR_10;
}
