
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_reg_access {int stat; int stream; int data; int cnt; int addr; } ;
struct rsxx_cardinfo {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct rsxx_cardinfo*,unsigned int,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rsxx_cardinfo *VAR_2,
    struct rsxx_reg_access *VAR_3,
    int VAR_4)
{
 unsigned int VAR_5 = VAR_4 ? VAR_0 : VAR_1;

 return FUNC_0(VAR_2, VAR_5, VAR_3->addr, VAR_3->cnt, VAR_3->data,
          VAR_3->stream, &VAR_3->stat);
}
