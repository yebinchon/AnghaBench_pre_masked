
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct address_space {TYPE_1__* host; } ;
typedef int sector_t ;
struct TYPE_2__ {int i_alloc_sem; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct address_space*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static sector_t FUNC_3(struct address_space *VAR_1, sector_t VAR_2)
{
 sector_t VAR_3;


 FUNC_0(&VAR_1->host->i_alloc_sem);
 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 FUNC_2(&VAR_1->host->i_alloc_sem);

 return VAR_3;
}
