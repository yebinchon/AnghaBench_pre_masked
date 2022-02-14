
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_rb; int sd_subch; int sd_nasid; } ;


 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static inline int
FUNC_1(struct subch_data_s *VAR_0, int *VAR_1)
{
 return FUNC_0(VAR_0->sd_nasid, VAR_0->sd_subch, VAR_0->sd_rb, VAR_1);
}
