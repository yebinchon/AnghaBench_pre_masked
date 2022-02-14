
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {unsigned char class; int num; int card; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct sdio_func *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 VAR_3 = FUNC_1(VAR_2->card, 0, 0,
  FUNC_0(VAR_2->num) + VAR_0, 0, &VAR_4);
 if (VAR_3)
  goto out;

 VAR_4 &= 0x0f;

 if (VAR_4 == 0x0f) {
  VAR_3 = FUNC_1(VAR_2->card, 0, 0,
   FUNC_0(VAR_2->num) + VAR_1, 0, &VAR_4);
  if (VAR_3)
   goto out;
 }

 VAR_2->class = VAR_4;

out:
 return VAR_3;
}
