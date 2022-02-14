
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_port_info {size_t index; scalar_t__ run; int card; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (struct fst_port_info*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline void
FUNC_3(struct fst_port_info *VAR_2, unsigned int VAR_3)
{
 VAR_3 |= FUNC_0(VAR_2->card, VAR_1[VAR_2->index]);
 FUNC_1(VAR_2->card, VAR_1[VAR_2->index], VAR_3);

 if (VAR_2->run)
  FUNC_2(VAR_2, VAR_0);
}
