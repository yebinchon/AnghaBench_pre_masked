
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct l2t_data {int nentries; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(u32 VAR_0, int VAR_1,
        const struct l2t_data *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, 0) & (VAR_2->nentries - 1);
}
