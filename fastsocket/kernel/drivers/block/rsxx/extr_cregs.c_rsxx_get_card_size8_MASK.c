
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rsxx_cardinfo {int dummy; } ;
typedef int size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rsxx_cardinfo*,int ,int,unsigned int*,int ) ;

int FUNC_1(struct rsxx_cardinfo *VAR_2, u64 *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0,
    sizeof(VAR_4), &VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = (u64)VAR_4 * VAR_1;
 return 0;
}
