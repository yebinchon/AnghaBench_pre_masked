
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int bytes_xfered; int blksz; int blocks; } ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cb710_slot*,struct mmc_data*) ;
 int FUNC_1 (struct cb710_slot*,struct mmc_data*) ;
 int FUNC_2 (struct cb710_slot*,int ) ;

__attribute__((used)) static int FUNC_3(struct cb710_slot *VAR_2,
 struct mmc_data *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->flags & VAR_1)
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_2, VAR_3);

 VAR_5 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_4)
  VAR_4 = VAR_5;

 if (!VAR_4)
  VAR_3->bytes_xfered = VAR_3->blksz * VAR_3->blocks;
 return VAR_4;
}
