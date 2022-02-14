
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmp; } ;
struct rsxx_cardinfo {TYPE_1__ log; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rsxx_cardinfo*,int ,int ,int,int ,int,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

int FUNC_3(struct rsxx_cardinfo *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_0,
       sizeof(VAR_3->log.tmp), VAR_3->log.tmp,
       1, VAR_2, ((void*)0));
 if (VAR_4)
  FUNC_2(FUNC_0(VAR_3),
   "Failed getting log text\n");

 return VAR_4;
}
