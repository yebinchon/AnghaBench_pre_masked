
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_dma_user {char const* name; int inuse; int * pool; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct stmp3xxx_dma_user* VAR_4 ;
 int * FUNC_2 (char const*,struct device*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(int VAR_7, struct device *VAR_8, const char *VAR_9)
{
 struct stmp3xxx_dma_user *VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_4 + VAR_7;
 if (!FUNC_1(VAR_7)) {
  VAR_11 = -VAR_1;
  goto out;
 }
 if (FUNC_0(VAR_7)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_10->pool = FUNC_2(VAR_9, VAR_8, VAR_6,
         VAR_5, VAR_3);
 if (VAR_10->pool == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto out;
 }
 VAR_10->name = VAR_9;
 VAR_10->inuse++;
out:
 return VAR_11;
}
